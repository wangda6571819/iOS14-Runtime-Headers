/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFBlockedSenderBannerViewDelegate;
@interface MFBlockedSenderBannerView : MFSuggestionBannerView {

	id<MFBlockedSenderBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFBlockedSenderBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFBlockedSenderBannerViewDelegate>)arg1 ;
-(id<MFBlockedSenderBannerViewDelegate>)delegate;
-(void)_titleControlTapped:(id)arg1 ;
-(void)_bannerDismissed:(id)arg1 ;
@end

