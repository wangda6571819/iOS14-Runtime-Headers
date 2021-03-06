/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUnit, NSData, NSSet, MXMSampleTag, NSMeasurement, NSNumber, NSString;

@interface MXMSample : NSObject <NSSecureCoding, NSCopying> {

	NSUnit* _unit;
	void* _underlyingValue;
	unsigned long long _underlyingValueLength;
	NSData* _date;
	unsigned long long _timestamp;
	NSSet* _attributes;
	unsigned long long _valueType;
	unsigned long long _length;
	MXMSampleTag* _tag;

}

@property (nonatomic,copy,readonly) NSMeasurement * asMeasurementValue; 
@property (nonatomic,copy,readonly) NSNumber * asNumberValue; 
@property (nonatomic,readonly) double floatValue; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) unsigned long long unsignedValue; 
@property (nonatomic,readonly) NSData * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                         //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                            //@synthesize length=_length - In the implementation block
@property (nonatomic,copy,readonly) NSUnit * unit; 
@property (nonatomic,readonly) MXMSampleTag * tag;                                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortDesc; 
+(BOOL)supportsSecureCoding;
-(NSMeasurement *)asMeasurementValue;
-(NSNumber *)asNumberValue;
-(NSString *)shortDesc;
-(NSUnit *)unit;
-(double)floatValue;
-(long long)integerValue;
-(unsigned long long)unsignedValue;
-(const double*)numberValueDouble;
-(id)attributeWithName:(id)arg1 ;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 ;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 ;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 timestamp:(unsigned long long)arg5 ;
-(id)initWithTag:(id)arg1 attributes:(id)arg2 pixelBufferValue:(CVBufferRef)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)convertToUnit:(id)arg1 ;
-(NSData *)date;
-(unsigned long long)timestamp;
-(NSSet *)attributes;
-(unsigned long long)valueType;
-(unsigned long long)length;
-(MXMSampleTag *)tag;
@end

