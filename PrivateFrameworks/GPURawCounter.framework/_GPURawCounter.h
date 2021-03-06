/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GPURawCounter/GPURawCounter.h>

@class NSString;

@interface _GPURawCounter : NSObject <GPURawCounter> {

	NSString* _name;
	NSString* _description;
	unsigned long long _counterValueType;

}

@property (copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * description;                      //@synthesize description=_description - In the implementation block
@property (readonly) unsigned long long counterValueType;              //@synthesize counterValueType=_counterValueType - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)counterValueType;
-(id)initWithName:(id)arg1 description:(id)arg2 valueType:(unsigned long long)arg3 ;
@end

