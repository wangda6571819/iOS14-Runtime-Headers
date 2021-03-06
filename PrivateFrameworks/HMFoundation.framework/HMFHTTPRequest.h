/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFHTTPRequestInternal, NSURL, NSString, NSDictionary, NSData, NSURLRequest;

@interface HMFHTTPRequest : HMFObject {

	HMFHTTPRequestInternal* _internal;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;                           //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequestInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest; 
-(NSURLRequest *)urlRequest;
-(NSData *)body;
-(id)attributeDescriptions;
-(NSURL *)URL;
-(NSDictionary *)headerFields;
-(id)init;
-(HMFHTTPRequestInternal *)internal;
-(double)timeoutInterval;
-(NSString *)method;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithInternalRequest:(id)arg1 ;
@end

