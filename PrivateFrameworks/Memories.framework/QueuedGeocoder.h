/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGeocoder, NSMapTable, GeocodeRequest, Reachability, NSRecursiveLock;

@interface QueuedGeocoder : NSObject {

	double _placemarkDifferentationDistance;
	CLGeocoder* _geocoder;
	NSMapTable* _locationToPlacemarksMap;
	NSMapTable* _locationToResultMap;
	GeocodeRequest* _currentRequest;
	Reachability* _reachability;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) CLGeocoder * geocoder;                               //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,retain) NSMapTable * locationToPlacemarksMap;                //@synthesize locationToPlacemarksMap=_locationToPlacemarksMap - In the implementation block
@property (nonatomic,retain) NSMapTable * locationToResultMap;                    //@synthesize locationToResultMap=_locationToResultMap - In the implementation block
@property (nonatomic,retain) GeocodeRequest * currentRequest;                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                         //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                              //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) double placemarkDifferentationDistance;              //@synthesize placemarkDifferentationDistance=_placemarkDifferentationDistance - In the implementation block
+(id)sharedGeocoder;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)lock;
-(CLGeocoder *)geocoder;
-(id)_init;
-(id)init;
-(Reachability *)reachability;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(GeocodeRequest *)currentRequest;
-(void)setCurrentRequest:(GeocodeRequest *)arg1 ;
-(void)setReachability:(Reachability *)arg1 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dequeueRequest;
-(void)setLocationToPlacemarksMap:(NSMapTable *)arg1 ;
-(void)setLocationToResultMap:(NSMapTable *)arg1 ;
-(void)setPlacemarkDifferentationDistance:(double)arg1 ;
-(NSMapTable *)locationToPlacemarksMap;
-(double)placemarkDifferentationDistance;
-(NSMapTable *)locationToResultMap;
@end
