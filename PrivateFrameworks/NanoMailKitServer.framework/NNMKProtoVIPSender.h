/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoVIPSender : PBCodable <NSCopying> {

	NSString* _displayName;
	NSMutableArray* _emailAddresses;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)emailAddressesType;
+(id)protoVIP:(id)arg1 ;
-(BOOL)hasDisplayName;
-(NSMutableArray *)emailAddresses;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addEmailAddresses:(id)arg1 ;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)clearEmailAddresses;
-(unsigned long long)hash;
-(NSString *)name;
-(id)emailAddressesAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)emailAddressesCount;
-(id)dictionaryRepresentation;
-(id)vipSender;
@end
