/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CAMLivePhotoAnimationCache : NSObject {

	BOOL _automaticModeAllowed;
	NSDictionary* __animationFramesByColor;

}

@property (getter=_isEmpty,nonatomic,readonly) BOOL _empty; 
@property (setter=_setAnimationFramesByColor:,nonatomic,retain) NSDictionary * _animationFramesByColor;              //@synthesize _animationFramesByColor=__animationFramesByColor - In the implementation block
@property (nonatomic,readonly) BOOL automaticModeAllowed;                                                            //@synthesize automaticModeAllowed=_automaticModeAllowed - In the implementation block
-(BOOL)_isEmpty;
-(NSDictionary *)_animationFramesByColor;
-(id)framesForLivePhotoMode:(long long)arg1 ;
-(id)_colors;
-(id)_actuallyLoadEnablingAnimationImagesForColors:(id)arg1 scale:(double)arg2 ;
-(BOOL)automaticModeAllowed;
-(void)preloadFramesIfNeeded;
-(id)initWithAutomaticModeAllowed:(BOOL)arg1 ;
-(id)_tintColorForMode:(long long)arg1 ;
-(void)_setAnimationFramesByColor:(id)arg1 ;
@end

