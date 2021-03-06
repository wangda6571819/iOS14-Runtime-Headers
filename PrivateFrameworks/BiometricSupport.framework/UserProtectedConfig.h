/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UserProtectedConfig : NSObject {

	int _unlockEnabled;
	int _identificationEnabled;
	int _loginEnabled;
	int _applePayEnabled;
	int _attentionDetectionEnabled;

}

@property (assign,nonatomic) int unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) int identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (assign,nonatomic) int loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (assign,nonatomic) int applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (assign,nonatomic) int attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(void)setApplePayEnabled:(int)arg1 ;
-(int)loginEnabled;
-(void)setAttentionDetectionEnabled:(int)arg1 ;
-(int)applePayEnabled;
-(id)init;
-(int)identificationEnabled;
-(void)setLoginEnabled:(int)arg1 ;
-(void)setIdentificationEnabled:(int)arg1 ;
-(int)unlockEnabled;
-(void)setUnlockEnabled:(int)arg1 ;
-(int)attentionDetectionEnabled;
@end

