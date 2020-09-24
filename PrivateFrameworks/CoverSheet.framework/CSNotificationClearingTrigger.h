/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSNotificationClearingTriggerDelegate;
@interface CSNotificationClearingTrigger : NSObject {

	BOOL _authenticated;
	BOOL _hadNotificationContentAtDisappearance;
	BOOL _didDisableCarDNDUntilEndOfDrive;
	BOOL _uiLocked;
	BOOL _screenOff;
	BOOL _triggerArmed;
	id<CSNotificationClearingTriggerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL triggerArmed;                                                      //@synthesize triggerArmed=_triggerArmed - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationClearingTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                                     //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,nonatomic) BOOL hadNotificationContentAtDisappearance;                             //@synthesize hadNotificationContentAtDisappearance=_hadNotificationContentAtDisappearance - In the implementation block
@property (assign,nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;                                   //@synthesize didDisableCarDNDUntilEndOfDrive=_didDisableCarDNDUntilEndOfDrive - In the implementation block
@property (assign,nonatomic) BOOL uiLocked;                                                          //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,nonatomic) BOOL screenOff;                                                         //@synthesize screenOff=_screenOff - In the implementation block
-(BOOL)screenOff;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)hadNotificationContentAtDisappearance;
-(BOOL)_wouldArmIfNotForDND;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)_wouldArmForDiscreteParameters;
-(BOOL)_wouldArmIfNotForDNDAndNotificationContent;
-(void)_reset;
-(void)_updateTriggerAndClearIfNeeded;
-(BOOL)_shouldArm;
-(BOOL)authenticated;
-(void)setHadNotificationContentAtDisappearance:(BOOL)arg1 ;
-(void)setUiLocked:(BOOL)arg1 ;
-(void)setDelegate:(id<CSNotificationClearingTriggerDelegate>)arg1 ;
-(BOOL)triggerArmed;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)uiLocked;
-(id<CSNotificationClearingTriggerDelegate>)delegate;
-(BOOL)didDisableCarDNDUntilEndOfDrive;
-(void)setDidDisableCarDNDUntilEndOfDrive:(BOOL)arg1 ;
-(void)_clearIfNeeded;
-(void)setTriggerArmed:(BOOL)arg1 ;
-(BOOL)_shouldFire;
@end
