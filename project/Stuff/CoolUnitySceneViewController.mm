//
//  CoolUnitySceneViewController.m
//  Unity-iPhone
//
//  Created by Frederik Jacques on 06/08/14.
//
//

#import "CoolUnitySceneViewController.h"
#import "CacheManager.h"

@interface CoolUnitySceneViewController ()


@end

static void *CacheManagerDataChangedContext = &CacheManagerDataChangedContext;

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
    
    CacheManager *cacheManager = [CacheManager sharedManager];
    
    [cacheManager addObserver:self forKeyPath:NSStringFromSelector(@selector(data)) options:NSKeyValueObservingOptionNew context:CacheManagerDataChangedContext];
}

- (void)dealloc {
    [[CacheManager sharedManager] removeObserver:self forKeyPath:NSStringFromSelector(@selector(data)) context:CacheManagerDataChangedContext];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

+ (void)backToNative{
    printf("CallFromNative");
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context {
    
    if (context == CacheManagerDataChangedContext) {
        printf("switch to Webview really");
        
        [self performSegueWithIdentifier:@"showWebView" sender:self];
    }
    
    else {
        [super observeValueForKeyPath:keyPath ofObject:object change:change context:context];
    }
}

+ (void)switchToWebView{
    printf("switchToWebView");
    //showWebView = true;
    
    CacheManager *cacheManager = [CacheManager sharedManager];
    cacheManager.data = @"foobarr";
}

extern "C" {
    
    // functions called by unity
    void switchToNative(const char* msg) {
        
        // doing stuff
        printf("switchToNative called\n");
        printf("%s", msg);
        
        [CoolUnitySceneViewController switchToWebView];
        
        /* UIViewController *vc2 = [[WebViewController alloc]init];
         [self.view addSubview:vc2.view]*/
        
    }
}

@end


