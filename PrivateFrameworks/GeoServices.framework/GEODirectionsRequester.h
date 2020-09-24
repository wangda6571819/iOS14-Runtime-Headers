/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GEODirectionsRequesterServerProxy;
@interface GEODirectionsRequester : NSObject {

	id<_GEODirectionsRequesterServerProxy> _serverProxy;

}
+(void)useProxy:(Class)arg1 ;
+(id)sharedRequester;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(/*^block*/id)arg7 networkActivity:(/*^block*/id)arg8 error:(/*^block*/id)arg9 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(id)init;
-(void)startRequest:(id)arg1 callbackQueue:(id)arg2 finished:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)finalizeRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
@end
