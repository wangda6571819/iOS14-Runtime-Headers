/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSArray;


@protocol GEOServerCondition <NSObject,NSCoding>
@property (nonatomic,readonly) long long conditionType; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSArray * subconditions; 
@required
-(NSDate *)expirationDate;
-(long long)conditionType;
-(NSArray *)subconditions;

@end

