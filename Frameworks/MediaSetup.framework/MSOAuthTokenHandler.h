/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSAuthenticationConfiguration, CMSAuthenticationCredential, NSURLSessionConfiguration, CMSNetworkActivity;

@interface MSOAuthTokenHandler : NSObject {

	CMSAuthenticationConfiguration* _authorizationConfiguration;
	CMSAuthenticationCredential* _authorizationCredential;
	NSURLSessionConfiguration* _URLSessionConfiguration;
	CMSNetworkActivity* _parentNetworkActivity;
	CMSNetworkActivity* _networkActivity;

}

@property (nonatomic,readonly) CMSNetworkActivity * parentNetworkActivity;                     //@synthesize parentNetworkActivity=_parentNetworkActivity - In the implementation block
@property (nonatomic,retain) CMSNetworkActivity * networkActivity;                             //@synthesize networkActivity=_networkActivity - In the implementation block
@property (readonly) CMSAuthenticationConfiguration * authorizationConfiguration;              //@synthesize authorizationConfiguration=_authorizationConfiguration - In the implementation block
@property (readonly) CMSAuthenticationCredential * authorizationCredential;                    //@synthesize authorizationCredential=_authorizationCredential - In the implementation block
@property (readonly) NSURLSessionConfiguration * URLSessionConfiguration;                      //@synthesize URLSessionConfiguration=_URLSessionConfiguration - In the implementation block
+(id)tokenHandlerWithConfiguration:(id)arg1 existingCredential:(id)arg2 URLSessionConfiguration:(id)arg3 parentNetworkActivity:(id)arg4 ;
-(NSURLSessionConfiguration *)URLSessionConfiguration;
-(CMSNetworkActivity *)networkActivity;
-(void)setNetworkActivity:(CMSNetworkActivity *)arg1 ;
-(id)initWithConfiguration:(id)arg1 existingCredential:(id)arg2 URLSessionConfiguration:(id)arg3 parentNetworkActivity:(id)arg4 ;
-(void)performTokenFetchTaskWithSession:(id)arg1 bodyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CMSNetworkActivity *)parentNetworkActivity;
-(void)performTokenGrantRequestWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performTokenRefreshWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchTokens:(/*^block*/id)arg1 ;
-(CMSAuthenticationConfiguration *)authorizationConfiguration;
-(CMSAuthenticationCredential *)authorizationCredential;
@end
