/*
 // Giulio Caruso
 // WWS (Walking Write and Share)
 
 */

#import <UIKit/UIKit.h>

@interface AVCamViewController : UIViewController<UITextViewDelegate>
{
    IBOutlet UITextView *txtSend;
    IBOutlet UIButton *btnFlash;
    
}

@property (nonatomic,retain)IBOutlet UITextView *txtSend;
@property (nonatomic,assign) BOOL statusLed;
@property (nonatomic,retain) IBOutlet UIButton *btnFlash;

-(IBAction)SetFlashLight:(id)sender;
-(IBAction)goApp:(id)sender;

@end
