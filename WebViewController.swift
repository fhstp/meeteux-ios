//
//  WebViewController.swift
//  Unity-iPhone
//
//  Created by Kerstin Blumenstein on 18/08/2017.
//

//
import UIKit
import WebKit
import CoreLocation
import KontaktSDK
import Darwin
import AudioToolbox
import AVFoundation

class WebViewController: UIViewController, WKScriptMessageHandler {
    
    @IBOutlet var containerView: UIView!
    var webView: WKWebView!
    
    var beaconManager: KTKBeaconManager!
    var beaconList:[CLBeacon] = []

    override func viewDidLoad()
    {
        super.viewDidLoad()

        // Adding webView content
        do {
            guard let filePath = Bundle.main.path(forResource: "index", ofType: "html", inDirectory: "www")
                else {
                    // File Error
                    print ("File reading error")
                    return
            }
            
            let contents =  try String(contentsOfFile: filePath, encoding: .utf8)
            let baseUrl = URL(fileURLWithPath: filePath)
            self.webView!.loadHTMLString(contents as String, baseURL: baseUrl)
           
        }
        catch {
            print ("File HTML error")
        }
    }
    
    
    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
    }
    
    override func loadView() {
        super.loadView()
        
        let contentController = WKUserContentController()
        let config = WKWebViewConfiguration()

        // Define messages that are accepted by the webview
        contentController.add(
            self,
            name: "observe"
        )
        
        contentController.add(
            self,
            name: "getDeviceInfos"
        )
        
        contentController.add(
            self,
            name: "registerOD"
        )
        
        contentController.add(
            self,
            name: "triggerSignal"
        )
        
        
        config.userContentController = contentController
        
        self.webView = WKWebView(
            frame: self.containerView.bounds,
            configuration: config
        )
        
        self.view = self.webView
    }
    
    //- MARK: Web to native calls
    func userContentController(_ userContentController: WKUserContentController, didReceive message: WKScriptMessage) {
        print("Received event \(message.name) \(message.body)")
        
        switch "\(message.name)" {
        case "getDeviceInfos":
            getDeviceInformation()
        case "registerOD":
            // start beacon Scan
            startBeaconScanning()
        case "triggerSignal":
            triggerSignal();
        default:
            let exec = "set_headline(\"You are here ... really\")"
            webView.evaluateJavaScript(exec, completionHandler: nil)
        }
    }
    
    
    //- MARK: Helper Functions
    func getDeviceInformation(){
        let mydevice = UIDevice.current
        print("UDID: \(mydevice.identifierForVendor?.uuidString) systemName: \(mydevice.systemName) systemVersion: \(mydevice.systemVersion) model: \(mydevice.model)")
        
        let dict = [
            "deviceAddress": mydevice.identifierForVendor?.uuidString,
            "deviceOS": mydevice.systemName,
            "deviceVersion": mydevice.systemVersion,
            "deviceModel": mydevice.model
        ]
        
        sendDictToWeb(myDict: dict, functionCall: "send_device_infos")
        
        // for all possbile device attributes and actions: https://developer.apple.com/documentation/uikit/uidevice
    }
    
    // sends dictionary to webview
    func sendDictToWeb(myDict: Any, functionCall: String){
        let jsonString = getJSONString(myDict: myDict)
        
        // Send the location update to the page
        self.webView.evaluateJavaScript("\(functionCall)(\(jsonString))") { result, error in
            guard error == nil else {
                print(error!)
                return
            }
        }
    }
    
    // generate a JSON String from a Dictionary
    func getJSONString(myDict: Any) -> String{
        let jsonData = try! JSONSerialization.data(withJSONObject: myDict, options: [])
        let jsonString = String(data: jsonData, encoding: String.Encoding.utf8)!
        
        return jsonString
    }
    
    func startBeaconScanning(){
        // initialize BeaconManager
        beaconManager = KTKBeaconManager(delegate: self)
        print("bluetooth ready")
        
        switch KTKBeaconManager.locationAuthorizationStatus() {
        case .notDetermined:
            beaconManager.requestLocationAlwaysAuthorization()
            print("access ok")
        case .denied, .restricted:
            // No access to Location Service
            print("access denied")
        case .authorizedWhenInUse:
            // For most iBeacon-based app this type of
            // permission is not adequate
            print("access only when in use")
        case .authorizedAlways:
            print("tbd")
        }
    }
    
    func triggerSignal(){
        let systemSoundID: SystemSoundID = 1306 // tock
        AudioServicesPlayAlertSound(systemSoundID)
    }
}

