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
import SwiftKeychainWrapper
import UserNotifications
import SystemConfiguration.CaptiveNetwork

class WebViewController: UIViewController, WKScriptMessageHandler, UNUserNotificationCenterDelegate {
    
    @IBOutlet var containerView: UIView!
    var webView: WKWebView!

    var beaconManager: KTKBeaconManager!
    var beaconList:[CLBeacon] = []
    
    var lastBeacon: CLBeacon!
    var beaconDict: [NSNumber: CircularBuffer] = [:]
    
    let locationManager = CLLocationManager()
    
    override func viewDidLoad()
    {
        webView.isMultipleTouchEnabled = false
        super.viewDidLoad()
        
        //UIApplication.shared.applicationIconBadgeNumber = 0 //delet badge count
        if #available(iOS 10.0, *) {
            UNUserNotificationCenter.current().requestAuthorization(options: [.alert, .sound, .badge], completionHandler: { (granted, error) in
                // Handle Error
            })
        } else {
            
            print("Fallback on earlier versions")
        }
        
        // Adding webView content
        do {
            guard let filePath = Bundle.main.path(forResource: "index", ofType: "html", inDirectory: "www")
                else {
                    // File Error
                    print ("File reading error")
                    return
            }
            
            webView.configuration.preferences.setValue(true, forKey: "allowFileAccessFromFileURLs");
            
            let contents =  try String(contentsOfFile: filePath, encoding: .utf8)
            let baseUrl = URL(fileURLWithPath: filePath)
            self.webView!.loadHTMLString(contents as String, baseURL: baseUrl)
            locationManager.requestAlwaysAuthorization()
            
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
        
        config.userContentController = contentController
        
        self.webView = WKWebView(
            frame: self.view.bounds,
            configuration: config
        )
        webView.isMultipleTouchEnabled = false
        
        self.view = self.webView
    }
    
    //- MARK: Web to native calls
    func userContentController(_ userContentController: WKUserContentController, didReceive message: WKScriptMessage) {
        let dict = message.body as? NSDictionary
        //print("The message is: \(dict!["name"] as? String)")
        if var messageName = dict!["name"] as? String
        {
            // print("Received message \(messageName)")
            //////////////////when application goes into background messageName becomes print and does not start scanning when restarted for now this is here fixed
            if(messageName == "print"){
                messageName = "registerOD"
            }
            //////////////////
            switch (messageName) {
            case "getDeviceInfos":
                getDeviceInformation()
                break
            case "registerOD":
                // start beacon Scan
                startBeaconScanning()
                break
            case "triggerSignal":
                triggerSignal()
                break
            case "getToken":
                getToken()
                sendWifiSSIDToWeb()
                break
            case "saveToken":
                saveToken(token: dict!["data"] as Any)
                break
            case "clearToken":
                deleteToken()
                break
            case "showBackgroundNotification":
                triggerNotivication()
                break
            default:
                print(dict!["data"] as Any)
                break
            }
        }
    }
    
    func sendWifiSSIDToWeb()
    {
        let ssid = getWiFiSSID()
        sendDictToWeb(myDict: ["ssid": ssid], functionCall: "send_wifi_ssid")
    }
    
    func getWiFiSSID() -> String?
    {
        var ssid: String?
        if let interfaces = CNCopySupportedInterfaces() as NSArray? {
            for interface in interfaces {
                if let interfaceInfo = CNCopyCurrentNetworkInfo(interface as! CFString) as NSDictionary? {
                    ssid = interfaceInfo[kCNNetworkInfoKeySSID as String] as? String
                    break
                }
            }
        }
        return ssid
    }
    
    
    //- MARK: Helper Functions

    func saveToken(token: Any)
    {
        // print("save");
        // print(token)
        if let stringToken = token as? String
        {
            // print(stringToken)
            KeychainWrapper.standard.set(stringToken, forKey: "token")
        }
    }
    
    func deleteToken()
    {
        KeychainWrapper.standard.removeObject(forKey: "token")
        
        sendMessageToWeb(functionCall: "logout_success")
        
        stopScanning()
    }
    
    func getToken()
    {
        let token: String? = KeychainWrapper.standard.string(forKey: "token")
        let dict = [
            "token": token
        ]
        // print("Stored Token: \(token)")
        sendDictToWeb(myDict: dict, functionCall: "send_token")
    }
    
