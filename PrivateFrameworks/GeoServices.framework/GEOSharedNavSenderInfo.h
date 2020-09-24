/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOSharedNavSenderInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _fromDisplayName;
	NSString* _fromIdentifier;
	NSString* _localContactIdentifier;
	NSString* _localName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_fromDisplayName : 1;
		unsigned read_fromIdentifier : 1;
		unsigned read_localContactIdentifier : 1;
		unsigned read_localName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocalName; 
@property (nonatomic,retain) NSString * localName; 
@property (nonatomic,readonly) BOOL hasLocalContactIdentifier; 
@property (nonatomic,retain) NSString * localContactIdentifier; 
@property (nonatomic,readonly) BOOL hasFromIdentifier; 
@property (nonatomic,retain) NSString * fromIdentifier; 
@property (nonatomic,readonly) BOOL hasFromDisplayName; 
@property (nonatomic,retain) NSString * fromDisplayName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)localName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)fromIdentifier;
-(NSString *)localContactIdentifier;
-(NSString *)fromDisplayName;
-(void)setLocalName:(NSString *)arg1 ;
-(void)setLocalContactIdentifier:(NSString *)arg1 ;
-(BOOL)hasLocalName;
-(void)setFromIdentifier:(NSString *)arg1 ;
-(void)setFromDisplayName:(NSString *)arg1 ;
-(BOOL)hasLocalContactIdentifier;
-(BOOL)hasFromIdentifier;
-(BOOL)hasFromDisplayName;
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
