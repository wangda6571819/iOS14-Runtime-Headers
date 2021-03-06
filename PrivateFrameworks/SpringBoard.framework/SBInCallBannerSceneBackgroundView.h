/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@class _UIBackdropView, SBWallpaperEffectView, NSString;

@interface SBInCallBannerSceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {

	_UIBackdropView* _backdropView;
	unsigned long long _transformOptions;
	SBWallpaperEffectView* _wallpaperEffectView;
	long long _wallpaperVariant;
	BOOL _fullscreen;
	double _wallpaperAlpha;
	long long _wallpaperStyle;

}

@property (assign,nonatomic) double wallpaperAlpha;                            //@synthesize wallpaperAlpha=_wallpaperAlpha - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle;                         //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;              //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullscreen;
-(void)setWallpaperStyle:(long long)arg1 ;
-(long long)wallpaperStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)_updateBackdropView;
-(id)initWithFrame:(CGRect)arg1 wallpaperVariant:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(void)setWallpaperAlpha:(double)arg1 ;
-(double)wallpaperAlpha;
@end

