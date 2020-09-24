/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol PKPaletteColorPickerController <NSObject>
@property (nonatomic,readonly) id<PKPaletteColorPicker> colorPicker; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (assign,nonatomic,__weak) id<PKPaletteColorPickerControllerDelegate> delegate; 
@required
-(UIViewController *)viewController;
-(id<PKPaletteColorPicker>)colorPicker;
-(void)setDelegate:(id)arg1;
-(id<PKPaletteColorPickerControllerDelegate>)delegate;

@end
