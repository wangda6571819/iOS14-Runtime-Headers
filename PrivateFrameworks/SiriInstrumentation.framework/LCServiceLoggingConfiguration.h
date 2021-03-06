/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, LCServiceLoggingParameters, NSData;

@interface LCServiceLoggingConfiguration : PBCodable {

	BOOL _hasDefaultParameters;
	BOOL _hasConfigurationVersion;
	int _configurationVersion;
	NSArray* _applications;
	NSArray* _blacklistedBundleIdentifiers;
	LCServiceLoggingParameters* _defaultParameters;

}

@property (nonatomic,retain) LCServiceLoggingParameters * defaultParameters;              //@synthesize defaultParameters=_defaultParameters - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultParameters;                                   //@synthesize hasDefaultParameters=_hasDefaultParameters - In the implementation block
@property (assign,nonatomic) int configurationVersion;                                    //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationVersion;                                //@synthesize hasConfigurationVersion=_hasConfigurationVersion - In the implementation block
@property (nonatomic,copy) NSArray * applications;                                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy) NSArray * blacklistedBundleIdentifiers;                        //@synthesize blacklistedBundleIdentifiers=_blacklistedBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasConfigurationVersion;
-(NSArray *)blacklistedBundleIdentifiers;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDefaultParameters:(LCServiceLoggingParameters *)arg1 ;
-(LCServiceLoggingParameters *)defaultParameters;
-(int)configurationVersion;
-(void)setApplications:(NSArray *)arg1 ;
-(void)setBlacklistedBundleIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)blacklistedBundleIdentifiersCount;
-(id)applicationsAtIndex:(unsigned long long)arg1 ;
-(void)setConfigurationVersion:(int)arg1 ;
-(void)setHasDefaultParameters:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addApplications:(id)arg1 ;
-(void)setHasConfigurationVersion:(BOOL)arg1 ;
-(unsigned long long)applicationsCount;
-(NSArray *)applications;
-(void)clearBlacklistedBundleIdentifiers;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)addBlacklistedBundleIdentifiers:(id)arg1 ;
-(void)clearApplications;
-(id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDefaultParameters;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
@end

