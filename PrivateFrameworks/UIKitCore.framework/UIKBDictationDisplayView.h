/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIDictationView;

@interface UIKBDictationDisplayView : UIKBKeyView {

	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
-(void)removeFromSuperview;
-(void)setRenderConfig:(id)arg1 ;
-(void)dealloc;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(void)updateDictationColor;
-(void)prepareForDisplay;
-(UIDictationView *)dictationView;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
@end

