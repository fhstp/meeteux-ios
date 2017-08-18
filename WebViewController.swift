//
//  WebViewController.swift
//  Unity-iPhone
//
//  Created by Kerstin Blumenstein on 18/08/2017.
//

//
import UIKit
import WebKit


class WebViewController: UIViewController, WKScriptMessageHandler {
    
    @IBOutlet var containerView: UIView!
    var webView: WKWebView!
    
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
            
            // TODO not working at this time
            let exec2 = "sayHello()"
            webView.evaluateJavaScript(exec2, completionHandler: nil)
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
