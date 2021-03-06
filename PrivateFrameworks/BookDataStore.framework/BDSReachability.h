/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(BOOL)isOffline;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityForInternetConnection;
+(id)sharedReachabilityForInternetConnection;
+(void)_updateIsOffline;
-(int)currentReachabilityStatus;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)connectionRequired;
-(void)stopNotifier;
-(BOOL)startNotifier;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
@end

