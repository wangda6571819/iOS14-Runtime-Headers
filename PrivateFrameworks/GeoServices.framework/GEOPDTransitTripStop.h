/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDTransitTripStop : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _stopInfos;

}

@property (nonatomic,retain) NSMutableArray * stopInfos; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)stopInfoType;
+(BOOL)isValid:(id)arg1 ;
+(id)transitTripStopForPlaceData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)addStopInfo:(id)arg1 ;
-(unsigned long long)stopInfosCount;
-(void)clearStopInfos;
-(id)stopInfoAtIndex:(unsigned long long)arg1 ;
-(void)setStopInfos:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)stopInfos;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
