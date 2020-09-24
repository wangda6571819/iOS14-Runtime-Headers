/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/CLKComplicationClient.h>

@protocol CLKComplicationDataSource;
@class NSString, NSXPCConnection, NSSet, NSArray, NSDate;

@interface CLKComplicationServer : NSObject <CLKComplicationClient> {

	NSString* _clientIdentifier;
	Class _dataSourceClass;
	NSXPCConnection* _serverConnection;
	id<CLKComplicationDataSource> _dataSource;
	NSSet* _activeComplications;
	os_unfair_lock_s _connectionLock;
	int _restartNotificationToken;
	struct {
		BOOL supportsGetTimeTravelDirections;
		BOOL supportsGetTimelineStartDate;
		BOOL supportsGetTimelineEndDate;
		BOOL supportsGetPrivacyBehavior;
		BOOL supportsGetTimelineAnimationBehavior;
		BOOL supportsExtendAfter;
		BOOL supportsExtendBefore;
		BOOL supportsGetRequestedUpdate;
		BOOL supportsNotifyRequestedUpdate;
		BOOL supportsNotifyBudgetExhausted;
		BOOL supportsGetPlaceholderTemplate;
		BOOL supportsGetLocalizableDescriptionProvider;
		BOOL supportsGetLocalizableSampleTemplate;
		BOOL exceptionOnSkippedHandler;
		BOOL supportsGetAlwaysOnTemplate;
		BOOL supportsComplicationDescriptors;
		BOOL supportsHandleSharedComplicationDescriptors;
	}  _dataSourceFlags;

}

@property (nonatomic,readonly) NSArray * activeComplications; 
@property (nonatomic,readonly) NSDate * earliestTimeTravelDate; 
@property (nonatomic,readonly) NSDate * latestTimeTravelDate; 
+(id)sharedInstance;
-(id)serverProxy;
-(NSArray *)activeComplications;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setActiveComplications:(NSArray *)arg1 ;
-(id)_init;
-(id)init;
-(void)_createConnection;
-(void)_createDataSourceIfNecessary;
-(void)getTimelineEndDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)reloadTimelineForComplication:(id)arg1 ;
-(void)extendTimelineForComplication:(id)arg1 ;
-(void)reloadComplicationDescriptors;
-(void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getComplicationDescriptorsWithHandler:(/*^block*/id)arg1 ;
-(void)handleSharedComplicationDescriptors:(id)arg1 ;
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getNextRequestedUpdateDateWithHandler:(/*^block*/id)arg1 ;
-(void)requestedUpdateDidBegin;
-(void)requestedUpdateBudgetExhausted;
-(void)getPlaceholderTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_complicationServiceDidStart;
-(void)_checkinWithServer;
-(BOOL)_shouldAllowComplication:(id)arg1 ;
-(NSDate *)earliestTimeTravelDate;
-(NSDate *)latestTimeTravelDate;
@end
