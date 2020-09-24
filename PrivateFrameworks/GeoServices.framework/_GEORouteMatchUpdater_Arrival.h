/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _arrivalStep;
	GEOComposedRouteStep* _previousExitStationStep;
	PolylineCoordinate _arrivalRouteCoordinate;
	GEOCoarseLocationLatLng _destinationLocationCoordinate;

}
-(id)initWithRoute:(id)arg1 arrivalStep:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
@end
