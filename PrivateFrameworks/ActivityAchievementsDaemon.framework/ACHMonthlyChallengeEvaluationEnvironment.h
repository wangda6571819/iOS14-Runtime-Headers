/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACHMonthlyChallengeDataSource, ACHDateComponentInterval, NSCalendar;

@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject {

	ACHMonthlyChallengeDataSource* _dataSource;
	ACHDateComponentInterval* _dateComponentInterval;
	NSCalendar* _calendar;

}

@property (assign,nonatomic,__weak) ACHMonthlyChallengeDataSource * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ACHDateComponentInterval * dateComponentInterval;                     //@synthesize dateComponentInterval=_dateComponentInterval - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double numberOfDaysClosingAllThreeRingsInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysClosingMoveRingInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysClosingExerciseRingInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysClosingStandRingInCurrentMonth; 
@property (nonatomic,readonly) double totalEnergyBurnInCurrentMonth; 
@property (nonatomic,readonly) double totalMoveTimeInCurrentMonth; 
@property (nonatomic,readonly) double totalExerciseMinutesInCurrentMonth; 
@property (nonatomic,readonly) double numberOfWorkoutsCompletedInCurrentMonth; 
@property (nonatomic,readonly) double totalWalkingRunningDistanceInCurrentMonth; 
@property (nonatomic,readonly) double numberOfDaysDoublingMoveGoalInCurrentMonth; 
-(void)setDataSource:(ACHMonthlyChallengeDataSource *)arg1 ;
-(NSCalendar *)calendar;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(ACHMonthlyChallengeDataSource *)dataSource;
-(id)initWithMonthlyChallengeDataSource:(id)arg1 dateComponentInterval:(id)arg2 calendar:(id)arg3 ;
-(double)_valueForMonthlyChallengeType:(unsigned long long)arg1 ;
-(ACHDateComponentInterval *)dateComponentInterval;
-(double)numberOfDaysClosingAllThreeRingsInCurrentMonth;
-(double)numberOfDaysClosingMoveRingInCurrentMonth;
-(double)numberOfDaysClosingExerciseRingInCurrentMonth;
-(double)numberOfDaysClosingStandRingInCurrentMonth;
-(double)totalEnergyBurnInCurrentMonth;
-(double)totalMoveTimeInCurrentMonth;
-(double)totalExerciseMinutesInCurrentMonth;
-(double)numberOfWorkoutsCompletedInCurrentMonth;
-(double)totalWalkingRunningDistanceInCurrentMonth;
-(double)numberOfDaysDoublingMoveGoalInCurrentMonth;
-(void)setDateComponentInterval:(ACHDateComponentInterval *)arg1 ;
@end
