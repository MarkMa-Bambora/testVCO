#import <UIKit/UIKit.h>
#import "VisaCheckoutLaunchParams.h"
#import <VisaCheckoutHybrid/VisaCheckoutHybrid.h>

@protocol VisaCheckOutButtonDelegate <NSObject>

-(void)VisaCheckoutSuccess:(NSDictionary *)VisaCheckoutPayment;

-(void)VisaCheckoutFail:(NSString *)info;

-(void)VisaCheckoutSetupComplete;

@end

@interface VisaCheckOutButton : WKWebView

-(void)loadUIWithViewController:(UIViewController *)viewController andData:(VisaCheckoutLaunchParams *)visaCheckoutLaunchParams andLoadingColor:(UIColor *)color;

@property (nonatomic,weak) id <VisaCheckOutButtonDelegate> resultDelegate;

@end
