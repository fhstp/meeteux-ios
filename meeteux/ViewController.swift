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
    @objc let vuforiaDataSetFile = "StonesAndChips.xml"
    
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
            backButton.trailingAnchor.constraint(equalTo: margins.trailingAnchor, constant: -20).isActive = true
            backButton.topAnchor.constraint(equalTo: margins.topAnchor, constant: 20).isActive = true
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
            //print("\(trackerableName)")
            if trackerableName == "stones" {
                boxMaterial.diffuse.contents = UIColor.red
                
                if lastSceneName != "stones" {
                    manager.eaglView.setNeedsChangeSceneWithUserInfo(["scene" : "stones"])
                    lastSceneName = "stones"
                }
            }else {
                boxMaterial.diffuse.contents = UIColor.blue
                
                if lastSceneName != "chips" {
                    manager.eaglView.setNeedsChangeSceneWithUserInfo(["scene" : "chips"])
                    lastSceneName = "chips"
                }
            }
            
        }
    }
}

extension ViewController: VuforiaEAGLViewSceneSource, VuforiaEAGLViewDelegate {
    
    func scene(for view: VuforiaEAGLView!, userInfo: [String : Any]?) -> SCNScene! {
        guard let userInfo = userInfo else {
            print("default scene")
            return createStonesScene(with: view)
        }
        
        if let sceneName = userInfo["scene"] as? String , sceneName == "stones" {
            print("stones scene")
            return createStonesScene(with: view)
        }else {
            print("chips scene")
            return createChipsScene(with: view)
        }
        
    }
    
    fileprivate func createStonesScene(with view: VuforiaEAGLView) -> SCNScene {
        let scene = SCNScene()
        
        boxMaterial.diffuse.contents = UIColor.lightGray
        
        let imageNode = SCNNode()
        imageNode.name = "image"
        imageNode.geometry = SCNPlane(width: 247.0*view.objectScale, height: 173.0*view.objectScale)
        imageNode.position = SCNVector3Make(0, 0, -1)
        let imageMaterial = SCNMaterial()
        imageMaterial.diffuse.contents = UIImage(named: "doggo.png")
        imageNode.geometry?.firstMaterial = imageMaterial
        scene.rootNode.addChildNode(imageNode)
        
        return scene
    }
    
    fileprivate func createChipsScene(with view: VuforiaEAGLView) -> SCNScene {
        let scene = SCNScene()
        
        
        let imageNode = SCNNode()
        imageNode.name = "image"
        imageNode.geometry = SCNPlane(width: 247.0*view.objectScale, height: 173.0*view.objectScale)
        imageNode.position = SCNVector3Make(0, 0, -1)
        let imageMaterial = SCNMaterial()
        imageMaterial.diffuse.contents = UIImage(named: "doggo.png")
        imageNode.geometry?.firstMaterial = imageMaterial
        scene.rootNode.addChildNode(imageNode)
        

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

