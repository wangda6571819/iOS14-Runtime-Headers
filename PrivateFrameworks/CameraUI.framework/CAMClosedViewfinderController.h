/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMClosedViewfinderControllerDelegate;
@class NSMutableSet;

@interface CAMClosedViewfinderController : NSObject {

	id<CAMClosedViewfinderControllerDelegate> _delegate;
	NSMutableSet* __reasonsForClosingViewfinder;
	double __referenceTime;
	long long __referenceTimeEvent;

}

@property (nonatomic,readonly) NSMutableSet * _reasonsForClosingViewfinder;                             //@synthesize _reasonsForClosingViewfinder=__reasonsForClosingViewfinder - In the implementation block
@property (assign,setter=_setReferenceTime:,nonatomic) double _referenceTime;                           //@synthesize _referenceTime=__referenceTime - In the implementation block
@property (assign,setter=_setReferenceTimeEvent:,nonatomic) long long _referenceTimeEvent;              //@synthesize _referenceTimeEvent=__referenceTimeEvent - In the implementation block
@property (assign,nonatomic,__weak) id<CAMClosedViewfinderControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (getter=isViewfinderClosed,nonatomic,readonly) BOOL viewfinderClosed; 
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(id)_descriptionStringForReferenceTimeEvent:(long long)arg1 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(NSMutableSet *)_reasonsForClosingViewfinder;
-(void)_cancelDelayedLoggingForClosedViewfinder;
-(void)dealloc;
-(double)_referenceTime;
-(void)addClosedViewfinderReason:(long long)arg1 ;
-(id)_descriptionForReasons:(id)arg1 ;
-(void)_performDelayedRemovalOfReason:(id)arg1 ;
-(void)cancelDelayedRemovalOfReason:(long long)arg1 ;
-(id)init;
-(void)_logWarningIfViewfinderStillClosed;
-(void)_setReferenceTimeEvent:(long long)arg1 ;
-(id)_descriptionStringForReason:(long long)arg1 ;
-(id)descriptionForTimeBetweenReferenceAndNow;
-(void)setDelegate:(id<CAMClosedViewfinderControllerDelegate>)arg1 ;
-(void)removeClosedViewfinderReason:(long long)arg1 ;
-(BOOL)hasClosedViewfinderReason:(long long)arg1 ;
-(void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2 ;
-(id<CAMClosedViewfinderControllerDelegate>)delegate;
-(long long)_referenceTimeEvent;
-(void)_setReferenceTime:(double)arg1 ;
-(BOOL)isViewfinderClosed;
-(void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)arg1 ;
-(void)_updateReferenceTimeToNowForEvent:(long long)arg1 ;
@end

