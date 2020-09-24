/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNTCCSimulation.h>

@protocol CNTCCCNTCCSimulation;
@class CNAuditToken, NSNumber;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation> {

	CNAuditToken* _auditToken;
	id<CNTCC><CNTCCSimulation> _tccServices;
	Class _entitlementVerifier;
	NSNumber* _authorizationStatusCachedValue;
	NSNumber* _isNotesAccessGrantedCachedValue;
	NSNumber* _isClientFirstOrSecondPartyCachedValue;

}

@property (nonatomic,retain) CNAuditToken * auditToken;                                     //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) id<CNTCC><CNTCCSimulation> tccServices;                        //@synthesize tccServices=_tccServices - In the implementation block
@property (nonatomic,retain) Class entitlementVerifier;                                     //@synthesize entitlementVerifier=_entitlementVerifier - In the implementation block
@property (nonatomic,retain) NSNumber * authorizationStatusCachedValue;                     //@synthesize authorizationStatusCachedValue=_authorizationStatusCachedValue - In the implementation block
@property (nonatomic,retain) NSNumber * isNotesAccessGrantedCachedValue;                    //@synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue - In the implementation block
@property (nonatomic,retain) NSNumber * isClientFirstOrSecondPartyCachedValue;              //@synthesize isClientFirstOrSecondPartyCachedValue=_isClientFirstOrSecondPartyCachedValue - In the implementation block
@property (nonatomic,readonly) long long authorizationStatus; 
@property (nonatomic,readonly) BOOL isAccessGranted; 
@property (nonatomic,readonly) BOOL isAccess1Granted; 
@property (nonatomic,readonly) BOOL isAccess2Granted; 
@property (nonatomic,readonly) BOOL isNotesAccessGranted; 
@property (nonatomic,readonly) BOOL isAccessRestricted; 
@property (nonatomic,readonly) BOOL isClientFirstOrSecondParty; 
@property (nonatomic,readonly) BOOL isClientTCCWhitelisted; 
+(id)sharedInstance;
+(id)os_log;
-(id)initWithCNAuditToken:(id)arg1 tccServices:(id)arg2 entitlementVerifier:(Class)arg3 ;
-(long long)authorizationStatus;
-(void)setAuditToken:(CNAuditToken *)arg1 ;
-(id)requestAuthorizationFuture:(long long)arg1 ;
-(BOOL)isAccessGrantedRequestingAccessIfNeeded;
-(void)setAuthorizationStatusCachedValue:(NSNumber *)arg1 ;
-(BOOL)checkIsClientTCCWhitelisted;
-(BOOL)isNotesAccessGranted;
-(void)setIsNotesAccessGrantedCachedValue:(NSNumber *)arg1 ;
-(BOOL)checkIsClientNotesEntitled;
-(long long)resolveRequestAuthorizationFuture:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 ;
-(NSNumber *)isClientFirstOrSecondPartyCachedValue;
-(id)errorForStatus:(long long)arg1 ;
-(BOOL)isClientFirstOrSecondParty;
-(CNAuditToken *)auditToken;
-(BOOL)isAccessRestricted;
-(void)setEntitlementVerifier:(Class)arg1 ;
-(id<CNTCC><CNTCCSimulation>)tccServices;
-(BOOL)isClientTCCWhitelisted;
-(id)init;
-(BOOL)isAccessGranted;
-(NSNumber *)isNotesAccessGrantedCachedValue;
-(NSNumber *)authorizationStatusCachedValue;
-(id)checkIfNotesAccessGranted;
-(void)setTccServices:(id<CNTCC><CNTCCSimulation>)arg1 ;
-(id)checkIsFirstPartyOrSecondPartyOrContactsSPIEntitled;
-(void)simulateStatus:(long long)arg1 ;
-(void)setIsClientFirstOrSecondPartyCachedValue:(NSNumber *)arg1 ;
-(BOOL)isAccess1Granted;
-(Class)entitlementVerifier;
-(void)checkAndUpdateAuthorizationStatusIfUnknown;
-(BOOL)isAccess2Granted;
-(void)stopSimulation;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requestAccessWithError:(id*)arg1 ;
@end
