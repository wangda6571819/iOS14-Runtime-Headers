/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDActivityCacheActiveSourceCalculator : NSObject {

	vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >* _workouts;
	vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >* _activationLogEntries;

}
-(void)setWorkouts:(vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >*)arg1 ;
-(HDActivityCacheActiveSourceCalculatorSourceEvent)_baseSourceEvent;
-(void)setActivationLogEntries:(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)arg1 ;
-(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)createActiveSourceLog;
-(HDActivityCacheActiveSource*)_baseActiveSource;
@end

