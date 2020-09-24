/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IKAppPrototypeIdentifier : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _selector;
	NSDictionary* _groupingValues;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * selector;                        //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * groupingValues;              //@synthesize groupingValues=_groupingValues - In the implementation block
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)selector;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)groupingValues;
-(id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3 ;
@end
