/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UIView;

@interface VUICollectionViewFeaturedView : UIView {

	_TVImageView* _imageView;
	UIView* _overlayView;

}

@property (nonatomic,retain) _TVImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                  //@synthesize overlayView=_overlayView - In the implementation block
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)setImageView:(_TVImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
@end
