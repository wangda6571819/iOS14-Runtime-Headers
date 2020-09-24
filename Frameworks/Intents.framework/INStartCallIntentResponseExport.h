/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, INConnectedCall;


@protocol INStartCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * shouldDoEmergencyCountdown; 
@property (assign,nonatomic) long long confirmationReason; 
@property (nonatomic,copy) INConnectedCall * startedCall; 
@required
-(long long)code;
-(long long)confirmationReason;
-(void)setConfirmationReason:(long long)arg1;
-(INConnectedCall *)startedCall;
-(NSNumber *)shouldDoEmergencyCountdown;
-(void)setShouldDoEmergencyCountdown:(id)arg1;
-(void)setStartedCall:(id)arg1;

@end
