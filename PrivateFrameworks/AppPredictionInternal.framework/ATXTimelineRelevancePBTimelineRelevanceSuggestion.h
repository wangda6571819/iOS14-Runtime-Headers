/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ATXTimelineRelevancePBTimelineRelevanceSuggestion : PBCodable <NSCopying> {

	NSMutableArray* _abuseControlOutcomes;
	NSString* _suggestionID;

}

@property (nonatomic,readonly) BOOL hasSuggestionID; 
@property (nonatomic,retain) NSString * suggestionID;                            //@synthesize suggestionID=_suggestionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * abuseControlOutcomes;              //@synthesize abuseControlOutcomes=_abuseControlOutcomes - In the implementation block
+(Class)abuseControlOutcomeType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSuggestionID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)suggestionID;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAbuseControlOutcome:(id)arg1 ;
-(unsigned long long)abuseControlOutcomesCount;
-(void)clearAbuseControlOutcomes;
-(id)abuseControlOutcomeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestionID;
-(NSMutableArray *)abuseControlOutcomes;
-(void)setAbuseControlOutcomes:(NSMutableArray *)arg1 ;
@end
