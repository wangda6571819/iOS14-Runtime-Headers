/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMSortingStyleReadWriteProtocol.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class NSString, REMObjectID, NSArray, REMResolutionTokenMap, NSData;

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding> {

	unsigned long long _storeGeneration;
	unsigned long long _copyGeneration;
	BOOL _isPersisted;
	NSString* sortingStyle;
	long long sortingDirection;
	REMObjectID* _objectID;
	NSString* _smartListTag;
	NSArray* _ordering;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSData* _resolutionTokenMapData;

}

@property (nonatomic,retain) REMObjectID * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * smartListTag;                                   //@synthesize smartListTag=_smartListTag - In the implementation block
@property (nonatomic,retain) NSArray * ordering;                                      //@synthesize ordering=_ordering - In the implementation block
@property (assign,nonatomic) BOOL isPersisted;                                        //@synthesize isPersisted=_isPersisted - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;              //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSData * resolutionTokenMapData;                         //@synthesize resolutionTokenMapData=_resolutionTokenMapData - In the implementation block
@property (nonatomic,copy) NSString * sortingStyle; 
@property (assign,nonatomic) long long sortingDirection; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)newObjectID;
+(id)cdEntityName;
-(void)setResolutionTokenMapData:(NSData *)arg1 ;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(NSString *)sortingStyle;
-(void)setSortingDirection:(long long)arg1 ;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(unsigned long long)storeGeneration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)resolutionTokenMapData;
-(void)setSortingStyle:(NSString *)arg1 ;
-(long long)sortingDirection;
-(id)cdKeyToStorageKeyMap;
-(REMObjectID *)remObjectID;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(id)initWithObjectID:(id)arg1 smartListTag:(id)arg2 ;
-(void)setIsPersisted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)ordering;
-(BOOL)isPersisted;
-(unsigned long long)hash;
-(void)setSmartListTag:(NSString *)arg1 ;
-(void)setOrdering:(NSArray *)arg1 ;
-(NSString *)smartListTag;
@end

