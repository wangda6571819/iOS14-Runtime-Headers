/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBBlendingLayoutSelectionTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	NSString* _consumerSubType;
	NSString* _execuableTypeOfHighestRankingSuggestion;
	NSString* _highestConfidenceCategory;
	NSString* _highestRankingClientModelABGroup;
	NSString* _highestRankingClientModelId;
	NSString* _layoutType;

}

@property (nonatomic,readonly) BOOL hasLayoutType; 
@property (nonatomic,retain) NSString * layoutType;                                           //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) BOOL hasHighestConfidenceCategory; 
@property (nonatomic,retain) NSString * highestConfidenceCategory;                            //@synthesize highestConfidenceCategory=_highestConfidenceCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasHighestRankingClientModelId; 
@property (nonatomic,retain) NSString * highestRankingClientModelId;                          //@synthesize highestRankingClientModelId=_highestRankingClientModelId - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;                                      //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasExecuableTypeOfHighestRankingSuggestion; 
@property (nonatomic,retain) NSString * execuableTypeOfHighestRankingSuggestion;              //@synthesize execuableTypeOfHighestRankingSuggestion=_execuableTypeOfHighestRankingSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                                              //@synthesize abGroup=_abGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasHighestRankingClientModelABGroup; 
@property (nonatomic,retain) NSString * highestRankingClientModelABGroup;                     //@synthesize highestRankingClientModelABGroup=_highestRankingClientModelABGroup - In the implementation block
-(NSString *)consumerSubType;
-(BOOL)hasConsumerSubType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(NSString *)abGroup;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAbGroup;
-(void)copyTo:(id)arg1 ;
-(NSString *)layoutType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAbGroup:(NSString *)arg1 ;
-(void)setLayoutType:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasLayoutType;
-(void)setHighestConfidenceCategory:(NSString *)arg1 ;
-(BOOL)hasHighestConfidenceCategory;
-(NSString *)highestConfidenceCategory;
-(void)setHighestRankingClientModelId:(NSString *)arg1 ;
-(void)setExecuableTypeOfHighestRankingSuggestion:(NSString *)arg1 ;
-(void)setHighestRankingClientModelABGroup:(NSString *)arg1 ;
-(NSString *)highestRankingClientModelId;
-(NSString *)execuableTypeOfHighestRankingSuggestion;
-(NSString *)highestRankingClientModelABGroup;
-(BOOL)hasHighestRankingClientModelId;
-(BOOL)hasExecuableTypeOfHighestRankingSuggestion;
-(BOOL)hasHighestRankingClientModelABGroup;
@end

