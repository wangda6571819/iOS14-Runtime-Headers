/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface AVEventWaiter : NSObject {

	NSCondition* _condition;
	BOOL _eventCompleted;

}
-(void)dealloc;
-(void)markEventAsCompleted;
-(void)waitUntilEventIsCompleted;
-(id)init;
@end
