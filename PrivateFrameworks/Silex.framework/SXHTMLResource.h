/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXHTMLResource.h>
@class NSString, NSURL;


@protocol SXHTMLResource <SXResource>
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
@required
-(NSURL *)baseURL;
-(NSString *)HTML;

@end


@class NSString, NSURL;

@interface SXHTMLResource : SXResource <SXHTMLResource>

@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)baseURL;
-(NSString *)HTML;
@end
