/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBFilter.h>

@interface CBSensorOverrideFilter : CBFilter {

	SCD_Struct_CB13 _chromaticity;
	double _illuminance;
	int _orientation;

}

@property (assign) int orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)dealloc;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
@end
