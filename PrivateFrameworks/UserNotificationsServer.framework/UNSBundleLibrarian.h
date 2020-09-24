/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface UNSBundleLibrarian : NSObject {

	NSString* _bundleLibraryPath;
	NSMutableDictionary* _bundleToUUIDMap;
	NSMutableDictionary* _uuidToBundleMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)_queue_saveDictionary:(id)arg1 atPath:(id)arg2 ;
-(void)_queue_loadBundleLibraryIfNeeded;
-(void)removeMappingForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 ;
-(id)uniqueIdentifierForBundleIdentifier:(id)arg1 ;
-(id)_queue_dataAtPath:(id)arg1 ;
-(void)_removeBundleLibrary;
-(void)migrateRepositoriesInDirectory:(id)arg1 ;
-(id)bundleIdentifierForUniqueIdentifier:(id)arg1 ;
-(id)_queue_dictionaryAtPath:(id)arg1 ;
-(void)_queue_loadBundleLibrary;
-(void)_queue_removeEntryForBundleIdentifier:(id)arg1 ;
-(id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg1 ;
-(void)_queue_addEntryForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)bootstrapLibraryForBundleIdentifiers:(id)arg1 ;
-(id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg1 ;
@end
