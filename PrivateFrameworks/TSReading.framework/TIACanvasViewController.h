/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPiOSCanvasViewController.h>

@class UIGestureRecognizer, TSAInteractiveCanvasController;

@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property (assign) UIGestureRecognizer * hyperlinkGestureRecognizer; 
@property (nonatomic,readonly) TSAInteractiveCanvasController * interactiveCanvasController; 
-(TSAInteractiveCanvasController *)interactiveCanvasController;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setUpGestureRecognizers;
-(id)commonGestureRecognizers;
-(UIGestureRecognizer *)hyperlinkGestureRecognizer;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(id)p_LocalGestureRecognizers;
-(void)setHyperlinkGestureRecognizer:(UIGestureRecognizer *)arg1 ;
@end
