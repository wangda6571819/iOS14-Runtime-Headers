/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFDateProviding.h>

@class NSMutableDictionary, NSTimer, NSCalendar, NSString;

@interface SBFDefaultDateProvider : NSObject <SBFDateProviding> {

	NSMutableDictionary* _minuteHandlers;
	unsigned long long _nextToken;
	NSTimer* _minuteTimer;
	NSCalendar* _calendar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)date;
-(id)init;
-(void)_updateMinuteTimer;
-(void)_scheduleNextMinuteTimer;
-(void)_minuteTimerFired;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
@end
