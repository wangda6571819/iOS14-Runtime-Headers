/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPTap : PBCodable <NSCopying> {

	NSData* _colors;
	NSData* _points;
	NSData* _timeDeltas;

}

@property (nonatomic,readonly) BOOL hasTimeDeltas; 
@property (nonatomic,retain) NSData * timeDeltas;               //@synthesize timeDeltas=_timeDeltas - In the implementation block
@property (nonatomic,readonly) BOOL hasPoints; 
@property (nonatomic,retain) NSData * points;                   //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasColors; 
@property (nonatomic,retain) NSData * colors;                   //@synthesize colors=_colors - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)colors;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setColors:(NSData *)arg1 ;
-(void)setPoints:(NSData *)arg1 ;
-(BOOL)hasColors;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)points;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setTimeDeltas:(NSData *)arg1 ;
-(BOOL)hasTimeDeltas;
-(BOOL)hasPoints;
-(NSData *)timeDeltas;
@end

