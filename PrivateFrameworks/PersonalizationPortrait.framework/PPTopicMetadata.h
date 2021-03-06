/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	BOOL _exactMatchInSourceText;
	unsigned short _impressionCount;
	unsigned short _occurrencesInSource;
	unsigned short _algorithmResultPosition;
	unsigned short _algorithmResultCount;

}

@property (nonatomic,readonly) unsigned short impressionCount;                      //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;                  //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
@property (nonatomic,readonly) unsigned short algorithmResultPosition;              //@synthesize algorithmResultPosition=_algorithmResultPosition - In the implementation block
@property (nonatomic,readonly) unsigned short algorithmResultCount;                 //@synthesize algorithmResultCount=_algorithmResultCount - In the implementation block
@property (nonatomic,readonly) BOOL exactMatchInSourceText;                         //@synthesize exactMatchInSourceText=_exactMatchInSourceText - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(unsigned short)occurrencesInSource;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 algorithmResultPosition:(unsigned short)arg3 algorithmResultCount:(unsigned short)arg4 exactMatchInSourceText:(BOOL)arg5 ;
-(BOOL)isEqualToTopicMetadata:(id)arg1 ;
-(unsigned short)algorithmResultPosition;
-(unsigned short)algorithmResultCount;
-(BOOL)exactMatchInSourceText;
-(unsigned long long)hash;
-(unsigned short)impressionCount;
@end

