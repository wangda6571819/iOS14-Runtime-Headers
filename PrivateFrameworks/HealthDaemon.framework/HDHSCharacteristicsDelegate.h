/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHSCharacteristicsDelegate
@required
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
-(void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2;

@end
