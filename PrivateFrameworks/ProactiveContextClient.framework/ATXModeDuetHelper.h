/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXModeDuetHelper : NSObject
-(id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ascending:(BOOL)arg4 otherPredicates:(id)arg5 limit:(unsigned long long)arg6 ;
-(id)modeStreamFrom:(id)arg1 to:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)modeStreamFrom:(id)arg1 to:(id)arg2 ascending:(BOOL)arg3 limit:(unsigned long long)arg4 ;
-(id)_updateModeStreamEndDates:(id)arg1 to:(id)arg2 ;
@end
