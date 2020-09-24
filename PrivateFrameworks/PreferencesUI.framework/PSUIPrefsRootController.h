/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {

	PSUIPrefsListController* _rootListController;

}
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupControllerForToolbar:(id)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)rootListController;
@end
