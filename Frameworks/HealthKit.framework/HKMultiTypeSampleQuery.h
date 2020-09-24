/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKMultiTypeSampleQueryClientInterface.h>

@class NSMutableArray, HKMultiTypeQueryCursor, NSString;

@interface HKMultiTypeSampleQuery : HKQuery <HKMultiTypeSampleQueryClientInterface> {

	NSMutableArray* _samplesPendingDelivery;
	HKMultiTypeQueryCursor* _queryCursor;
	unsigned long long _limit;
	/*^block*/id _resultsHandler;

}

@property (nonatomic,copy) HKMultiTypeQueryCursor * queryCursor;              //@synthesize queryCursor=_queryCursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) id resultsHandler;                        //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)client_deliverSampleObjects:(id)arg1 queryCursor:(id)arg2 deliverResults:(BOOL)arg3 query:(id)arg4 ;
-(void)queue_validate;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 limit:(unsigned long long)arg6 resultsHandler:(/*^block*/id)arg7 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)init;
-(id)resultsHandler;
-(HKMultiTypeQueryCursor *)queryCursor;
-(void)setQueryCursor:(HKMultiTypeQueryCursor *)arg1 ;
-(id)initWithQueryCursor:(id)arg1 limit:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end
