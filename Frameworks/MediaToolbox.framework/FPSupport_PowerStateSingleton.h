/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FPSupport_PowerStateSingleton : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQ;

}
+(id)sharedFPSupportPowerStateSingleton;
-(void)dealloc;
-(void)_didChangePowerState:(id)arg1 ;
-(id)init;
-(void)postNotification;
@end

