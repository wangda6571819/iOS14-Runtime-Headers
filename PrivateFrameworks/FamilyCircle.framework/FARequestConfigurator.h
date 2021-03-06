/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, AAGrandSlamSigner, AIDAServiceOwnersManager, AKAppleIDSigningController, AKAppleIDServerResourceLoadDelegate, NSData, AKAppleIDAuthenticationContext;

@interface FARequestConfigurator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;
	AIDAServiceOwnersManager* _serviceOwnersManager;
	AKAppleIDSigningController* _akSigningController;
	AKAppleIDServerResourceLoadDelegate* _resourceLoadDelegate;
	NSData* _pushToken;
	BOOL _attachSetupHeader;
	AKAppleIDAuthenticationContext* _authContext;

}

@property (assign,nonatomic) BOOL attachSetupHeader;                                    //@synthesize attachSetupHeader=_attachSetupHeader - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authContext;              //@synthesize authContext=_authContext - In the implementation block
+(void)addMessageEligibilityToPayload:(id)arg1 ;
-(void)_urlForEventType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_urlEndpointForEventType:(id)arg1 ;
-(void)requestForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_accountStore;
-(id)_familyGrandSlamSigner;
-(void)pushTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)_resourceLoadDelegate:(/*^block*/id)arg1 ;
-(id)_grandSlamAccount;
-(void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_fresnoPayloadWithAdditionalPayload:(id)arg1 ;
-(id)_authContext;
-(void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3 ;
-(BOOL)attachSetupHeader;
-(id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2 ;
-(void)addFresnoHeadersToRequest:(id)arg1 ;
-(void)addPayload:(id)arg1 toRequest:(id)arg2 ;
-(AKAppleIDAuthenticationContext *)authContext;
-(void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id)_akSigningController;
-(void)setAttachSetupHeader:(BOOL)arg1 ;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)_grandSlamSigner;
-(id)_serviceOwnersManager;
-(id)_account;
@end

