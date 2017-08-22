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


class WebViewController: UIViewController, WKScriptMessageHandler {
    
    @IBOutlet var containerView: UIView!
    var webView: WKWebView!
    
    var beaconManager: KTKBeaconManager!
    var beaconList:[CLBeacon] = []
    
    //TODO want to be a Lookuptable
    var exhibits: [[String:Any]] = [
        [
            "ID" : "CFra",
            "location-type" : "onExhibit",
            "ble-major" : 10,
            "ble-minor" : 100,
            "location-name" : "Kerstin on"
        ],
        [
            "ID" : "eGQg",
            "location-type" : "atExhibit",
            "ble-major" : 10,
            "ble-minor" : 101,
            "location-name" : "Kerstin at"
        ],
        [
            "ID" : "IfGo",
            "location-type" : "atExhibit",
            "ble-major" : 10,
            "ble-minor" : 1002,
            "location-name" : "Stud Assi at"
        ],
        [
            "ID" : "FT45",
            "location-type" : "atExhibit",
            "ble-major" : 10,
            "ble-minor" : 1000,
            "location-name" : "Flo at"
        ],
        [
            "ID" : "D7Oj",
            "location-type" : "atExhibit",
            "ble-major" : 10,
            "ble-minor" : 1001,
            "location-name" : "Drucker at"
        ],
        [
            "ID" : "7N9p",
            "location-type" : "atExhibit",
            "ble-major" : 10,
            "ble-minor" : 10,
            "location-name" : "Door office 1"
        ]
    ]
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        
        // Adding webView content
        do {
            guard let filePath = Bundle.main.path(forResource: "index", ofType: "html")
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
        
        // TODO Webview not fully loaded at this time
        let exec2 = "sayHello()"
        webView.evaluateJavaScript(exec2, completionHandler: nil)
        
        
        // initialize BeaconManager
        beaconManager = KTKBeaconManager(delegate: self)
        
        switch KTKBeaconManager.locationAuthorizationStatus() {
        case .notDetermined:
            beaconManager.requestLocationAlwaysAuthorization()
            print("start beacon")
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
    
    
    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
    }
    
    override func loadView() {
        super.loadView()
        
        let contentController = WKUserContentController()
        let config = WKWebViewConfiguration()
        /*
        let userScript = WKUserScript(
            source: "redHeader()",
            injectionTime: WKUserScriptInjectionTime.atDocumentEnd,
            forMainFrameOnly: true
        )
        
        contentController.addUserScript(userScript)
        */
        contentController.add(
            self,
            name: "observe"
        )
 
        
        config.userContentController = contentController
        
        self.webView = WKWebView(
            frame: self.containerView.bounds,
            configuration: config
        )
        
        self.view = self.webView
    }
    
    func userContentController(_ userContentController: WKUserContentController, didReceive message: WKScriptMessage) {
        print("Received event \(message.body)")
        
     /*
        if(message.name == "callbackHandler") {
            print("JavaScript is sending a message \(message.body)")
        }
       */
        print(message.body)
        
        
        let device = UIDevice()
        let deviceValue = device.value(forKey: message.body as! String)
        let mystring = String(describing: deviceValue)
        
        
        let exec = "set_headline(\"\(mystring)\")"
        webView.evaluateJavaScript(exec, completionHandler: nil)
    }
}

extension WebViewController: KTKBeaconManagerDelegate{
    func beaconManager(_ manager: KTKBeaconManager, didChangeLocationAuthorizationStatus status: CLAuthorizationStatus) {
        if status == .authorizedAlways{
            // When status changes to CLAuthorizationStatus.authorizedAlways
            // e.g. after calling beaconManager.requestLocationAlwaysAuthorization()
            // we can start region monitoring from here
            if KTKBeaconManager.isMonitoringAvailable() {
                print("start scan")
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
                // if(beaconList.count == 0){
                beaconList.append(beacon)
                /* }else{
                 for(index, listBeacon) in beaconList.enumerated(){
                 if(beacon.minor == listBeacon.minor){
                 beaconList[index] = (beacon)
                 }else{
                 beaconList.append(beacon)
                 }
                 }
                 }*/
            }
        }
        
        /* print("-------")
         
         print(beaconList)*/
        
        if beaconList.count>0{
            //updateDistance(beacons[0].proximity)
            
            //beaconList = beacons;
            
           // tableView.reloadData()
            
            
            
            let myBeacon = beaconList[0]
            
            
            let beacon1 = exhibits.index(where: { (exhibit) -> Bool in
                if(exhibit["ble-minor"] as! Int == myBeacon.minor as! Int){
                    //print("same")
                    //print(exhibit)
                    updateExhibit(myBeacon.proximity, exhibit: exhibit)
                    return true
                }
                return false
            })
            
            // let beacon1 = keyOfBeacon(major: beaconArray[0].major as! Int)
            // print("beacon \(String(describing: beacon1))")
            
        }/*else{
         updateDistance(.unknown)
         }*/
    }
    
    
    // Check if Beacon is reliable (rssi < 0) and if it is in our range compared to exhibits (later LUT)
    func isOurBeaconReliable(myBeacon: CLBeacon) -> Bool{
        
        var beaconResult:Bool = false
        
        if(myBeacon.rssi < 0){
            exhibits.forEach{exhibit in
                if(exhibit["ble-minor"] as! Int == myBeacon.minor as! Int){
                    beaconResult = true
                }
            }
        }
        
        return beaconResult
    }
    
    func updateExhibit(_ distance: CLProximity, exhibit: [String:Any]){
        
        let locationName = exhibit["location-name"]
       // statusLabel.text = "Your are \(locationName!)"
        print("Your are \(locationName!)")
        UIView.animate(withDuration: 0.8){
            switch distance{
            case .far:
                self.view.backgroundColor = UIColor.blue
                
            case .near:
                self.view.backgroundColor = UIColor.orange
                
            case .immediate:
                self.view.backgroundColor = UIColor.red
                
            default:
                self.view.backgroundColor = UIColor.gray
            }
        }
    }
    
}
