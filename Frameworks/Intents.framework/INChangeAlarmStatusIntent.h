/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INChangeAlarmStatusIntentExport.h>

@class INAlarmSearch, NSArray, NSString;

@interface INChangeAlarmStatusIntent : INIntent <INChangeAlarmStatusIntentExport>

@property (nonatomic,copy,readonly) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy,readonly) NSArray * alarms; 
@property (nonatomic,readonly) long long operation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(NSArray *)alarms;
-(id)_dictionaryRepresentation;
-(void)setOperation:(long long)arg1 ;
-(id)_metadata;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(INAlarmSearch *)arg1 ;
-(id)initWithAlarmSearch:(id)arg1 alarms:(id)arg2 operation:(long long)arg3 ;
-(void)setAlarms:(NSArray *)arg1 ;
-(long long)operation;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
@end

