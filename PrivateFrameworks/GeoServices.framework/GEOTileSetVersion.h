/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileSetVersion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	GEOGenericTile* _genericTiles;
	unsigned long long _genericTilesCount;
	unsigned long long _genericTilesSpace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	unsigned _supportedLanguagesVersion;
	unsigned _timeToLiveSeconds;
	struct {
		unsigned has_supportedLanguagesVersion : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availableTiles : 1;
		unsigned read_genericTiles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) unsigned long long genericTilesCount; 
@property (nonatomic,readonly) GEOGenericTile* genericTiles; 
@property (assign,nonatomic) BOOL hasSupportedLanguagesVersion; 
@property (assign,nonatomic) unsigned supportedLanguagesVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)identifier;
-(void)clearAvailableTiles;
-(BOOL)hasTimeToLiveSeconds;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)timeToLiveSeconds;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(GEOTileSetRegion*)availableTiles;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)writeTo:(id)arg1 ;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)supportedLanguagesVersion;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)dealloc;
-(void)setHasSupportedLanguagesVersion:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSupportedLanguagesVersion;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGenericTiles:(GEOGenericTile*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)genericTilesCount;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)clearGenericTiles;
-(void)addGenericTile:(GEOGenericTile)arg1 ;
-(GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)availableTilesCount;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOGenericTile*)genericTiles;
-(id)description;
-(id)dictionaryRepresentation;
@end

