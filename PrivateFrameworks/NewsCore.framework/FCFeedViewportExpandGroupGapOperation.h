/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCFeedViewport, FCFeedDescriptor, FCFeedViewportGap, NSArray, FCDateRange, NSDictionary, NSMutableDictionary, FCFeedGroup, NSError;

@interface FCFeedViewportExpandGroupGapOperation : FCOperation {

	BOOL _lightweightOnly;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	FCFeedViewportGap* _gap;
	unsigned long long _desiredHeadlineCount;
	long long _gapExpansionPolicy;
	/*^block*/id _expandGapCompletionHandler;
	NSArray* _feedGroupEmitters;
	FCDateRange* _refreshDateRange;
	NSDictionary* _toCursorsByEmitterID;
	NSMutableDictionary* _forYouCatchUpOperationsByEdition;
	NSArray* _resultInternalElements;
	FCFeedGroup* _resultInsertedGroup;
	NSError* _resultError;

}

@property (nonatomic,retain) NSArray * feedGroupEmitters;                                         //@synthesize feedGroupEmitters=_feedGroupEmitters - In the implementation block
@property (nonatomic,retain) FCDateRange * refreshDateRange;                                      //@synthesize refreshDateRange=_refreshDateRange - In the implementation block
@property (nonatomic,retain) NSDictionary * toCursorsByEmitterID;                                 //@synthesize toCursorsByEmitterID=_toCursorsByEmitterID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * forYouCatchUpOperationsByEdition;              //@synthesize forYouCatchUpOperationsByEdition=_forYouCatchUpOperationsByEdition - In the implementation block
@property (nonatomic,retain) NSArray * resultInternalElements;                                    //@synthesize resultInternalElements=_resultInternalElements - In the implementation block
@property (nonatomic,retain) FCFeedGroup * resultInsertedGroup;                                   //@synthesize resultInsertedGroup=_resultInsertedGroup - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                               //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                                           //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                                   //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) FCFeedViewportGap * gap;                                               //@synthesize gap=_gap - In the implementation block
@property (assign,nonatomic) unsigned long long desiredHeadlineCount;                             //@synthesize desiredHeadlineCount=_desiredHeadlineCount - In the implementation block
@property (assign,nonatomic) long long gapExpansionPolicy;                                        //@synthesize gapExpansionPolicy=_gapExpansionPolicy - In the implementation block
@property (assign) BOOL lightweightOnly;                                                          //@synthesize lightweightOnly=_lightweightOnly - In the implementation block
@property (nonatomic,copy) id expandGapCompletionHandler;                                         //@synthesize expandGapCompletionHandler=_expandGapCompletionHandler - In the implementation block
-(FCFeedViewportGap *)gap;
-(void)setGapExpansionPolicy:(long long)arg1 ;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(FCFeedViewport *)viewport;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(NSDictionary *)toCursorsByEmitterID;
-(FCDateRange *)refreshDateRange;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(NSMutableDictionary *)forYouCatchUpOperationsByEdition;
-(void)prepareOperation;
-(NSError *)resultError;
-(void)setExpandGapCompletionHandler:(id)arg1 ;
-(BOOL)lightweightOnly;
-(void)setResultError:(NSError *)arg1 ;
-(id)_groupsFromRefreshSessionContainingGap:(id)arg1 internalElements:(id)arg2 ;
-(void)setToCursorsByEmitterID:(NSDictionary *)arg1 ;
-(FCFeedGroup *)resultInsertedGroup;
-(long long)gapExpansionPolicy;
-(void)setRefreshDateRange:(FCDateRange *)arg1 ;
-(unsigned long long)desiredHeadlineCount;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setForYouCatchUpOperationsByEdition:(NSMutableDictionary *)arg1 ;
-(FCCloudContext *)context;
-(NSArray *)resultInternalElements;
-(id)_associatedForYouCatchUpOperationForEdition:(id)arg1 ;
-(void)setResultInsertedGroup:(FCFeedGroup *)arg1 ;
-(void)setResultInternalElements:(NSArray *)arg1 ;
-(void)setFeedGroupEmitters:(NSArray *)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)expandGapCompletionHandler;
-(void)setGap:(FCFeedViewportGap *)arg1 ;
-(void)setLightweightOnly:(BOOL)arg1 ;
-(void)setDesiredHeadlineCount:(unsigned long long)arg1 ;
-(NSArray *)feedGroupEmitters;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end
