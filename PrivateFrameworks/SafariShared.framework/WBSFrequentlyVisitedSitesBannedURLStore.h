/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {

	NSURL* _storeURL;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSMutableDictionary* _bannedURLStringsToEntriesMap;

}
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)dealloc;
-(void)_historyWasCleared:(id)arg1 ;
-(id)_bannedURLStringsToEntriesMap;
-(void)removeAllURLStrings;
-(BOOL)containsURLString:(id)arg1 ;
-(void)_writeOutBannedURLStringsAsynchronously;
-(id)initWithStoreURL:(id)arg1 history:(id)arg2 ;
-(void)addURLString:(id)arg1 ;
-(void)removeURLStrings:(id)arg1 ;
-(id)urlStrings;
@end

