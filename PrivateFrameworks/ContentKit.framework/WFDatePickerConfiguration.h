/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface WFDatePickerConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSString* _datePickerMode;
	NSDate* _defaultDate;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (nonatomic,copy) NSString * datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * defaultDate;                 //@synthesize defaultDate=_defaultDate - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                 //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                 //@synthesize maximumDate=_maximumDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)defaultDate;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)datePickerMode;
-(void)setDatePickerMode:(NSString *)arg1 ;
@end

