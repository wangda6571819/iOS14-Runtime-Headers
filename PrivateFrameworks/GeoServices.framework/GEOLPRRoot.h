/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableDictionary, NSMutableArray;

@interface GEOLPRRoot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableDictionary* _powerTypes;
	NSMutableArray* _regions;
	NSMutableDictionary* _vehicleTypes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_powerTypes : 1;
		unsigned read_regions : 1;
		unsigned read_vehicleTypes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableDictionary * powerTypes; 
@property (nonatomic,retain) NSMutableDictionary * vehicleTypes; 
+(Class)regionsType;
+(Class)powerTypesType;
+(Class)vehicleTypesType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)regions;
-(void)clearRegions;
-(id)jsonRepresentation;
-(unsigned long long)regionsCount;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setPowerTypes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)powerTypes;
-(NSMutableDictionary *)vehicleTypes;
-(id)initWithData:(id)arg1 ;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)powerTypesCount;
-(void)clearPowerTypes;
-(unsigned long long)vehicleTypesCount;
-(void)clearVehicleTypes;
-(id)powerTypesForKey:(id)arg1 ;
-(void)setPowerTypesValue:(id)arg1 forKey:(id)arg2 ;
-(void)enumeratePowerTypesUsingBlock:(/*^block*/id)arg1 ;
-(void)setVehicleTypes:(NSMutableDictionary *)arg1 ;
-(void)setVehicleTypesValue:(id)arg1 forKey:(id)arg2 ;
-(id)vehicleTypesForKey:(id)arg1 ;
-(void)enumerateVehicleTypesUsingBlock:(/*^block*/id)arg1 ;
-(void)addRegions:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

