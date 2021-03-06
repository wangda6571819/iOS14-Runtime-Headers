/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIInterfaceActionVisualStyle;


@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; 
@required
-(UIInterfaceActionVisualStyle *)visualStyle;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
-(void)reloadVisualStyle;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(void)setVisualStyleProvider:(id)arg1;

@end

