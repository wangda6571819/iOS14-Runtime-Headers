/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIToolbarVisualProvider.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UIView;

@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	UIView* _customBackgroundView;

}
-(void)updateBackgroundGroupName;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(void)setCustomBackgroundView:(id)arg1 ;
-(id)currentBackgroundView;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)_createViewsForItems:(id)arg1 ;
-(void)updateBarBackground;
-(CGRect)backgroundFrame;
-(BOOL)toolbarIsSmall;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)updateBarBackgroundSize;
-(void)layoutSubviews;
-(double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
-(id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4 ;
-(id)_currentCustomBackground;
-(id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5 ;
@end