extension WebViewController: KTKBeaconManagerDelegate{
    func beaconManager(_ manager: KTKBeaconManager, didChangeLocationAuthorizationStatus status: CLAuthorizationStatus) {
        print("didChangeLocationAuthorizationStatus")
        if status == .authorizedAlways{
            print("authorizedAlways")
            // When status changes to CLAuthorizationStatus.authorizedAlways
            // e.g. after calling beaconManager.requestLocationAlwaysAuthorization()
            // we can start region monitoring from here
            if KTKBeaconManager.isMonitoringAvailable() {
                print("start scanning")
                startScanning()
            }
            
        }
    }
    
    func startScanning(){
        let myProximityUuid = UUID(uuidString: "f7826da6-4fa2-4e98-8024-bc5b71e0893e")
        let region = KTKBeaconRegion(proximityUUID: myProximityUuid!, identifier: "Beacon region 1")
        
        
        beaconManager.startMonitoring(for: region)
        beaconManager.startRangingBeacons(in: region)
        
        print("start scanning")
        
    }
    
    func beaconManager(_ manager: KTKBeaconManager, didStartMonitoringFor region: KTKBeaconRegion) {
        // Do something when monitoring for a particular
        // region is successfully initiated
    }
    
    func beaconManager(_ manager: KTKBeaconManager, monitoringDidFailFor region: KTKBeaconRegion?, withError error: NSError?) {
        // Handle monitoring failing to start for your region
    }
    
    func beaconManager(_ manager: KTKBeaconManager, didEnter region: KTKBeaconRegion) {
        // Decide what to do when a user enters a range of your region; usually used
        // for triggering a local notification and/or starting a beacon ranging
        manager.startRangingBeacons(in: region)
    }
    
    func beaconManager(_ manager: KTKBeaconManager, didExitRegion region: KTKBeaconRegion) {
        // Decide what to do when a user exits a range of your region; usually used
        // for triggering a local notification and stoping a beacon ranging
        manager.stopRangingBeacons(in: region)
    }
    
    func beaconManager(_ manager: KTKBeaconManager, didRangeBeacons beacons: [CLBeacon], in region: KTKBeaconRegion) {
        
        beaconList = []
        // Go through beacons, check if it is our and reliable --> push into empty beaconList
        beacons.forEach { beacon in
            if(isOurBeaconReliable(myBeacon: beacon)){
                
                // get number of digits --> == 3 immediate (on), == 2 near (at)
                let digits = String(describing: beacon.major).count
                //print("\(beacon.major) = Digits of Major: \(digits)")
                
                if(digits == 3 && beacon.proximity == .immediate){
                    //print("immediate")
                    beaconList.append(beacon)
                }else if(digits == 2 && (beacon.proximity == .near || beacon.proximity == .immediate)){
                    //print("near")
                    beaconList.append(beacon)
                }
            }
        }
        
        // sort beacon list
        beaconList.sorted(by: { $0.rssi > $1.rssi })
        
        if beaconList.count>0{
            let myBeacon = beaconList[0]
            
            // send major, minor to webview
            let dict = [
                "major": myBeacon.major,
                "minor": myBeacon.minor
            ]
            
            sendDictToWeb(myDict: dict, functionCall: "update_location")
        }

    }
    
    
    // Check if Beacon is reliable (rssi < 0) and if it is in our range compared to exhibits (later LUT)
    func isOurBeaconReliable(myBeacon: CLBeacon) -> Bool{
        var beaconResult:Bool = false
        
        if(myBeacon.rssi < 0){
            beaconResult = true
        }
        
        return beaconResult
    }
}
