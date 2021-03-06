/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class UILabel, AVLayoutItemAttributes, NSString, NSAttributedString, UIFont, UIActivityIndicatorView, NSLayoutConstraint;

@interface AVLabel : UIView <AVPlaybackControlsViewItem> {

	BOOL _collapsed;
	BOOL _included;
	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _showsLoadingIndicator;
	UILabel* _label;
	AVLayoutItemAttributes* _layoutAttributes;
	long long _loadingIndicatorAlignment;
	NSString* _text;
	NSAttributedString* _attributedText;
	UIFont* _font;
	UIActivityIndicatorView* _loadingIndicator;
	long long _numberOfLines;
	NSLayoutConstraint* _loadingIndicatorLeftAlignmentConstraint;
	NSLayoutConstraint* _loadingIndicatorRightAlignmentConstraint;
	CGSize _extrinsicContentSize;

}

@property (nonatomic,readonly) UILabel * label;                                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UILabel * labelIfLoaded; 
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;                               //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                                    //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * loadingIndicatorLeftAlignmentConstraint;               //@synthesize loadingIndicatorLeftAlignmentConstraint=_loadingIndicatorLeftAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * loadingIndicatorRightAlignmentConstraint;              //@synthesize loadingIndicatorRightAlignmentConstraint=_loadingIndicatorRightAlignmentConstraint - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                 //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorAlignment;                                        //@synthesize loadingIndicatorAlignment=_loadingIndicatorAlignment - In the implementation block
@property (nonatomic,copy) NSString * text;                                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                          //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize;                                                //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                              //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                            //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                                //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                               //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                                //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)minimumSize;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(id)viewForFirstBaselineLayout;
-(long long)numberOfLines;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)didMoveToSuperview;
-(CGSize)intrinsicContentSize;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(NSString *)text;
-(void)layoutAttributesDidChange;
-(void)_updateLayoutItem;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(BOOL)isRemoved;
-(BOOL)isIncluded;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(BOOL)hasFullScreenAppearance;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(UILabel *)label;
-(void)setRemoved:(BOOL)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(CGSize)extrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(UILabel *)labelIfLoaded;
-(void)setLoadingIndicatorAlignment:(long long)arg1 ;
-(long long)loadingIndicatorAlignment;
-(NSLayoutConstraint *)loadingIndicatorLeftAlignmentConstraint;
-(void)setLoadingIndicatorLeftAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)loadingIndicatorRightAlignmentConstraint;
-(void)setLoadingIndicatorRightAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)hasAlternateAppearance;
@end

