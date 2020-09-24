/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDataCollector;
@class HDProfile, NSDictionary, NSMapTable;

@interface HDDataCollectorMultiplexer : NSObject {

	HDProfile* _profile;
	id<HDDataCollector> _collector;
	NSDictionary* _aggregatorsByType;
	NSMapTable* _recordsByAggregator;

}
-(id)lastDatumForType:(id)arg1 ;
-(id)mergedConfiguration;
-(id)diagnosticDescription;
-(void)setConfiguration:(id)arg1 forAggregator:(id)arg2 ;
-(void)registerForCollectionWithState:(id)arg1 ;
-(id)identifierForAggregator:(id)arg1 ;
-(id)initForCollector:(id)arg1 identifier:(id)arg2 profile:(id)arg3 types:(id)arg4 ;
-(id)aggregatorForType:(id)arg1 ;
-(void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2 ;
@end
