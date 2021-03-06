/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class PFCoalescer, NSObject, NSHashTable, NSArray;

@interface PFCoalescerContext : NSObject {

	unsigned long long _coalescedUpdatesCount;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _pendingActivityTokens;

}

@property (__weak) PFCoalescer * coalescer;                                  //@synthesize coalescer=_coalescer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSHashTable * pendingActivityTokens;                      //@synthesize pendingActivityTokens=_pendingActivityTokens - In the implementation block
@property (readonly) NSArray * pendingActivityTokensSnapshot; 
@property (assign) unsigned long long coalescedUpdatesCount;                 //@synthesize coalescedUpdatesCount=_coalescedUpdatesCount - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)pushBack:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(NSArray *)pendingActivityTokensSnapshot;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelPendingActivityTokens;
-(void)setPendingActivityTokens:(NSHashTable *)arg1 ;
-(void)setCoalescedUpdatesCount:(unsigned long long)arg1 ;
-(id)activityTokenWithReason:(id)arg1 ;
-(void)setCoalescer:(PFCoalescer *)arg1 ;
-(PFCoalescer *)coalescer;
-(id)initWithCoalescer:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSHashTable *)pendingActivityTokens;
-(void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)delayNextInvocationByTimeInterval:(double)arg1 ;
-(id)activityToken;
-(unsigned long long)coalescedUpdatesCount;
@end

