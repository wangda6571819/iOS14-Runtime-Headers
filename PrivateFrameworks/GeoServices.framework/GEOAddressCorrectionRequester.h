/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOAddressCorrectionRequester : NSObject {

	NSMapTable* _pendingRequests;
	os_unfair_lock_s _pendingRequestsLock;

}
+(id)sharedRequester;
-(void)cancelRequest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)startAddressCorrectionInitRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startAddressCorrectionUpdateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end

