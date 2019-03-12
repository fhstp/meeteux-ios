//
//  ViewController.swift
//  VuforiaSample
//
//  Created by Yoshihiro Kato on 2016/07/02.
//  Copyright © 2016年 Yoshihiro Kato. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var backButton: UIButton!
    
    @IBOutlet weak var cameraView: UIView!
    
    @objc let vuforiaLicenseKey = "AYsYrdX/////AAAACIoVAWiG4keZjev8bbFmlFN/2KIncjmco1ZxK21r/tNMhX41T44wuKsKxhAkqTJ+O8EFT6l2LK+tRn0KrPbh9yw2mW1nlNt6uiZxLjgrk7TFzHCVlsS6s57NYcl84vzqR0tBkbVXP3Nrz8EJ0CfTvl0oVm6RsBoS8Yqk7w9ypbXDTlpsyDMejEaPNpcUGhNtdsMdznoTbccG18UTqwwFZSNHqwtKjPKQ1XxY7eIAVmkWkD1g19VhnGd8nwK5MSBmo5DjTPS7iDW4wbq6xzysM7lHp76qBuUR5mmyPH3w87aFzXPaMwJi1yTyhJN7IoKwDhJtqC9KHQ1jIg/yo9IZ49jw/DCqsBDrxtOjneLdZtLB"
    @objc let vuforiaDataSetFile = "stiftklosterneuburg.xml"
    
    @objc var vuforiaManager: VuforiaManager? = nil
    
    @objc let boxMaterial = SCNMaterial()
    fileprivate var lastSceneName: String? = nil
    
    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        prepare()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        do {
            try vuforiaManager?.stop()
        }catch let error {
            print("\(error)")
        }
    }
    @IBAction func dismissARView(_ sender: Any) {
        dismiss(animated: true, completion: nil)
    }
}

private extension ViewController {
    func prepare() {
        vuforiaManager = VuforiaManager(licenseKey: vuforiaLicenseKey, dataSetFile: vuforiaDataSetFile)
        if let manager = vuforiaManager {
            manager.delegate = self
            manager.eaglView.sceneSource = self
            manager.eaglView.delegate = self
            manager.eaglView.setupRenderer()
            self.view = manager.eaglView
            
            self.view.addSubview(backButton)
            self.view.bringSubviewToFront(backButton)
            let margins = self.view.layoutMarginsGuide
            backButton.trailingAnchor.constraint(equalTo: margins.trailingAnchor, constant: 0).isActive = true
            backButton.topAnchor.constraint(equalTo: margins.topAnchor, constant: 10).isActive = true
        }
        
        let notificationCenter = NotificationCenter.default
        notificationCenter.addObserver(self, selector: #selector(didRecieveWillResignActiveNotification),
                                       name: UIApplication.willResignActiveNotification, object: nil)
        
        notificationCenter.addObserver(self, selector: #selector(didRecieveDidBecomeActiveNotification),
                                       name: UIApplication.didBecomeActiveNotification, object: nil)
        
        vuforiaManager?.prepare(with: .portrait)
    }
    
    func pause() {
        do {
            try vuforiaManager?.pause()
        }catch let error {
            print("\(error)")
        }
    }
    
    func resume() {
        do {
            try vuforiaManager?.resume()
        }catch let error {
            print("\(error)")
        }
    }
}

extension ViewController {
    @objc func didRecieveWillResignActiveNotification(_ notification: Notification) {
        pause()
    }
    
    @objc func didRecieveDidBecomeActiveNotification(_ notification: Notification) {
        resume()
    }
}

extension ViewController: VuforiaManagerDelegate {
    func vuforiaManagerDidFinishPreparing(_ manager: VuforiaManager!) {
        print("did finish preparing\n")
        
        do {
            try vuforiaManager?.start()
            vuforiaManager?.setContinuousAutofocusEnabled(true)
        }catch let error {
            print("\(error)")
        }
    }
    
    func vuforiaManager(_ manager: VuforiaManager!, didFailToPreparingWithError error: Error!) {
        print("did faid to preparing \(String(describing: error))\n")
    }
    
