/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncFetchZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	os_unfair_lock_s _lock;
	HDSynchronousTaskGroup* _taskGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(void)_startZoneFetchForContainer:(id)arg1 database:(id)arg2 ;
-(void)_fetchDatabaseChangesOperationDidFinishWithChangedZones:(id)arg1 deletedZones:(id)arg2 container:(id)arg3 database:(id)arg4 error:(id)arg5 ;
@end
