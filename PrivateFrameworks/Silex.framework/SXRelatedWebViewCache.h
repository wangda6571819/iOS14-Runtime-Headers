/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject {

	NSMapTable* _cache;

}

@property (nonatomic,readonly) NSMapTable * cache;              //@synthesize cache=_cache - In the implementation block
-(NSMapTable *)cache;
-(id)init;
-(id)relatedWebViewForBaseURL:(id)arg1 ;
-(void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2 ;
@end

