/*
 // Giulio Caruso
 // WWS (Walking Write and Share)
 
 */

#import "AVCamAppDelegate.h"

@implementation AVCamAppDelegate
@synthesize window;
@synthesize avCtrl;


-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    avCtrl = [[AVCamViewController alloc]init];
    window.rootViewController = avCtrl;
    
    return true;
}

@end
