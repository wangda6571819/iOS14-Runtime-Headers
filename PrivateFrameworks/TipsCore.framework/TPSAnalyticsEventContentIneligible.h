/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	unsigned long long _displayType;
	long long _reason;

}

@property (nonatomic,readonly) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) long long reason;                            //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6 ;
-(NSString *)contentID;
-(unsigned long long)displayType;
-(id)mutableAnalyticsEventRepresentation;
-(id)duetEvent;
-(id)eventName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)reason;
-(id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6 ;
-(NSString *)bundleID;
@end

