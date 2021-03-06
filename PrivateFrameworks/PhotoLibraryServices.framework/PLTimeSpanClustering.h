/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLTimeSpanClustering : PLDataClustering {

	unsigned long long _averageNumberOfObjects;
	double _minimumSpan;

}

@property (assign,nonatomic) unsigned long long averageNumberOfObjects;              //@synthesize averageNumberOfObjects=_averageNumberOfObjects - In the implementation block
@property (assign,nonatomic) double minimumSpan;                                     //@synthesize minimumSpan=_minimumSpan - In the implementation block
-(unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2 ;
-(unsigned long long)averageNumberOfObjects;
-(void)setAverageNumberOfObjects:(unsigned long long)arg1 ;
-(double)minimumSpan;
-(void)setMinimumSpan:(double)arg1 ;
-(id)init;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

