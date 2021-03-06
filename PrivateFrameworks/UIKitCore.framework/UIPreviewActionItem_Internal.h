/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor, UIImage;


@protocol UIPreviewActionItem_Internal <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long style; 
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) UIImage * image; 
@required
-(id)_color;
-(NSString *)identifier;
-(void)setImage:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)title;
-(long long)style;
-(id)_effectiveColor;
-(void)_setColor:(id)arg1;
-(UIImage *)image;
-(id)_effectiveImage;
-(void)setTitle:(id)arg1;
-(void)setStyle:(long long)arg1;

@end

