/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ISKVOProxyManager : NSObject {

	NSMutableDictionary* _recordsByIdentifier;
	NSObject*<OS_dispatch_queue> _recordsQueue;

}
+(id)sharedManager;
-(id)init;
-(id)addProxyWithTarget:(id)arg1 queue:(id)arg2 keyPaths:(id)arg3 delegate:(id)arg4 ;
-(void)removeProxyWithIdentifier:(id)arg1 ;
@end

