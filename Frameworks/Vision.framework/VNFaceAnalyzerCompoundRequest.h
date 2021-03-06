/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNHomologousObservationClassCompoundRequest.h>

@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(Class)configurationClass;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)detectionLevel;
-(id)initWithDetectorType:(id)arg1 configuration:(id)arg2 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputfacesThatNeedAttributes:(id)arg3 isFaceprintRequest:(BOOL)arg4 isAttributeRequest:(BOOL)arg5 ;
-(long long)dependencyProcessingOrdinality;
@end

