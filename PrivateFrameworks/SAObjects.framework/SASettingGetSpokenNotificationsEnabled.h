/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingGetBool.h>

@class NSString;

@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool

@property (nonatomic,copy) NSString * appBundleId; 
+(id)getSpokenNotificationsEnabled;
+(id)getSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
@end

