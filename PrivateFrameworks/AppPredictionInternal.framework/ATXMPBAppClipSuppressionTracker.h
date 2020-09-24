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

@interface ATXMPBAppClipSuppressionTracker : PBCodable <NSCopying> {

	NSString* _bundleId;
	int _suppressionType;
	NSString* _urlHash;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasSuppressionType; 
@property (assign,nonatomic) int suppressionType;                  //@synthesize suppressionType=_suppressionType - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlHash; 
@property (nonatomic,retain) NSString * urlHash;                   //@synthesize urlHash=_urlHash - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setUrlHash:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleId;
-(unsigned long long)hash;
-(NSString *)urlHash;
-(BOOL)hasBundleId;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasUrlHash;
-(void)setSuppressionType:(int)arg1 ;
-(int)suppressionType;
-(void)setHasSuppressionType:(BOOL)arg1 ;
-(BOOL)hasSuppressionType;
-(id)suppressionTypeAsString:(int)arg1 ;
-(int)StringAsSuppressionType:(id)arg1 ;
@end