    // prepars dict for sending device infos to web
    func getDeviceInformation(){
        let mydevice = UIDevice.current
        // print("UDID: \(String(describing: mydevice.identifierForVendor?.uuidString)) systemName: \(mydevice.systemName) systemVersion: \(mydevice.systemVersion) model: \(mydevice.model)")
        
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
        // print("SendDictToWeb JSON (\(functionCall)): \(jsonString)")
        
        // Send the location update to the page
        self.webView.evaluateJavaScript("\(functionCall)(\(jsonString))") { result, error in
            guard error == nil else {
                print("SendDictToWeb throw Error: \(error!)")
                return
            }
        }
    }
    
    // sends dictionary to webview
    func sendMessageToWeb(functionCall: String){
        // print("SendMessageToWeb (\(functionCall))")
        
        // Send the location update to the page
        self.webView.evaluateJavaScript("\(functionCall)()") { result, error in
            guard error == nil else {
                print("SendDictToWeb throw Error: \(error!)")
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
    
    // starts scanning for beacons
    func startBeaconScanning(){
        // initialize BeaconManager
        beaconManager = KTKBeaconManager(delegate: self)
        // print("bluetooth ready")
        
        switch KTKBeaconManager.locationAuthorizationStatus() {
        case .notDetermined:
            beaconManager.requestLocationAlwaysAuthorization()
            // print("access ok")
        case .denied, .restricted:
            // No access to Location Service
            print("access denied")
        case .authorizedWhenInUse:
            // For most iBeacon-based app this type of
            // permission is not adequate
            print("access only when in use")
        case .authorizedAlways:
            print("authorizedAlways")
        }
    }
    
    func triggerSignal(){
        //let systemSoundID: SystemSoundID = 1306 // tock
        AudioServicesPlayAlertSound(SystemSoundID(kSystemSoundID_Vibrate))
    }
    
    func triggerNotivication(){
        if #available(iOS 10.0, *) {
            // print("Trigger Notification for Timeline Update")
            let content = UNMutableNotificationContent()
            
            content.title = NSLocalizedString("Your Timeline was updated.", comment: "")
            content.subtitle = NSLocalizedString("A new location was unlocked in your timeline", comment: "")
            content.badge = 1
            let trigger = UNTimeIntervalNotificationTrigger(timeInterval: 0.01, repeats: false)
            let request = UNNotificationRequest(identifier: "LocationUpdate", content: content, trigger: trigger)
            UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
        } else {
            // Fallback on earlier versions
            print("noIOS 10.0")
            return
        }
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.setNeedsStatusBarAppearanceUpdate()
    }
    override var preferredStatusBarStyle : UIStatusBarStyle {
        return .default
    }
}

extension WebViewController: KTKBeaconManagerDelegate{
    
    func beaconManager(_ manager: KTKBeaconManager, didChangeLocationAuthorizationStatus status: CLAuthorizationStatus) {
        
        // print("didChangeLocationAuthorizationStatus")
        if status == .authorizedAlways{
            // print("authorizedAlways")
            
            // When status changes to CLAuthorizationStatus.authorizedAlways
            // e.g. after calling beaconManager.requestLocationAlwaysAuthorization()
            // we can start region monitoring from here
            if KTKBeaconManager.isMonitoringAvailable() {
                //print("start scanning")
                startScanning()
            }
        }
    }
    
    func startScanning(){
        let myProximityUuid = UUID(uuidString: "f7826da6-4fa2-4e98-8024-bc5b71e0893e")
        let region = KTKBeaconRegion(proximityUUID: myProximityUuid!, identifier: "Beacon region 1")
        
        
        beaconManager.startMonitoring(for: region)
        beaconManager.startRangingBeacons(in: region)
        
        // print("start scanning")
    }
    
    func stopScanning(){
        beaconManager.stopMonitoringForAllRegions()
        lastBeacon = nil
        // print("stop scanning")
    }
    
    func beaconManager(_ manager: KTKBeaconManager, didStartMonitoringFor region: KTKBeaconRegion) {
        // Do something when monitoring for a particular
        // region is successfully initiated
    }
    
    func beaconManager(_ manager: KTKBeaconManager, monitoringDidFailFor region: KTKBeaconRegion?, withError error: Error?) {
        // Handle monitoring failing to start for your region
    }
    
    func beaconManager(_ manager: KTKBeaconManager, rangingBeaconsDidFailFor region: KTKBeaconRegion?, withError error: Error?)
    {
        if let clErr = error as? CLError
        {
            if clErr.code == CLError.rangingUnavailable
            {
                let alertController = UIAlertController (title: NSLocalizedString("Bluetooth is off", comment: ""), message: NSLocalizedString("Please turn on your bluetooth", comment: ""), preferredStyle: .alert)
                
                let settingsAction = UIAlertAction(title: NSLocalizedString("Go to settings", comment: ""), style: .default) { (_) -> Void in
                    
                    guard let settingsUrl = URL(string: UIApplicationOpenSettingsURLString) else {
                        return
                    }
                    
                    if UIApplication.shared.canOpenURL(settingsUrl) {
                        UIApplication.shared.open(settingsUrl, completionHandler: { (success) in
                            print("Settings opened: \(success)") // Prints true
                        })
                    }
                }
                alertController.addAction(settingsAction)
                let cancelAction = UIAlertAction(title: NSLocalizedString("Cancel", comment: ""), style: .default, handler: nil)
                alertController.addAction(cancelAction)
                
                present(alertController, animated: true, completion: nil)
            }
        }
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
        // print("beaconManager called")
        // print(beacons)
        beaconList = []
        // Go through beacons, check if it is our and reliable --> push into empty beaconList
        beacons.forEach { beacon in
            if(isOurBeaconReliable(myBeacon: beacon)){
                // beaconList.append(beacon)
                
                // get number of digits --> == 3 immediate (on), == 2 near (at)
                let digits = String(describing: beacon.major).count
                // print("\(beacon.major) = Digits of Major: \(digits)")
                
                if(digits == 3 && beacon.proximity == .immediate){
                    //print("immediate")
                    beaconList.append(beacon)
                }else if(digits == 2 && (beacon.proximity == .near || beacon.proximity == .immediate)){
                    //print("near")
                    beaconList.append(beacon)
                }
            }
        }
        
        // sort beacon list and send first item to Webview
        if beaconList.sorted(by: { $0.rssi > $1.rssi }).count>0{
            
            for beacon in beaconList
            {
                if let buffer = self.beaconDict[beacon.minor]
                {
                    buffer.add(value: beacon.rssi);
                }
                else {
                    self.beaconDict[beacon.minor] = CircularBuffer();
                    let newBuffer = self.beaconDict[beacon.minor];
                    newBuffer?.add(value: beacon.rssi);
                }
            }
            
            for (minor, buffer) in self.beaconDict
            {
                var contains = false;
                for beacon in beaconList
                {
                    if(beacon.minor.isEqual(to: minor))
                    {
                        contains = true;
                    }
                }
                
                if(!contains)
                {
                    buffer.add(value: -100)
                    // maybe delete buffer
                    
                }
            }
            
            var nearestRssi: Float = -999;
            var nearest: NSNumber = 0;
            
            for (minor, buffer) in self.beaconDict
            {
                let median = buffer.median();
                // print("Beacon:", minor, "Median:", median);
                
                if(median > nearestRssi)
                {
                    nearest = minor;
                    nearestRssi = median;
                }
            }
            
            var nearestBeacon: CLBeacon = beaconList[0];
            for beacon in beaconList
            {
                if(beacon.minor.isEqual(to: nearest))
                {
                    nearestBeacon = beacon;
                }
            }
            
            // print("Nearest Beacon: ", nearestBeacon.minor);
            
            // Beacon check will now be done in the web app
            /*
            if lastBeacon != nil{
                // compare to lastBeacon, if not the same, than sendToWeb
                if(myBeacon.major != lastBeacon.major || myBeacon.minor != lastBeacon.minor){
                    sendBeacon(beacon: myBeacon)
                }
            } else {
                sendBeacon(beacon: myBeacon)
            }*/
            
            sendBeacon(beacon: nearestBeacon)
            
            //print("range Beacon")
        }
    }
    
    // prepares beacon for sending to web
    func sendBeacon(beacon: CLBeacon){
        let dict = [
            "major": beacon.major,
            "minor": beacon.minor
        ]
        sendDictToWeb(myDict: dict, functionCall: "update_location")
        
        lastBeacon = beacon
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

