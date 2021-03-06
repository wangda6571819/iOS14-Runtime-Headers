/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXAnchorModelPhase3TrainerProtocol.h>

@class ATXAnchor, ATXAnchorModelDataStoreWrapper, ATXAnchorModelHyperParameters, NSString;

@interface ATXAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol> {

	ATXAnchor* _anchor;
	ATXAnchorModelDataStoreWrapper* _storeWrapper;
	ATXAnchorModelHyperParameters* _hyperParameters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForAnchor:(id)arg1 ;
-(id)trainPhase3ForCandidate:(id)arg1 ;
-(id)initForAnchor:(id)arg1 anchorModelDataStoreWrapper:(id)arg2 ;
-(double)startSecondsAfterAnchorGivenHistoricalOffsets:(id)arg1 ;
-(double)endSecondsAfterAnchorGivenHistoricalOffsets:(id)arg1 startSecondsAfterAnchor:(double)arg2 ;
-(unsigned long long)indexOfPercentile:(double)arg1 array:(id)arg2 ;
-(double)endSecondsAfterAnchorGivenHistoricalOffsets:(id)arg1 ;
@end

