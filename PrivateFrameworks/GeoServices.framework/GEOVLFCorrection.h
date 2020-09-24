/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFCorrection : PBCodable <NSCopying> {

	unsigned _headingCorrectionMagnitude;
	unsigned _locationCorrectionMagnitude;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasLocationCorrectionMagnitude; 
@property (assign,nonatomic) unsigned locationCorrectionMagnitude; 
@property (assign,nonatomic) BOOL hasHeadingCorrectionMagnitude; 
@property (assign,nonatomic) unsigned headingCorrectionMagnitude; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setLocationCorrectionMagnitude:(unsigned)arg1 ;
-(unsigned)locationCorrectionMagnitude;
-(void)setHeadingCorrectionMagnitude:(unsigned)arg1 ;
-(void)setHasLocationCorrectionMagnitude:(BOOL)arg1 ;
-(unsigned)headingCorrectionMagnitude;
-(BOOL)hasLocationCorrectionMagnitude;
-(void)setHasHeadingCorrectionMagnitude:(BOOL)arg1 ;
-(BOOL)hasHeadingCorrectionMagnitude;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
