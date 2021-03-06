/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {

	NSMutableArray* _destinations;

}

@property (nonatomic,readonly) NSMutableArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
-(void)addDestination:(id)arg1 ;
-(NSMutableArray *)destinations;
-(void)removePhotoLibraryFromDestinations;
-(void)sendToAllDestinations:(id)arg1 ;
-(void)updateWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(id)_readConfiguration:(id)arg1 ;
-(id)init;
-(void)removeDestination:(id)arg1 ;
-(void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
@end

