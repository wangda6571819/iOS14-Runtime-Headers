/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject {

	BOOL _optional;
	NSString* _name;
	NSString* _prefix;
	NSRange _range;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * prefix;                              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;              //@synthesize optional=_optional - In the implementation block
-(NSRange)range;
-(BOOL)isOptional;
-(void)setOptional:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)prefix;
-(NSString *)name;
@end
