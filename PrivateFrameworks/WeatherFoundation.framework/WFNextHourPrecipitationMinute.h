/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject <NSCopying> {

	double _intensity;
	double _chance;
	double _perceivedIntensity;
	NSDate* _date;

}

@property (nonatomic,readonly) double intensity;                       //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) double chance;                          //@synthesize chance=_chance - In the implementation block
@property (nonatomic,readonly) double perceivedIntensity;              //@synthesize perceivedIntensity=_perceivedIntensity - In the implementation block
@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(double)chance;
-(double)intensity;
-(id)initWithIntensity:(double)arg1 chance:(double)arg2 perceivedIntensity:(double)arg3 date:(id)arg4 ;
-(double)perceivedIntensity;
@end

