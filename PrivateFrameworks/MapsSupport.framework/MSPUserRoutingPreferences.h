/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding> {

	BOOL _avoidTolls;
	BOOL _avoidHighways;
	NSDate* _timestamp;
	long long _defaultDisabledTransitModes;

}

@property (nonatomic,readonly) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL avoidTolls;                                    //@synthesize avoidTolls=_avoidTolls - In the implementation block
@property (nonatomic,readonly) BOOL avoidHighways;                                 //@synthesize avoidHighways=_avoidHighways - In the implementation block
@property (nonatomic,readonly) long long defaultDisabledTransitModes;              //@synthesize defaultDisabledTransitModes=_defaultDisabledTransitModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(BOOL)avoidTolls;
-(id)copy;
-(BOOL)avoidHighways;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)defaultDisabledTransitModes;
-(id)initWithAvoidTolls:(BOOL)arg1 avoidHighways:(BOOL)arg2 defaultDisabledTransitModes:(long long)arg3 ;
-(id)createUserPreferences;
@end
