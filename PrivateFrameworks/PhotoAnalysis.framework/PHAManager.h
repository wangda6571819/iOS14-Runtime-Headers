/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAMonitoring, PHAExecutive, PHAAssetResourceDataLoader, PHAGraphManager, NSURL, PHPhotoLibrary, PHAJobCoordinator, CPAnalytics, NSMutableDictionary;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {

	PHAMonitoring* _monitoring;
	PHAExecutive* _executive;
	PHAAssetResourceDataLoader* _dataLoader;
	unsigned long long _processedAssetCount;
	PHAGraphManager* _graphManager;
	NSURL* _libraryURL;
	PHPhotoLibrary* _photoLibrary;
	PHAJobCoordinator* _jobCoordinator;
	CPAnalytics* _analytics;
	NSMutableDictionary* _photoAnalysisWorkersByType;

}

@property (retain) NSURL * libraryURL;                                            //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) PHPhotoLibrary * photoLibrary;                                 //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (retain) NSMutableDictionary * photoAnalysisWorkersByType;              //@synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType - In the implementation block
@property (readonly) PHAExecutive * executive;                                    //@synthesize executive=_executive - In the implementation block
@property (readonly) PHAJobCoordinator * jobCoordinator;                          //@synthesize jobCoordinator=_jobCoordinator - In the implementation block
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (readonly) PHAGraphManager * graphManager;                              //@synthesize graphManager=_graphManager - In the implementation block
@property (readonly) CPAnalytics * analytics;                                     //@synthesize analytics=_analytics - In the implementation block
+(void)enumerateWorkerClassesUsingBlock:(/*^block*/id)arg1 ;
+(id)allWorkerClasses;
-(NSURL *)libraryURL;
-(id)statusAsDictionary;
-(CPAnalytics *)analytics;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)faceClassificationServiceWorker;
-(PHPhotoLibrary *)photoLibrary;
-(NSMutableDictionary *)photoAnalysisWorkersByType;
-(BOOL)turboIsEnabled;
-(id)monitoring;
-(void)turboConstraintsWereRemoved;
-(void)stopAllBackgroundActivities;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(BOOL)isQuiescent;
-(void)startTurboProcessing;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(PHAJobCoordinator *)jobCoordinator;
-(void)enumerateWorkersUsingBlock:(/*^block*/id)arg1 ;
-(id)presentationWorker;
-(BOOL)isReadyForAnalysis;
-(id)init;
-(void)disableTurboMode;
-(BOOL)photosIsConnected;
-(id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2 ;
-(void)handleOperation:(id)arg1 ;
-(void)setPhotoAnalysisWorkersByType:(NSMutableDictionary *)arg1 ;
-(PHAGraphManager *)graphManager;
-(void)checkForQuiescence;
-(void)graphManagerDidUnloadGraph:(id)arg1 ;
-(id)faceProcessingServiceWorker;
-(void)stopBackgroundActivity;
-(void)graphManagerWillLoadGraph:(id)arg1 ;
-(void)shutdown;
-(void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reportTurboEnabledWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)graphServiceWorker;
-(void)triggerBackgroundActivity;
-(void)enableTurboMode;
-(id)description;
-(void)backgroundActivityDidBegin;
-(PHAExecutive *)executive;
@end
