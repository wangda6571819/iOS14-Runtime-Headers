/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>
#import <HealthExperience/HealthPlatform.FavoritesProviding.h>

@class NSSet;

@interface HealthExperience.FavoritesProvider : NSObject <WDFavoriteDisplayTypesControllerObserver, HealthPlatform.FavoritesProviding> {

	 observers;
	 favoriteDisplayTypesController;
	 healthStore;
	 nonspecificUpdatesDisabled;

}

@property (readonly,nonatomic) NSSet * favorites; 
@property (readonly,nonatomic) BOOL isReady; 
@property (readonly,nonatomic) BOOL isCycleTrackingFavorited; 
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(BOOL)isReady;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSSet *)favorites;
-(BOOL)isFavoriteWithObject:(id)arg1 ;
-(BOOL)isCycleTrackingFavorited;
-(void)favoritesChangedRemotely:(id)arg1 ;
@end
