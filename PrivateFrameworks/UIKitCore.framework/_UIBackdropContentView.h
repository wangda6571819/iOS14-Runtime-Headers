/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIBackdropContentView : UIView {

	BOOL _isForcingLayout;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2 ;
-(void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1 ;
-(void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)didMoveToWindow;
@end

