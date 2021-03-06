/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {

	int _referenceFrame;
	double _latitude;
	double _longitude;
	double _horizontalUncertainty;
	double _altitude;
	double _verticalUncertainty;
	NSDate* _date;
	double _speed;

}

@property (assign,nonatomic) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double horizontalUncertainty;              //@synthesize horizontalUncertainty=_horizontalUncertainty - In the implementation block
@property (nonatomic,readonly) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double uncertainty; 
@property (nonatomic,readonly) double altitude;                         //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double verticalUncertainty;              //@synthesize verticalUncertainty=_verticalUncertainty - In the implementation block
@property (nonatomic,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int referenceFrame;                      //@synthesize referenceFrame=_referenceFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)referenceFrame;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(double)altitude;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(double)horizontalUncertainty;
-(id)init;
-(void)setUncertainty:(double)arg1 ;
-(double)uncertainty;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)longitude;
-(double)latitude;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 altitude:(double)arg4 verticalUncertainty:(double)arg5 date:(id)arg6 referenceFrame:(int)arg7 speed:(double)arg8 ;
-(double)speed;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 ;
-(void)setHorizontalUncertainty:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalUncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 ;
-(double)verticalUncertainty;
-(id)coordinateToString;
-(unsigned long long)hash;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(void)setLongitude:(double)arg1 ;
@end

