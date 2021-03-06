/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPDiagnosticDataReporter : NSObject
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)clearScalarKey:(id)arg1 ;
+(id)blacklistFileCreationKey;
+(id)blacklistFileRemovalKey;
+(id)submittedRecordRemovalKey;
+(id)staleRecordRemovalKey;
+(id)staleReportFileRemovalKey;
+(id)IOTrackingPrefix;
+(void)addValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3 ;
+(id)budgetUpdateKey;
+(id)diagnosticReportKeyFor:(id)arg1 scalerKeyPrefix:(id)arg2 ;
+(void)setValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3 ;
+(void)clearDPKey:(id)arg1 scalarKeyPrefix:(id)arg2 ;
+(id)daReportSubmissionKey;
+(id)parsecReportSubmissionKey;
@end

