/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallSource.h>

@class NSString, NSURL, CXInProcessProvider;

@interface CXInProcessCallSource : CXCallSource {

	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _localizedName;
	CXInProcessProvider* _provider;

}

@property (nonatomic,retain) CXInProcessProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(id)identifier;
-(id)bundleURL;
-(BOOL)isPermittedToUsePrivateAPI;
-(id)bundleIdentifier;
-(id)localizedName;
-(CXInProcessProvider *)provider;
-(SCD_Struct_CX1)auditToken;
-(BOOL)isPermittedToUsePublicAPI;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setProvider:(CXInProcessProvider *)arg1 ;
-(id)vendorProtocolDelegate;
-(int)processIdentifier;
@end

