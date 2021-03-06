/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {

	NSMutableDictionary* _keywordsByCategoryMaskByDateIntervalByMomentUUID;

}

@property (readonly) NSDictionary * aggregatedKeywords; 
-(void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
-(id)init;
-(NSDictionary *)aggregatedKeywords;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2 ;
@end

