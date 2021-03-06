/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStoreFilter, CNContactStore, NSArray, CNAccountsAndGroupsItem;

@interface CNAccountsAndGroupsDataSource : NSObject {

	CNContactStoreFilter* _filter;
	CNContactStoreFilter* _serverFilter;
	BOOL _hidesSearchableSources;
	CNContactStore* _store;
	NSArray* _sections;
	CNAccountsAndGroupsItem* _rootItem;

}

@property (nonatomic,retain) CNContactStore * store;                                      //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsItem * rootItem;                          //@synthesize rootItem=_rootItem - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                                 //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter; 
@property (nonatomic,readonly) CNContactStoreFilter * serverFilter; 
@property (nonatomic,readonly) CNAccountsAndGroupsItem * showAllSectionItem; 
@property (getter=isTrivial,nonatomic,readonly) BOOL trivial; 
-(void)reload;
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactStoreFilter *)filter;
-(void)setRootItem:(CNAccountsAndGroupsItem *)arg1 ;
-(CNContactStore *)store;
-(CNAccountsAndGroupsItem *)rootItem;
-(void)_reloadSections;
-(void)setSections:(NSArray *)arg1 ;
-(void)setServerFilterForItem:(id)arg1 ;
-(void)updateRootItemSelection;
-(void)removeServerFilter;
-(CNContactStoreFilter *)serverFilter;
-(BOOL)hidesSearchableSources;
-(CNAccountsAndGroupsItem *)showAllSectionItem;
-(BOOL)isTrivial;
-(void)_applyFilter;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(NSArray *)sections;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
@end

