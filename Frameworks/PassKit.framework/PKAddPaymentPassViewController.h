/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPaymentPassViewControllerDelegate;
@class PKAddPaymentPassRequestConfiguration, _UIAsyncInvocation, PKRemoteAddPaymentPassViewController;

@interface PKAddPaymentPassViewController : UIViewController {

	id<PKAddPaymentPassViewControllerDelegate> _delegate;
	PKAddPaymentPassRequestConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteAddPaymentPassViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassViewControllerDelegate> delegate; 
+(BOOL)canAddPaymentPass;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(unsigned long long)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(long long)modalTransitionStyle;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
@end
