/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/PMEditorBasePlayerViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PMEditorMenuViewControllerDelegate;
@class VEKProduction, PMTitleEditorProvider, UITableView, NSIndexPath, NSString;

@interface PMEditorMenuViewController : PMEditorBasePlayerViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _showingActivityIndicatorForContentEditor;
	VEKProduction* _production;
	PMTitleEditorProvider* _titleProvider;
	id<PMEditorMenuViewControllerDelegate> _menuDelegate;
	UITableView* _tableView;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) VEKProduction * production;                                              //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) PMTitleEditorProvider * titleProvider;                                   //@synthesize titleProvider=_titleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditorMenuViewControllerDelegate> menuDelegate;              //@synthesize menuDelegate=_menuDelegate - In the implementation block
@property (assign,nonatomic) BOOL showingActivityIndicatorForContentEditor;                           //@synthesize showingActivityIndicatorForContentEditor=_showingActivityIndicatorForContentEditor - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                         //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)dealloc;
-(NSIndexPath *)selectedIndexPath;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateFonts;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PMTitleEditorProvider *)titleProvider;
-(void)setTitleProvider:(PMTitleEditorProvider *)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)popFromNavigationController;
-(void)setMenuDelegate:(id<PMEditorMenuViewControllerDelegate>)arg1 ;
-(void)setShowingActivityIndicatorForContentEditor:(BOOL)arg1 ;
-(id<PMEditorMenuViewControllerDelegate>)menuDelegate;
-(id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)_getTimeStringFromSeconds:(double)arg1 ;
-(BOOL)showingActivityIndicatorForContentEditor;
@end

