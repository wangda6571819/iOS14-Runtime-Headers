/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFDispatchQueueExtending <NSObject>
@required
-(void)queueWillResume:(id)arg1;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2;
-(id)queue:(id)arg1 receivedDispatchSync:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchBarrierSync:(/*^block*/id)arg2;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3;
-(void)installOnQueue:(id)arg1;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(/*^block*/id)arg3;
-(id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(/*^block*/id)arg3;
-(id)queue:(id)arg1 receivedDispatchBarrierAsync:(/*^block*/id)arg2;
-(void)queue:(id)arg1 didExecute:(id)arg2;
-(void)queue:(id)arg1 willExecute:(id)arg2;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3;
-(void)queueDidSuspend:(id)arg1;
-(id)queue:(id)arg1 receivedDispatchAfter:(/*^block*/id)arg2;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2;

@end
