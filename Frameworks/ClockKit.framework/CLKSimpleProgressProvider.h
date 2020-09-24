/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKProgressProvider.h>

@interface CLKSimpleProgressProvider : CLKProgressProvider {

	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)simpleProgressProviderWithProgress:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_validate;
-(void)setProgress:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)progress;
-(unsigned long long)hash;
-(id)JSONObjectRepresentation;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
@end
