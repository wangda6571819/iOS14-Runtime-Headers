/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * bootstrapSpeechId; 
@property (nonatomic,copy) NSString * deviceType; 
@property (nonatomic,copy) NSDate * keychainCreationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootstrapSpeechIdMetadata;
+(id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)deviceType;
-(id)groupIdentifier;
-(NSString *)bootstrapSpeechId;
-(void)setBootstrapSpeechId:(NSString *)arg1 ;
-(NSDate *)keychainCreationDate;
-(void)setKeychainCreationDate:(NSDate *)arg1 ;
@end
