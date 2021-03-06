/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDVenueBuilding, NSMutableArray, GEOPDVenueContainer;

@interface GEOPDFeatureBuilding : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDVenueBuilding* _building;
	NSMutableArray* _levels;
	GEOPDVenueContainer* _venueContainer;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_building : 1;
		unsigned read_levels : 1;
		unsigned read_venueContainer : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVenueContainer; 
@property (nonatomic,retain) GEOPDVenueContainer * venueContainer; 
@property (nonatomic,readonly) BOOL hasBuilding; 
@property (nonatomic,retain) GEOPDVenueBuilding * building; 
@property (nonatomic,retain) NSMutableArray * levels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)levelType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)levels;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(GEOPDVenueBuilding *)building;
-(GEOPDVenueContainer *)venueContainer;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(void)setBuilding:(GEOPDVenueBuilding *)arg1 ;
-(void)addLevel:(id)arg1 ;
-(unsigned long long)levelsCount;
-(void)clearLevels;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBuilding;
-(BOOL)hasVenueContainer;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

