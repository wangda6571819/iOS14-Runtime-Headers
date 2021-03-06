/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView, UIImageView, UILabel;

@interface CKPhotoTileBadgeView : UIView {

	BOOL _enabled;
	BOOL _selected;
	UIButton* _actionButton;
	UIView* __backgroundView;
	UIImageView* __badgeImageView;
	UILabel* __textLabel;

}

@property (nonatomic,readonly) UIView * _backgroundView;                   //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UIImageView * _badgeImageView;              //@synthesize _badgeImageView=__badgeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _textLabel;                       //@synthesize _textLabel=__textLabel - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                      //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(double)verticalBadgeInset;
+(double)horizontalBadgeInset;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)_backgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)layoutSubviews;
-(UILabel *)_textLabel;
-(CGSize)maximumSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSelected;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(UIImageView *)_badgeImageView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_updateBadgeImage;
-(void)_updateBadgeText;
@end

