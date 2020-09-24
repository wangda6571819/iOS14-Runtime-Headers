/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentViewComponentDescribing.h>
#import <UIKitCore/_UIContentView.h>

@class NSLayoutRect, _UISubtitleCellContentViewConfiguration, _UIContentViewEditingController, UIImageView, UILabel, NSString;

@interface _UISubtitleCellContentView : UIView <_UIContentViewComponentDescribing, _UIContentView> {

	_UISubtitleCellContentViewConfiguration* _animatingFromConfiguration;
	_UISubtitleCellContentViewConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	_UIContentViewEditingController* _editingController;
	_UISubtitleCellContentViewConfiguration* _configuration;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _subtitleLabel;
	/*^block*/id _primaryTextFrameDidChangeHandler;

}

@property (nonatomic,copy) _UISubtitleCellContentViewConfiguration * configuration;                                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutRect * _primaryTextLayoutRect; 
@property (nonatomic,readonly) CGRect _primaryTextLayoutFrame; 
@property (setter=_setPrimaryTextFrameDidChangeHandler:,nonatomic,copy) id _primaryTextFrameDidChangeHandler;              //@synthesize primaryTextFrameDidChangeHandler=_primaryTextFrameDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_encodableSubviews;
-(BOOL)becomeFirstResponder;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)layoutSubviews;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(UILabel *)subtitleLabel;
-(NSLayoutRect *)_primaryTextLayoutRect;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(CGRect)_primaryTextLayoutFrame;
-(id)_primaryTextFrameDidChangeHandler;
-(void)_setPrimaryTextFrameDidChangeHandler:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImageView *)imageView;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(_UISubtitleCellContentViewConfiguration *)configuration;
-(double)_multilineContextWidth;
-(double)_preferredMaxLayoutWidth;
-(NSString *)description;
-(UILabel *)textLabel;
-(void)setConfiguration:(_UISubtitleCellContentViewConfiguration *)arg1 ;
@end
