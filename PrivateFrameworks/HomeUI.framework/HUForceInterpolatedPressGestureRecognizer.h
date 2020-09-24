/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer {

	NSMutableSet* _hu_activeTouches;
	double _currentSampleForceMultiplier;
	double _currentSampleTimestamp;
	double _overallForceMultiplierExcludingCurrentSample;
	double _touchStartTime;

}

@property (nonatomic,readonly) NSMutableSet * hu_activeTouches;                                //@synthesize hu_activeTouches=_hu_activeTouches - In the implementation block
@property (assign,nonatomic) double currentSampleForceMultiplier;                              //@synthesize currentSampleForceMultiplier=_currentSampleForceMultiplier - In the implementation block
@property (assign,nonatomic) double currentSampleTimestamp;                                    //@synthesize currentSampleTimestamp=_currentSampleTimestamp - In the implementation block
@property (assign,nonatomic) double overallForceMultiplierExcludingCurrentSample;              //@synthesize overallForceMultiplierExcludingCurrentSample=_overallForceMultiplierExcludingCurrentSample - In the implementation block
@property (assign,nonatomic) double touchStartTime;                                            //@synthesize touchStartTime=_touchStartTime - In the implementation block
@property (nonatomic,readonly) double currentForceMultiplier; 
@property (nonatomic,readonly) double overallForceMultiplier; 
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetForceSamples;
-(NSMutableSet *)hu_activeTouches;
-(void)setTouchStartTime:(double)arg1 ;
-(void)_logForceMultiplierSample;
-(double)touchStartTime;
-(double)currentSampleTimestamp;
-(double)currentSampleForceMultiplier;
-(double)overallForceMultiplierExcludingCurrentSample;
-(void)setOverallForceMultiplierExcludingCurrentSample:(double)arg1 ;
-(void)setCurrentSampleForceMultiplier:(double)arg1 ;
-(void)setCurrentSampleTimestamp:(double)arg1 ;
-(double)_forceMultiplierIncludingCurrentSample;
-(double)currentForceMultiplier;
-(double)overallForceMultiplier;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
