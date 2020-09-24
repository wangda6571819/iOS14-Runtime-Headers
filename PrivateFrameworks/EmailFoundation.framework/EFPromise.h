/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFCancelable.h>

@class EFFuture, NSString;

@interface EFPromise : NSObject <EFCancelable> {

	EFFuture* _future;

}

@property (readonly) EFFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)promise;
-(void)cancel;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(EFFuture *)future;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
@end
