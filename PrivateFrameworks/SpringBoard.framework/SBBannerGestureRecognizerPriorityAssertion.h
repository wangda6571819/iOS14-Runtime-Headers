/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable> {

	/*^block*/id _invalidationHandler;
	/*^block*/id _enablementChangeHandler;
	BOOL _enabled;
	long long _priority;
	NSString* _reason;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long priority;                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidBannerGestureRecognizerPriority:(long long)arg1 ;
-(void)invalidate;
-(BOOL)isEnabled;
-(NSString *)reason;
-(long long)priority;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(id)initWithPriority:(long long)arg1 reason:(id)arg2 invalidationHandler:(/*^block*/id)arg3 enablementChangeHandler:(/*^block*/id)arg4 ;
@end

