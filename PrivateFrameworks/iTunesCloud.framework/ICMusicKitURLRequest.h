/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICURLRequest.h>

@class ICStoreURLRequest, NSString, NSDictionary, ICMusicKitRequestContext;

@interface ICMusicKitURLRequest : ICURLRequest {

	ICStoreURLRequest* _pendingEquivalentStoreURLRequest;
	NSString* _developerToken;
	NSDictionary* _additionalHTTPCookies;

}

@property (nonatomic,copy,readonly) NSString * _developerToken;                                    //@synthesize developerToken=_developerToken - In the implementation block
@property (nonatomic,readonly) ICStoreURLRequest * _pendingEquivalentStoreURLRequest; 
@property (nonatomic,copy,readonly) ICMusicKitRequestContext * requestContext; 
@property (nonatomic,copy) NSDictionary * additionalHTTPCookies;                                   //@synthesize additionalHTTPCookies=_additionalHTTPCookies - In the implementation block
+(unsigned long long)_defaultMaxRetryCountForReason:(id)arg1 ;
+(Class)_responseClass;
+(Class)_responseHandlerClass;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(ICMusicKitRequestContext *)requestContext;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(void)setAdditionalHTTPCookies:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalHTTPCookies;
-(ICStoreURLRequest *)_pendingEquivalentStoreURLRequest;
-(void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)arg1 ;
-(void)_buildMusicKitURLRequestWithBaseURLRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setDeveloperToken:(id)arg1 ;
-(void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)arg1 developerToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)_developerToken;
-(id)description;
@end

