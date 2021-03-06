/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, NSArray;


@protocol TBNetwork <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * remoteIdentifier; 
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) unsigned long long authMask; 
@property (nonatomic,readonly) NSString * authDescription; 
@property (nonatomic,readonly) NSString * attributesDescription; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) NSArray * ownerIdentifiers; 
@property (getter=isCaptive,nonatomic,readonly) BOOL captive; 
@property (getter=isMoving,nonatomic,readonly) BOOL moving; 
@property (getter=isSuspicious,nonatomic,readonly) BOOL suspicious; 
@property (getter=isPublic,nonatomic,readonly) BOOL public; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,readonly) unsigned long long tileKey; 
@property (nonatomic,readonly) unsigned long long accessPointCount; 
@property (nonatomic,readonly) double centroidLat; 
@property (nonatomic,readonly) double centroidLng; 
@optional
-(unsigned long long)tileKey;
-(unsigned long long)accessPointCount;
-(double)centroidLat;
-(double)centroidLng;

@required
-(NSString *)SSID;
-(BOOL)isPublic;
-(unsigned)venueType;
-(unsigned long long)venueGroup;
-(unsigned long long)type;
-(BOOL)isCaptive;
-(NSString *)remoteIdentifier;
-(NSArray *)ownerIdentifiers;
-(BOOL)isMoving;
-(NSSet *)accessPoints;
-(id)dictionaryRepresentation;
-(unsigned long long)authMask;
-(BOOL)isSuspicious;
-(NSString *)authDescription;
-(NSString *)attributesDescription;

@end

