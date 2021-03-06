/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SASActivationRequest.h>

@interface SASButtonActvationRequest : SASActivationRequest {

	long long _buttonIdentifier;

}

@property (assign,nonatomic) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
-(long long)buttonIdentifier;
-(void)setButtonIdentifier:(long long)arg1 ;
-(BOOL)isButtonRequest;
-(BOOL)isTestingRequest;
-(BOOL)isVoiceRequest;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isHoldToTalkSource;
@end

