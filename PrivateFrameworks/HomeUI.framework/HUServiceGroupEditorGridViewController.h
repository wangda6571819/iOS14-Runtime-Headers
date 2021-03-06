/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@protocol HUServiceGroupEditorGridViewControllerDelegate;
@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController {

	id<HUServiceGroupEditorGridViewControllerDelegate> _delegate;
	HFServiceGroupBuilder* _serviceGroupBuilder;

}

@property (nonatomic,retain) HUServiceGroupEditorGridItemManager * itemManager; 
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;                                   //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceGroupEditorGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)layoutOptionsForSection:(long long)arg1 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(id)initWithServiceGroupBuilder:(id)arg1 ;
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(void)setDelegate:(id<HUServiceGroupEditorGridViewControllerDelegate>)arg1 ;
-(void)didSelectItem:(id)arg1 ;
-(id<HUServiceGroupEditorGridViewControllerDelegate>)delegate;
-(id)_serviceVendorItemForItem:(id)arg1 ;
-(void)didDeselectItem:(id)arg1 ;
@end

