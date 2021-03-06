/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface NCLayoutLoopDetector : NSObject {

	NSMutableArray* _notificationLayoutsInProgress;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSMutableArray * notificationLayoutsInProgress;              //@synthesize notificationLayoutsInProgress=_notificationLayoutsInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_savedNotificationLayoutsInProgress;
-(void)_saveNotificationLayoutsInProgress;
-(BOOL)layoutInProgressContainsNotificationRequest:(id)arg1 ;
-(void)addNotificationRequestToLayoutsInProgress:(id)arg1 ;
-(void)removeNotificationRequestFromLayoutsInProgress:(id)arg1 ;
-(NSMutableArray *)notificationLayoutsInProgress;
-(void)setNotificationLayoutsInProgress:(NSMutableArray *)arg1 ;
@end

