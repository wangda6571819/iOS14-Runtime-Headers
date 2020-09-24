/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol REIntentProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * launchId; 
@property (nonatomic,readonly) NSString * _nanoLaunchId; 
@property (nonatomic,readonly) NSString * _categoryVerb; 
@property (nonatomic,readonly) NSString * _className; 
@property (nonatomic,readonly) NSString * typeName; 
@property (nonatomic,readonly) BOOL _supportsBackgroundExecution; 
@property (nonatomic,readonly) NSDictionary * _validParameterCombinations; 
@required
-(NSString *)identifier;
-(NSString *)typeName;
-(NSString *)_nanoLaunchId;
-(NSDictionary *)_validParameterCombinations;
-(BOOL)_supportsBackgroundExecution;
-(NSString *)_categoryVerb;
-(NSString *)launchId;
-(NSString *)_className;

@end
