/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@class NSDictionary;

@interface HMITask : HMFOperation {

	int _taskID;

}

@property (readonly) int taskID;                          //@synthesize taskID=_taskID - In the implementation block
@property (readonly) NSDictionary * results; 
-(NSDictionary *)results;
-(int)taskID;
-(id)initWithTaskID:(int)arg1 timeout:(double)arg2 ;
-(id)initWithTaskID:(int)arg1 ;
@end
