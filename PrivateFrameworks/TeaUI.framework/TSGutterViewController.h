/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UINavigationItem, UIViewController;

@interface TSGutterViewController : UIViewController {

	 gutterViewController;

}

@property (readonly,nonatomic) UINavigationItem * navigationItem; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForHomeIndicatorAutoHidden; 
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(UINavigationItem *)navigationItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithChildViewController:(id)arg1 childScrollViewProducer:(/*^block*/id)arg2 gutterBreakpoints:(id)arg3 ;
-(UIViewController *)childViewControllerForHomeIndicatorAutoHidden;
@end
