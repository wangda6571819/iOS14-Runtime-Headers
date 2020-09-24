/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HSWiFiManager : NSObject <ICEnvironmentMonitorObserver> {

	SCPreferencesRef _wifiPreferences;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _wiFiEnabled;
	BOOL _wiFiAssociated;

}

@property (assign,getter=isWiFiEnabled,nonatomic) BOOL wiFiEnabled;                    //@synthesize wiFiEnabled=_wiFiEnabled - In the implementation block
@property (assign,getter=isWiFiAssociated,nonatomic) BOOL wiFiAssociated;              //@synthesize wiFiAssociated=_wiFiAssociated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWiFiManager;
-(BOOL)_getWiFiAssociated;
-(BOOL)_getWiFiEnabledFromPrefs;
-(void)dealloc;
-(id)_processIdentifier;
-(BOOL)isWiFiAssociated;
-(id)init;
-(void)setWiFiAssociated:(BOOL)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)isWiFiEnabled;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(void)_wifiCallBack:(unsigned)arg1 ;
@end
