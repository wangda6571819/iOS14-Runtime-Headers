/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString, NSSet, NSDictionary;

@interface HFControlPanelItem : HFItem <NAIdentifiable> {

	NSString* _uniqueIdentifier;
	NSSet* _controlItems;
	NSDictionary* _displayResults;
	NSDictionary* _controlItemsByUUID;
	NSDictionary* _UUIDsByControlItemPointer;

}

@property (nonatomic,readonly) NSDictionary * displayResults;                         //@synthesize displayResults=_displayResults - In the implementation block
@property (nonatomic,readonly) NSDictionary * controlItemsByUUID;                     //@synthesize controlItemsByUUID=_controlItemsByUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * UUIDsByControlItemPointer;              //@synthesize UUIDsByControlItemPointer=_UUIDsByControlItemPointer - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * controlItems;                             //@synthesize controlItems=_controlItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)standardControlPanelItemsForControlItems:(id)arg1 ;
+(id)_controlPanelItemRules;
+(id)na_identity;
-(id)init;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(long long)sortPriority;
-(NSDictionary *)displayResults;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithControlItems:(id)arg1 displayResults:(id)arg2 ;
-(NSDictionary *)UUIDsByControlItemPointer;
-(NSDictionary *)controlItemsByUUID;
-(NSSet *)controlItems;
-(id)identifierForControlItem:(id)arg1 ;
-(id)controlItemForIdentifier:(id)arg1 ;
@end
