/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <NSSecureCoding> {

	NSArray* _scopes;
	NSString* _clientID;
	long long _state;
	NSString* _transferState;
	NSString* _origin;
	NSString* _primaryClientID;

}

@property (nonatomic,copy) NSArray * scopes;                          //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,copy) NSString * clientID;                       //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * transferState;                //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,retain) NSString * primaryClientID;              //@synthesize primaryClientID=_primaryClientID - In the implementation block
@property (nonatomic,retain) NSString * origin;                       //@synthesize origin=_origin - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(void)setOrigin:(NSString *)arg1 ;
-(void)setScopes:(NSArray *)arg1 ;
-(NSString *)transferState;
-(NSArray *)scopes;
-(void)setState:(long long)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)origin;
-(void)setTransferState:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSString *)primaryClientID;
-(void)setPrimaryClientID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)state;
-(id)description;
@end

