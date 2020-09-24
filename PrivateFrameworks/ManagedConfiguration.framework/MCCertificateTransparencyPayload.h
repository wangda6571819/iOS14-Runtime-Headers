/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload {

	NSArray* _hashDictionaries;
	NSArray* _domainRules;

}

@property (nonatomic,readonly) NSArray * hashDictionaries;              //@synthesize hashDictionaries=_hashDictionaries - In the implementation block
@property (nonatomic,readonly) NSArray * domainRules;                   //@synthesize domainRules=_domainRules - In the implementation block
+(BOOL)isValidDomainRule:(id)arg1 ;
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(id)subtitle1Label;
-(NSArray *)hashDictionaries;
-(NSArray *)domainRules;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
@end
