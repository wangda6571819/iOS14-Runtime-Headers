/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SecureChannelAction : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _message;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)message;
-(id)initWithURL:(id)arg1 title:(id)arg2 message:(id)arg3 ;
@end

