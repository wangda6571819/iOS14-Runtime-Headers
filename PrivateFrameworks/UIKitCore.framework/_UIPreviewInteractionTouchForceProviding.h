/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewInteractionTouchForceProviding <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) double touchForce; 
@required
-(void)cancelInteraction;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(BOOL)isActive;
-(double)touchForce;

@end
