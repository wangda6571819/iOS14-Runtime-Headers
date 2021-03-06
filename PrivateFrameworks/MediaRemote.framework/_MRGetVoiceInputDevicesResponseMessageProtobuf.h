/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR28* _deviceIDs;
	unsigned _errorCode;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) unsigned long long deviceIDsCount; 
@property (nonatomic,readonly) unsigned* deviceIDs; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                               //@synthesize errorCode=_errorCode - In the implementation block
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearDeviceIDs;
-(void)setDeviceIDs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addDeviceIDs:(unsigned)arg1 ;
-(unsigned long long)deviceIDsCount;
-(unsigned)deviceIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasErrorCode;
-(unsigned*)deviceIDs;
-(unsigned)errorCode;
-(id)description;
-(id)dictionaryRepresentation;
@end

