/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFClockItemStorageDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, MTAlarmManager, AFClockAlarmSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _listeners;
	MTAlarmManager* _alarmManager;
	AFClockAlarmSnapshot* _alarmSnapshot;
	NSObject*<OS_dispatch_group> _alarmSnapshotGroup;
	long long _alarmSnapshotGroupDepth;
	AFClockItemStorage* _alarmStorage;
	NSMutableOrderedSet* _notifiedFiringAlarmIDs;
	NSUUID* _alarmsChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_tearDown;
-(void)alarmsUpdated:(id)arg1 ;
-(void)invalidate;
-(void)alarmsAdded:(id)arg1 ;
-(void)_endGroup;
-(void)alarmFired:(id)arg1 ;
-(void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4 ;
-(void)dealloc;
-(void)_enumerateListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)stateReset:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(id)init;
-(id)_alarmSnapshot;
-(void)alarmsChanged:(id)arg1 ;
-(void)_fetchAlarmsForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_consolidateNotifiedFiringAlarms;
-(void)firingAlarmChanged:(id)arg1 ;
-(void)firingAlarmDismissed:(id)arg1 ;
-(void)_handleFetchAlarmsForReason:(id)arg1 result:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAlarmSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getFiringAlarmIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)_beginGroup;
-(void)_setUp;
-(void)alarmsRemoved:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
