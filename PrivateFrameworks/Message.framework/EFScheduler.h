/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFScheduler <NSObject>
@required
-(void)performBlock:(/*^block*/id)arg1;
-(id)performCancelableBlock:(/*^block*/id)arg1;
-(id)performWithObject:(id)arg1;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2;
-(void)performSyncBlock:(/*^block*/id)arg1;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1;

@end
