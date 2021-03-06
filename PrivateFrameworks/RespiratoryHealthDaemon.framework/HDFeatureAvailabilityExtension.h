/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HDFeatureAvailabilityExtension <HKFeatureAvailabilityProviding>
@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
@required
-(void)unregisterObserver:(id)arg1;
-(id)deviceForPairingID:(id)arg1;
-(void)registerObserver:(id)arg1 queue:(id)arg2;
-(NSString *)featureIdentifier;

@end

