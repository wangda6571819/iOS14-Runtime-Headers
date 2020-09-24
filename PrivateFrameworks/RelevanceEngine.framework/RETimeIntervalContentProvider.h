/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeIntervalContentProvider : RETextContentProvider {

	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(id)timeIntervalContentProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)endDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end
