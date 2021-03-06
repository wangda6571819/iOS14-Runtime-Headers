/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SKUIBarRatingView : UIView {

	long long _barRatingStyle;
	long long _numberOfBars;
	float _ratingValue;

}

@property (assign,nonatomic) long long barRatingStyle;              //@synthesize barRatingStyle=_barRatingStyle - In the implementation block
@property (assign,nonatomic) long long numberOfBars;                //@synthesize numberOfBars=_numberOfBars - In the implementation block
@property (assign,nonatomic) float ratingValue;                     //@synthesize ratingValue=_ratingValue - In the implementation block
-(void)setNumberOfBars:(long long)arg1 ;
-(long long)numberOfBars;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRatingValue:(float)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(float)ratingValue;
-(void)setBarRatingStyle:(long long)arg1 ;
-(long long)barRatingStyle;
@end

