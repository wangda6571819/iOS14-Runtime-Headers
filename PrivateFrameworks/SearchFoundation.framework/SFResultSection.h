/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSDictionary;

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying> {

	BOOL _isInitiallyHidden;
	NSArray* _results;
	unsigned long long _maxInitiallyVisibleResults;
	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _moreText;
	double _rankingScore;

}

@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * results;                                          //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long maxInitiallyVisibleResults;              //@synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults - In the implementation block
@property (assign,nonatomic) BOOL isInitiallyHidden;                                     //@synthesize isInitiallyHidden=_isInitiallyHidden - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * moreText;                                          //@synthesize moreText=_moreText - In the implementation block
@property (assign,nonatomic) double rankingScore;                                        //@synthesize rankingScore=_rankingScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)rankingScore;
-(void)setIsInitiallyHidden:(BOOL)arg1 ;
-(BOOL)isInitiallyHidden;
-(void)setMoreText:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSArray *)results;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setMaxInitiallyVisibleResults:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(id)init;
-(NSString *)moreText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRankingScore:(double)arg1 ;
-(unsigned long long)maxInitiallyVisibleResults;
-(BOOL)compareWithSection:(id)arg1 logger:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
@end

