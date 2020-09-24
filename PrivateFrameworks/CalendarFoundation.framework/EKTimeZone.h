/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying> {

	NSTimeZone* _nsTimeZone;

}

@property (nonatomic,retain) NSTimeZone * nsTimeZone;              //@synthesize nsTimeZone=_nsTimeZone - In the implementation block
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
-(id)initWithNSTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSTimeZone *)nsTimeZone;
-(id)NSTimeZone;
-(BOOL)isEqual:(id)arg1 ;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(void)setNsTimeZone:(NSTimeZone *)arg1 ;
-(unsigned long long)hash;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(id)description;
@end
