/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMSampleTimeSeries : MXMSampleSet {

	MXMSampleTimeSeries* _time;

}

@property (nonatomic,retain,readonly) MXMSampleTimeSeries * timeIndex; 
-(MXMSampleTimeSeries *)timeIndex;
-(id)init;
-(id)initWithAbsoluteTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContinuousTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithTimeSeries:(double*)arg1 unit:(id)arg2 length:(unsigned long long)arg3 ;
-(void)_appendAbsoluteTime:(unsigned long long)arg1 ;
@end
