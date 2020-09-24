/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RLMSortDescriptor : NSObject {

	BOOL _ascending;
	NSString* _keyPath;

}

@property (nonatomic,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                  //@synthesize ascending=_ascending - In the implementation block
+(id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)ascending;
-(id)reversedSortDescriptor;
-(NSString *)keyPath;
@end
