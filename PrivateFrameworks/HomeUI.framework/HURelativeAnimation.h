/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HUAnimationApplier;

@interface HURelativeAnimation : NSObject {

	HUAnimationApplier* _applier;
	double _relativeStart;
	double _relativeDuration;

}

@property (nonatomic,readonly) HUAnimationApplier * applier;              //@synthesize applier=_applier - In the implementation block
@property (nonatomic,readonly) double relativeStart;                      //@synthesize relativeStart=_relativeStart - In the implementation block
@property (nonatomic,readonly) double relativeDuration;                   //@synthesize relativeDuration=_relativeDuration - In the implementation block
-(HUAnimationApplier *)applier;
-(double)relativeStart;
-(id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3 ;
-(double)relativeDuration;
@end
