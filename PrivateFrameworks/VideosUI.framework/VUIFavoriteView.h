/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIFavoriteViewLayout, VUILabel, _TVImageView, IKViewElement, VUISeparatorView;

@interface VUIFavoriteView : UIView {

	VUIFavoriteViewLayout* _layout;
	VUILabel* _titleLabel;
	_TVImageView* _logoImageView;
	_TVImageView* _accessoryImageView;
	IKViewElement* _viewElement;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,retain) VUIFavoriteViewLayout * layout;                      //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                        //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) _TVImageView * accessoryImageView;                   //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                         //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                 //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
-(void)setLayout:(VUIFavoriteViewLayout *)arg1 ;
-(VUILabel *)titleLabel;
-(_TVImageView *)accessoryImageView;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(VUIFavoriteViewLayout *)layout;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)logoImageView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setAccessoryImageView:(_TVImageView *)arg1 ;
-(void)prepareForCellReuse;
@end

