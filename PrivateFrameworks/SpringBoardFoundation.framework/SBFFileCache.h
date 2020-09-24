/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SBFFileCacheStore, SBFFileCacheFaultHandler, SBFFileCacheDelegate;
@class NSObject, NSMutableArray;

@interface SBFFileCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _manifest;
	id<SBFFileCacheStore> _store;
	id<SBFFileCacheFaultHandler> _faultHandler;
	id<SBFFileCacheDelegate> _delegate;
	unsigned long long _maxTotalFileSize;
	unsigned long long _maxTotalFileCount;
	double _maxAllowedTimeSinceLastAccess;
	double _maxAllowedTimeSinceGeneration;
	double _accessDateTimeAdjustment;

}

@property (assign) double accessDateTimeAdjustment;                                    //@synthesize accessDateTimeAdjustment=_accessDateTimeAdjustment - In the implementation block
@property (nonatomic,readonly) id<SBFFileCacheStore> store;                            //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<SBFFileCacheFaultHandler> faultHandler;              //@synthesize faultHandler=_faultHandler - In the implementation block
@property (__weak) id<SBFFileCacheDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long maxTotalFileSize;                                //@synthesize maxTotalFileSize=_maxTotalFileSize - In the implementation block
@property (assign) unsigned long long maxTotalFileCount;                               //@synthesize maxTotalFileCount=_maxTotalFileCount - In the implementation block
@property (assign) double maxAllowedTimeSinceLastAccess;                               //@synthesize maxAllowedTimeSinceLastAccess=_maxAllowedTimeSinceLastAccess - In the implementation block
@property (assign) double maxAllowedTimeSinceGeneration;                               //@synthesize maxAllowedTimeSinceGeneration=_maxAllowedTimeSinceGeneration - In the implementation block
-(id)callbackQueue;
-(id<SBFFileCacheFaultHandler>)faultHandler;
-(id<SBFFileCacheStore>)store;
-(id)init;
-(void)setDelegate:(id<SBFFileCacheDelegate>)arg1 ;
-(void)removeAllFiles;
-(id<SBFFileCacheDelegate>)delegate;
-(unsigned long long)maxTotalFileCount;
-(unsigned long long)maxTotalFileSize;
-(id)fileNameForIdentifier:(id)arg1 ;
-(void)_queue_updateManifestForLoadedFileWrapper:(id)arg1 filename:(id)arg2 usingStore:(id)arg3 ;
-(void)performOnWorkQueueUsingBlock:(/*^block*/id)arg1 ;
-(double)accessDateTimeAdjustment;
-(void)_queue_createManifestEntryForGeneratedFileWrapper:(id)arg1 filename:(id)arg2 usingStore:(id)arg3 ;
-(void)_queue_removeManifestEntryForFilename:(id)arg1 usingStore:(id)arg2 ;
-(void)_queue_resetManifestUsingStore:(id)arg1 ;
-(void)_queue_loadManifestUsingStore:(id)arg1 ;
-(void)_queue_evictIfNeededUsingStore:(id)arg1 ;
-(void)_queue_saveManifestUsingStore:(id)arg1 ;
-(void)_queue_evictFilesAtManifestIndexes:(id)arg1 usingStore:(id)arg2 ;
-(double)maxAllowedTimeSinceLastAccess;
-(double)maxAllowedTimeSinceGeneration;
-(void)_queue_evictFileWithInfo:(id)arg1 usingStore:(id)arg2 ;
-(id)initWithStore:(id)arg1 faultHandler:(id)arg2 ;
-(void)loadFileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMaxTotalFileSize:(unsigned long long)arg1 ;
-(void)removeFileWithIdentifier:(id)arg1 ;
-(void)setMaxTotalFileCount:(unsigned long long)arg1 ;
-(void)setMaxAllowedTimeSinceLastAccess:(double)arg1 ;
-(void)setMaxAllowedTimeSinceGeneration:(double)arg1 ;
-(void)setAccessDateTimeAdjustment:(double)arg1 ;
-(id)description;
@end
