/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface HKDeletedObject : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDictionary* _metadata;
	long long _externalSyncObjectCode;

}

@property (copy) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long externalSyncObjectCode;              //@synthesize externalSyncObjectCode=_externalSyncObjectCode - In the implementation block
@property (readonly) NSUUID * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2 ;
+(id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSUUID *)UUID;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(long long)externalSyncObjectCode;
-(void)setExternalSyncObjectCode:(long long)arg1 ;
-(id)description;
@end

