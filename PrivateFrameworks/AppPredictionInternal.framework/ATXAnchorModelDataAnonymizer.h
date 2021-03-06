/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXAnchorModelDataAnonymizer : NSObject
+(id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2 ;
+(id)readDeviceSpecificSalt;
+(BOOL)isFirstPartyApp:(id)arg1 ;
+(void)anonymizeMessage:(id)arg1 ;
+(BOOL)shouldAnonymizeBundle:(id)arg1 ;
+(void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)arg1 withSalt:(id)arg2 ;
+(BOOL)shouldAnonymizeActionType:(id)arg1 forBundleId:(id)arg2 ;
@end

