/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface OBTableHeaderFooterView : UIView {

	UIView* _internalContentView;
	UIView* _hostedView;
	unsigned long long _layout;
	NSArray* _hostedConstraints;
	NSArray* _internalContentConstraints;
	UIEdgeInsets _internalContentPadding;
	UIEdgeInsets _hostedViewPadding;

}

@property (nonatomic,retain) UIView * internalContentView;                      //@synthesize internalContentView=_internalContentView - In the implementation block
@property (nonatomic,retain) UIView * hostedView;                               //@synthesize hostedView=_hostedView - In the implementation block
@property (assign,nonatomic) unsigned long long layout;                         //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets internalContentPadding;               //@synthesize internalContentPadding=_internalContentPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedViewPadding;                    //@synthesize hostedViewPadding=_hostedViewPadding - In the implementation block
@property (nonatomic,retain) NSArray * hostedConstraints;                       //@synthesize hostedConstraints=_hostedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * internalContentConstraints;              //@synthesize internalContentConstraints=_internalContentConstraints - In the implementation block
-(void)setLayout:(unsigned long long)arg1 ;
-(void)_applyLayout;
-(UIView *)internalContentView;
-(UIEdgeInsets)internalContentPadding;
-(UIEdgeInsets)hostedViewPadding;
-(void)_layoutContainerForTableHeader;
-(void)_layoutContainerForTableFooter;
-(NSArray *)internalContentConstraints;
-(NSArray *)hostedConstraints;
-(void)setHostedConstraints:(NSArray *)arg1 ;
-(void)setInternalContentConstraints:(NSArray *)arg1 ;
-(void)setInternalContentPadding:(UIEdgeInsets)arg1 ;
-(void)setHostedViewPadding:(UIEdgeInsets)arg1 ;
-(void)setInternalContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHostedView:(UIView *)arg1 ;
-(id)initWithLayout:(unsigned long long)arg1 ;
-(unsigned long long)layout;
-(UIView *)hostedView;
@end

