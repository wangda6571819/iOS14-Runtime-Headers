/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLockScreenEmergencyCallViewControllerDelegate.h>

@protocol SBLockScreenEmergencyDialerDelegate;
@class SBLockScreenEmergencyCallViewController, UIViewController, NSString;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate> {

	SBLockScreenEmergencyCallViewController* _viewController;
	BOOL _active;
	id<SBLockScreenEmergencyDialerDelegate> _delegate;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyDialerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(UIViewController *)viewController;
-(BOOL)isActive;
-(void)setDelegate:(id<SBLockScreenEmergencyDialerDelegate>)arg1 ;
-(void)deactivate;
-(id<SBLockScreenEmergencyDialerDelegate>)delegate;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
@end
