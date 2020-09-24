/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPChargingReminderStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPChargingReminderStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPChargingReminderStateMachineEventHandler.h>

@class NSDate, HKSPSleepScheduleModel, HDSPChargingReminderDisabledState, HDSPChargingReminderWaitingState, HDSPChargingReminderMonitoringState, HDSPChargingReminderNotifiedState, NSString;

@interface HDSPChargingReminderStateMachine : HKSPPersistentStateMachine <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPChargingReminderStateMachineEventHandler> {

	HDSPChargingReminderDisabledState* _disabledState;
	HDSPChargingReminderWaitingState* _waitingState;
	HDSPChargingReminderMonitoringState* _monitoringState;
	HDSPChargingReminderNotifiedState* _notifiedState;

}

@property (nonatomic,__weak,readonly) id<HDSPChargingReminderStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPChargingReminderStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPChargingReminderDisabledState * disabledState;                                 //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) HDSPChargingReminderWaitingState * waitingState;                                   //@synthesize waitingState=_waitingState - In the implementation block
@property (nonatomic,readonly) HDSPChargingReminderMonitoringState * monitoringState;                             //@synthesize monitoringState=_monitoringState - In the implementation block
@property (nonatomic,readonly) HDSPChargingReminderNotifiedState * notifiedState;                                 //@synthesize notifiedState=_notifiedState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) BOOL sleepFeaturesEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) BOOL isCharging; 
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(NSDate *)currentDate;
-(HDSPChargingReminderWaitingState *)waitingState;
-(HDSPChargingReminderNotifiedState *)notifiedState;
-(unsigned long long)sleepScheduleState;
-(BOOL)sleepFeaturesEnabled;
-(BOOL)isCharging;
-(id)stateMachineLog;
-(HDSPChargingReminderDisabledState *)disabledState;
-(void)batteryMonitoringEventDue;
-(void)batteryLevelChanged:(float)arg1 ;
-(void)postChargingReminderNotification;
-(void)scheduleBatteryMonitoring;
-(void)unscheduleBatteryMonitoring;
-(void)startBatteryMonitoring;
-(void)stopBatteryMonitoring;
-(id)monitoringWindowAfterDate:(id)arg1 ;
-(HDSPChargingReminderMonitoringState *)monitoringState;
@end
