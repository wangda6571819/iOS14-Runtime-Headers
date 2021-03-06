/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}

@property (nonatomic,retain) NSMutableDictionary * bagKeySets;              //@synthesize bagKeySets=_bagKeySets - In the implementation block
-(NSMutableDictionary *)bagKeySets;
-(id)init;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
-(void)setBagKeySets:(NSMutableDictionary *)arg1 ;
-(id)generateAggregatedBagKeySet;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
@end

