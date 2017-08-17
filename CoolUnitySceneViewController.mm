//
//  CoolUnitySceneViewController.m
//  Unity-iPhone
//
//  Created by Frederik Jacques on 06/08/14.
//
//

#import "CoolUnitySceneViewController.h"

@interface CoolUnitySceneViewController ()

@end

@implementation CoolUnitySceneViewController

#pragma mark - Lifecycle

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {

    self = [super initWithNibName:nil bundle:nil];
    
    if (self) {
        // Custom initialization
        
    }
    
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [self.view addSubview:GetAppController().unityView];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
