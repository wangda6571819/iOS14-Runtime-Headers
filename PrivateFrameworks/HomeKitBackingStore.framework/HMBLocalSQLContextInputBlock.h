/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMFActivity, HMBLocalSQLContext;

@interface HMBLocalSQLContextInputBlock : HMFObject <HMFLogging> {

	NSString* _identifier;
	unsigned long long _blockRow;
	HMFActivity* _activity;
	HMBLocalSQLContext* _owner;
	unsigned long long _zoneRow;
	unsigned long long _type;

}

@property (assign,nonatomic,__weak) HMBLocalSQLContext * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long blockRow;                    //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)identifier;
-(HMBLocalSQLContext *)owner;
-(id)attributeDescriptions;
-(void)setOwner:(HMBLocalSQLContext *)arg1 ;
-(id)abort;
-(unsigned long long)type;
-(unsigned long long)zoneRow;
-(id)logIdentifier;
-(HMFActivity *)activity;
-(id)commit:(id)arg1 ;
-(unsigned long long)blockRow;
-(id)updateExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4 ;
-(void)setBlockRow:(unsigned long long)arg1 ;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4 type:(unsigned long long)arg5 ;
-(id)insertExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4 ;
@end
