/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface APUnfairRecursiveLock : NSObject <NSLocking> {

	os_unfair_recursive_lock_s _lock;

}
-(void)lock;
-(void)unlock;
-(id)init;
@end
