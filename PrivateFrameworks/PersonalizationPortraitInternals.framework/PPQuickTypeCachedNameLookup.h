/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSArray;

@interface PPQuickTypeCachedNameLookup : NSObject {

	NSObject*<OS_dispatch_semaphore> _sem;
	NSArray* _candidates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                              //@synthesize candidates=_candidates - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sem;
-(NSArray *)candidates;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setCandidates:(NSArray *)arg1 ;
@end
