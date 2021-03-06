/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject {

	NSMutableSet* _domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;

}
+(id)ephemeralSecIdentityPreferencesController;
+(id)sharedPersistentSecIdentityPreferencesController;
-(id)_initUsingEphemeralStorage:(BOOL)arg1 ;
-(void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)arg1 forDomainAndPort:(id)arg2 ;
-(BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1 ;
@end

