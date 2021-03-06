/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGDeduper.h>

@class VNSequenceRequestHandler, VNCreateSceneprintRequest;

@interface PGSemanticalDeduper : PGDeduper {

	VNSequenceRequestHandler* _sequenceRequestHandler;
	VNCreateSceneprintRequest* _sceneprintRequest;
	BOOL _usesAdaptiveSimilarStacking;

}

@property (assign,nonatomic) BOOL usesAdaptiveSimilarStacking;              //@synthesize usesAdaptiveSimilarStacking=_usesAdaptiveSimilarStacking - In the implementation block
-(void)cleanup;
-(void)dealloc;
-(id)sceneprintByItemIdentifierWithItems:(id)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)itemsNeedingSceneprintInTimeClusters:(id)arg1 ;
-(BOOL)usesAdaptiveSimilarStacking;
-(void)setUsesAdaptiveSimilarStacking:(BOOL)arg1 ;
@end

