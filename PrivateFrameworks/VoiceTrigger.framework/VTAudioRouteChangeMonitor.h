/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VoiceTrigger-Structs.h>
#import <VoiceTrigger/VTEventMonitor.h>

@interface VTAudioRouteChangeMonitor : VTEventMonitor {

	unsigned long long _hearstConnection;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_notifyObserver:(id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(id)_CMSessionDispatchQueue;
-(unsigned long long)_updateHearstConnectionStatus;
-(void)updateExternalRouteConnectionStatus;
-(unsigned long long)hearstConnectionStatus;
-(BOOL)_hasInEarDetectSupport:(CFDictionaryRef)arg1 ;
-(BOOL)_isActiveRoute:(CFDictionaryRef)arg1 ;
-(BOOL)_hasDoAPSupport:(CFDictionaryRef)arg1 ;
@end
