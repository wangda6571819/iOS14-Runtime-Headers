/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitTicketingSegmentInfo.h>

@class NSString, GEOTransitTicketingSegment;

@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo> {

	GEOTransitTicketingSegment* _segment;

}

@property (nonatomic,readonly) NSString * ticketingUrl; 
@property (nonatomic,readonly) NSString * segmentName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)ticketingUrl;
-(id)initWithSegment:(id)arg1 ;
-(NSString *)segmentName;
@end

