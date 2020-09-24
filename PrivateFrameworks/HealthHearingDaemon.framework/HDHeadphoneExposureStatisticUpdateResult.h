/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDHeadphoneExposureStatisticUpdateResult : NSObject {

	BOOL _includedSeries;
	BOOL _canTriggerNotification;

}

@property (nonatomic,readonly) BOOL includedSeries;                      //@synthesize includedSeries=_includedSeries - In the implementation block
@property (nonatomic,readonly) BOOL canTriggerNotification;              //@synthesize canTriggerNotification=_canTriggerNotification - In the implementation block
+(id)_resultWithIncludedSeries:(BOOL)arg1 canTriggerNotification:(BOOL)arg2 ;
+(id)_resultWithIncludedSeries:(BOOL)arg1 samples:(id)arg2 ;
+(id)resultForEmptySamplesAdded;
+(id)resultForAggregation;
+(id)resultForSamplesAdded:(id)arg1 includedSeries:(BOOL)arg2 ;
+(id)resultForSamplesJournaled:(id)arg1 ;
-(BOOL)includedSeries;
-(BOOL)canTriggerNotification;
-(id)_initWithIncludedSeries:(BOOL)arg1 canTriggerNotification:(BOOL)arg2 ;
-(void)combineWithResult:(id)arg1 ;
@end
