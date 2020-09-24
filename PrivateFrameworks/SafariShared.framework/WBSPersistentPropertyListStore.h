/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSMutableDictionary, WBSCoalescedAsynchronousWriter;

@interface WBSPersistentPropertyListStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _backingStoreURL;
	NSMutableDictionary* _store;
	WBSCoalescedAsynchronousWriter* _writer;
	/*^block*/id _createEmptyStoreHandler;
	/*^block*/id _validateLoadedStoreHandler;

}

@property (nonatomic,copy) id createEmptyStoreHandler;                 //@synthesize createEmptyStoreHandler=_createEmptyStoreHandler - In the implementation block
@property (nonatomic,copy) id validateLoadedStoreHandler;              //@synthesize validateLoadedStoreHandler=_validateLoadedStoreHandler - In the implementation block
-(id)numberForKey:(id)arg1 ;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)initWithBackingStoreURL:(id)arg1 ;
-(void)setCreateEmptyStoreHandler:(id)arg1 ;
-(void)setValidateLoadedStoreHandler:(id)arg1 ;
-(void)saveStoreSynchronously;
-(void)saveAndCloseStoreSynchronously;
-(id)arrayForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)_dataRepresentation;
-(id)dataForKey:(id)arg1 ;
-(id)_existingSavedData;
-(void)_prepareEmptyStore;
-(void)_loadDataIfNecessary;
-(void)clearStoreSynchronously;
-(id)createEmptyStoreHandler;
-(id)validateLoadedStoreHandler;
-(id)dateForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
@end
