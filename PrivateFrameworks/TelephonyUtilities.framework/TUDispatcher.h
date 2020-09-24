/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TUDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)dispatcherWithQueue:(id)arg1 ;
+(id)dispatcherWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)dispatchAsynchronousBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)boostQualityOfService;
-(/*^block*/id)qosUserInteractiveDispatchBlockForBlock:(/*^block*/id)arg1 ;
-(void)dispatchSynchronousBlock:(/*^block*/id)arg1 ;
@end
