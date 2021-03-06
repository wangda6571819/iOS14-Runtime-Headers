/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HUCircleView : UIView {

	BOOL _backgroundColorFollowsTintColor;
	BOOL _borderColorFollowsTintColor;
	UIView* _controlCenterMaterialView;

}

@property (nonatomic,retain) UIView * controlCenterMaterialView;                //@synthesize controlCenterMaterialView=_controlCenterMaterialView - In the implementation block
@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL borderColorFollowsTintColor;                  //@synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
-(UIView *)controlCenterMaterialView;
-(BOOL)borderColorFollowsTintColor;
-(void)setBorderColorFollowsTintColor:(BOOL)arg1 ;
-(void)setControlCenterMaterialView:(UIView *)arg1 ;
@end

