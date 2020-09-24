/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriLongPressButtonSource.h>

@class NSString, SiriLongPressButtonContext;

@interface SiriTVActivationSource : SiriLongPressButtonSource {

	NSString* _deviceIdentifier;
	double _longPressInterval;
	SiriLongPressButtonContext* _context;

}

@property (assign,nonatomic) double longPressInterval;                          //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (nonatomic,retain) SiriLongPressButtonContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                         //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(id)activationSourceForIdentifier:(long long)arg1 ;
-(double)longPressInterval;
-(id)_deviceIdentifier;
-(void)setLongPressInterval:(double)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setContext:(SiriLongPressButtonContext *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(SiriLongPressButtonContext *)context;
@end
