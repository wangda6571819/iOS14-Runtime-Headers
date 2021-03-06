/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

@interface _UIContextMenuActionsListTitleView : UICollectionReusableView {

	NSString* _title;
	UILabel* _titleLabel;
	UIView* _separator;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separator;                //@synthesize separator=_separator - In the implementation block
-(id)_titleFont;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSeparator:(UIView *)arg1 ;
-(unsigned long long)_titleLabelNumberOfLines;
-(void)_updateLayoutMargins;
-(UIView *)separator;
-(void)didMoveToWindow;
-(void)setTitle:(NSString *)arg1 ;
@end

