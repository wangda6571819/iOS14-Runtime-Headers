/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CPSBannerItem;

@interface CPSBannerView : UIView {

	CPSBannerItem* _bannerItem;

}

@property (nonatomic,retain) CPSBannerItem * bannerItem;              //@synthesize bannerItem=_bannerItem - In the implementation block
-(id)initWithBannerItem:(id)arg1 ;
-(CPSBannerItem *)bannerItem;
-(id)applicationIconImage;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(void)setBannerItem:(CPSBannerItem *)arg1 ;
@end

