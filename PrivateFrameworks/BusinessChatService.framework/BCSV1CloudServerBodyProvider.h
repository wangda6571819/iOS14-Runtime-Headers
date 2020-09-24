/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSCloudServerBodyProvider.h>

@class NSString;

@interface BCSV1CloudServerBodyProvider : NSObject <BCSCloudServerBodyProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bodyForBusinessItemRequestWithBizID:(id)arg1 ;
-(id)bodyForItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 ;
-(id)bodyForConfigItemRequestWithType:(long long)arg1 ;
-(id)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3 ;
-(id)bodyDictionaryForBusinessItemRequestWithBizID:(id)arg1 ;
-(id)jsonDataForBodyDictionary:(id)arg1 ;
-(id)bodyDictionaryForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 ;
-(id)bodyDictionaryForConfigItemWithType:(long long)arg1 ;
-(id)bodyDictionaryForChatSuggestBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3 ;
@end
