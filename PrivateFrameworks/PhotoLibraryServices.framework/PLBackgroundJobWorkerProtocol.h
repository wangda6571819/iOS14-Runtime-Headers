/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLBackgroundJobWorkerProtocol <NSObject>
@optional
-(BOOL)isInterruptible;
-(void)stopWorkingOnManagedObjectID:(id)arg1;

@required
+(id)workerWithLibrary:(id)arg1;
-(id)managedObjectIDsNeedingProcessing;
-(BOOL)hasPendingJobs;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2;

@end

