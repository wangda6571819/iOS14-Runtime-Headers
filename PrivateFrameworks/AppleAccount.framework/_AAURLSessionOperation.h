/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface _AAURLSessionOperation : NSObject {

	NSMutableData* _mutableData;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(id)operationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)data;
-(void)appendData:(id)arg1 ;
-(void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2 ;
-(id)completion;
-(id)init;
@end

