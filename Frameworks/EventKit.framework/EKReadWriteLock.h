/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface EKReadWriteLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithName:(const char*)arg1 ;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
@end

