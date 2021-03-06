/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSHashTable;

@interface HFMediaServiceManager : NSObject {

	NSMutableDictionary* _homeIdentifierToMediaServicesMapping;
	NSMutableDictionary* _homeIdentifierToDefaultServiceMapping;
	NSMutableDictionary* _homeIdentifierToReadRequestInFlightMapping;
	NSMutableDictionary* _homeIdentifierToRefreshNeededMapping;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToMediaServicesMapping;                    //@synthesize homeIdentifierToMediaServicesMapping=_homeIdentifierToMediaServicesMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToDefaultServiceMapping;                   //@synthesize homeIdentifierToDefaultServiceMapping=_homeIdentifierToDefaultServiceMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToReadRequestInFlightMapping;              //@synthesize homeIdentifierToReadRequestInFlightMapping=_homeIdentifierToReadRequestInFlightMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeIdentifierToRefreshNeededMapping;                    //@synthesize homeIdentifierToRefreshNeededMapping=_homeIdentifierToRefreshNeededMapping - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                       //@synthesize observers=_observers - In the implementation block
+(id)sharedManager;
-(id)_defaultMediaServiceForHome:(id)arg1 ;
-(id)_mediaServicesForHome:(id)arg1 ;
-(BOOL)_isReadRequestInFlightForHome:(id)arg1 ;
-(NSMutableDictionary *)homeIdentifierToReadRequestInFlightMapping;
-(id)_fetchDefaultMediaServiceForHome:(id)arg1 ;
-(NSMutableDictionary *)homeIdentifierToRefreshNeededMapping;
-(NSMutableDictionary *)homeIdentifierToMediaServicesMapping;
-(void)_dispatchMessageToObserversWithBlock:(/*^block*/id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSMutableDictionary *)homeIdentifierToDefaultServiceMapping;
-(void)addMediaServiceManagerObserver:(id)arg1 ;
-(void)removeMediaServiceManagerObserver:(id)arg1 ;
-(id)defaultMediaServiceForHome:(id)arg1 ;
-(id)mediaServicesForHome:(id)arg1 ;
-(id)fetchMediaServicesForHome:(id)arg1 ;
-(id)removeMediaService:(id)arg1 forHome:(id)arg2 ;
-(id)updateDefaultMediaService:(id)arg1 forHome:(id)arg2 ;
-(id)updateProperty:(id)arg1 forHome:(id)arg2 withOptions:(id)arg3 ;
-(BOOL)isRefreshNeededForHome:(id)arg1 ;
-(void)setHomeIdentifierToMediaServicesMapping:(NSMutableDictionary *)arg1 ;
-(void)setHomeIdentifierToDefaultServiceMapping:(NSMutableDictionary *)arg1 ;
-(void)setHomeIdentifierToReadRequestInFlightMapping:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setHomeIdentifierToRefreshNeededMapping:(NSMutableDictionary *)arg1 ;
@end

