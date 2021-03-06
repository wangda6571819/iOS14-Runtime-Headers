/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKScribbleInteractionWrapperProvider.h>
#import <UIKit/UIInteraction.h>

@protocol PKScribbleInteractionWrapper, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource;
@class UIView, NSString;

@interface PKScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {

	id<PKScribbleInteractionWrapper> _cachedWrapper;
	BOOL _requestElementsShouldCallBackSynchronously;
	id<PKScribbleInteractionDelegate> _delegate;
	id<PKScribbleInteractionElementSource> _elementSource;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL requestElementsShouldCallBackSynchronously;                          //@synthesize requestElementsShouldCallBackSynchronously=_requestElementsShouldCallBackSynchronously - In the implementation block
@property (assign,nonatomic,__weak) id<PKScribbleInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKScribbleInteractionElementSource> elementSource;              //@synthesize elementSource=_elementSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMoveToView:(id)arg1 ;
-(id<PKScribbleInteractionElementSource>)elementSource;
-(id)scribbleInteractionWrapper;
-(void)willMoveToView:(id)arg1 ;
-(UIView *)view;
-(BOOL)requestElementsShouldCallBackSynchronously;
-(void)setView:(UIView *)arg1 ;
-(void)setElementSource:(id<PKScribbleInteractionElementSource>)arg1 ;
-(void)setRequestElementsShouldCallBackSynchronously:(BOOL)arg1 ;
-(void)setDelegate:(id<PKScribbleInteractionDelegate>)arg1 ;
-(id<PKScribbleInteractionDelegate>)delegate;
@end