    func vuforiaManager(_ manager: VuforiaManager!, didUpdateWith state: VuforiaState!) {
        for index in 0 ..< state.numberOfTrackableResults {
            let result = state.trackableResult(at: index)
            let trackerableName = result?.trackable.name
    
            if trackerableName == "Sunthaym1" {
                
                if lastSceneName != "Sunthaym1" {
                    manager.eaglView.setNeedsChangeSceneWithUserInfo(["scene" : "Sunthaym1"])
                    lastSceneName = "Sunthaym1"
                }
            }else if trackerableName == "Sunthaym2"{
                
                if lastSceneName != "Sunthaym2" {
                    manager.eaglView.setNeedsChangeSceneWithUserInfo(["scene" : "Sunthaym2"])
                    lastSceneName = "Sunthaym2"
                }
            }else if trackerableName == "Shrine"{
                
                if lastSceneName != "Shrine" {
                    manager.eaglView.setNeedsChangeSceneWithUserInfo(["scene" : "Shrine"])
                    lastSceneName = "Shrine"
                }
            }else if trackerableName == "Accounting"{
                
                if lastSceneName != "Accounting" {
                    manager.eaglView.setNeedsChangeSceneWithUserInfo(["scene" : "Accounting"])
                    lastSceneName = "Accounting"
                }
            }
            
        }
    }
}

extension ViewController: VuforiaEAGLViewSceneSource, VuforiaEAGLViewDelegate {
    
    func scene(for view: VuforiaEAGLView!, userInfo: [String : Any]?) -> SCNScene! {
        guard let userInfo = userInfo else {
            print("default scene")
            return createSunthaymOne(with: view)
        }
        
        let sceneName = userInfo["scene"] as? String
        if sceneName == "Sunthaym1" {
            print("Sunthaym1 scene")
            return createSunthaymOne(with: view)
        }else if sceneName == "Sunthaym2" {
            print("Sunthaym2 scene")
            return createSunthaymTwo(with: view)
        }else if sceneName == "Shrine" {
            print("Shrine scene")
            return createShrine(with: view)
        }else if sceneName == "Accounting" {
            print("accounting scene")
            return createAccountingBook(with: view)
        }
        else {
            return createSunthaymTwo(with: view)
        }
        
    }
    
    func setupScene(with view: VuforiaEAGLView, x: CGFloat, y: CGFloat, image: String) -> SCNScene{
        
        let scene = SCNScene()
    
        let imageNode = SCNNode()
        imageNode.name = "image"
        let imageMaterial = SCNMaterial()
        imageNode.geometry = SCNPlane(width: x*view.objectScale, height: y*view.objectScale)
        imageNode.position = SCNVector3Make(0, 0, -1)
        imageMaterial.diffuse.contents = UIImage(named: image)
        imageNode.geometry?.firstMaterial = imageMaterial
        scene.rootNode.addChildNode(imageNode)
        
        return scene
        
    }
    
    
    fileprivate func createSunthaymOne(with view: VuforiaEAGLView) -> SCNScene {
      
        let scene = setupScene(with: view, x: 1060.0,y: 808.0,image: "sunthaymDe1" )
        return scene
    }
    
    fileprivate func createSunthaymTwo(with view: VuforiaEAGLView) -> SCNScene {
        
        let scene = setupScene(with: view, x: 1122.0,y: 699.0,image: "sunthaymDe2" )
        return scene
    }
    
    fileprivate func createShrine(with view: VuforiaEAGLView) -> SCNScene {
        
        let scene = setupScene(with: view, x: 1559.0,y: 870.0,image: "shrine" )
        return scene
    }
    
    fileprivate func createAccountingBook(with view: VuforiaEAGLView) -> SCNScene {
        let scene = setupScene(with: view, x: 982.0,y: 1372.0,image: "acountingBook" )
        return scene
    }
    
    
    func vuforiaEAGLView(_ view: VuforiaEAGLView!, didTouchDownNode node: SCNNode!) {
        print("touch down \(node.name ?? "")\n")
        boxMaterial.transparency = 0.6
    }
    
    func vuforiaEAGLView(_ view: VuforiaEAGLView!, didTouchUp node: SCNNode!) {
        print("touch up \(node.name ?? "")\n")
        boxMaterial.transparency = 1.0
    }
    
    func vuforiaEAGLView(_ view: VuforiaEAGLView!, didTouchCancel node: SCNNode!) {
        print("touch cancel \(node.name ?? "")\n")
        boxMaterial.transparency = 1.0
    }
}

