/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeechXPCProtocol.h>

@interface CoreSpeechXPC : NSObject <CoreSpeechXPCProtocol>
-(id)init;
-(void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleFakeHearstModelRequest:(id)arg1 majorVersion:(unsigned long long)arg2 minorVersion:(unsigned long long)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)getAccessoryFallbackLocalTable;
-(id)selectFallbackModelForLocale:(id)arg1 downloadedModels:(id)arg2 preinstalledModels:(id)arg3 rtLocaleMap:(id)arg4 ;
-(id)getAccessoryFallbackFamilyLocal:(id)arg1 fromLocaleMap:(id)arg2 ;
@end

