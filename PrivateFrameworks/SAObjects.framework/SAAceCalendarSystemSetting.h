/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAceCalendarSystemSetting : SADomainObject

@property (nonatomic,copy) NSString * calendarType; 
+(id)aceCalendarSystemSetting;
+(id)aceCalendarSystemSettingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setCalendarType:(NSString *)arg1 ;
-(NSString *)calendarType;
@end

