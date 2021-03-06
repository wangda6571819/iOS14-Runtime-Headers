/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol FPDDomainBackend <NSObject>
@property (copy,readonly) NSArray * rootURLs; 
@property (readonly) NSObject*<OS_dispatch_queue> backendQueue; 
@optional
+(void)registerXPCActivities;
-(long long)nonEvictableSpace;
-(void)forceFSIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceIngestionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)materializedURLForItemID:(id)arg1;
-(void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fakeFSEventAtURL:(id)arg1;
-(void)decorateItems:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)pinItemWithID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)unpinItemWithID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)didChangeItemID:(id)arg1;
-(void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(BOOL)needsRootCreation;
-(NSObject*<OS_dispatch_queue>)backendQueue;
-(void)invalidate;
-(BOOL)removeAllFilesWithError:(id*)arg1;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2;
-(id)evictItemAtURL:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 request:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)resolveProviderItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemForItemID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(BOOL)arg5 request:(id)arg6 completionHandler:(/*^block*/id)arg7;
-(void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)startAndGetSyncAnchor:(id*)arg1;
-(id)createRootByImportingURL:(id)arg1 error:(id*)arg2;
-(void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(BOOL)arg2 markItemDataless:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)isProviderForURL:(id)arg1;
-(NSArray *)rootURLs;
-(void)fetchFSItemsForItemIdentifiers:(id)arg1 materializingIfNeeded:(BOOL)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)createIndexerWithExtension:(id)arg1 enabled:(BOOL)arg2 error:(id*)arg3;
-(id)initWithDomain:(id)arg1;
-(void)itemChangedAtURL:(id)arg1 request:(id)arg2;
-(void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)itemForURL:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)itemIDForURL:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)currentMaterializedSetSyncAnchorWithCompletionHandler:(/*^block*/id)arg1;
-(void)evictItemWithID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)updateRootAfterDomainChangeWithError:(id*)arg1;

@end

