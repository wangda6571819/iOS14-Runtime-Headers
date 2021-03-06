/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <NSSecureCoding> {

	BOOL _available;
	NSString* _channelIdentifier;
	NSString* _localizedLabel;
	NSString* _localizedBadgeLabel;
	NSString* _handle;
	TUSenderIdentity* _senderIdentity;

}

@property (nonatomic,readonly) NSString * channelIdentifier;                   //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel;                      //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (nonatomic,readonly) NSString * localizedBadgeLabel;                 //@synthesize localizedBadgeLabel=_localizedBadgeLabel - In the implementation block
@property (nonatomic,readonly) NSString * handle;                              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) TUSenderIdentity * senderIdentity;              //@synthesize senderIdentity=_senderIdentity - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available;              //@synthesize available=_available - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAvailable;
-(NSString *)handle;
-(NSString *)channelIdentifier;
-(NSString *)localizedBadgeLabel;
-(NSString *)localizedLabel;
-(id)initWithCoder:(id)arg1 ;
-(TUSenderIdentity *)senderIdentity;
-(void)encodeWithCoder:(id)arg1 ;
@end

