/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCharacteristic : PBCodable <NSCopying> {

	NSString* _characteristicType;
	NSString* _serviceType;

}

@property (nonatomic,readonly) BOOL hasServiceType; 
@property (nonatomic,retain) NSString * serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicType; 
@property (nonatomic,retain) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
-(BOOL)hasServiceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)characteristicType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)serviceType;
-(BOOL)hasCharacteristicType;
@end

