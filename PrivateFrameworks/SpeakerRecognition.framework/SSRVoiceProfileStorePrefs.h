/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRVoiceProfileStorePrefs : NSObject
+(id)sharedStorePrefs;
-(long long)getVoiceProfileStoreVersion;
-(id)loadKnownUserVoiceProfiles;
-(void)setVoiceProfileStoreVersion:(unsigned long long)arg1 ;
-(void)saveKnownUserVoiceProfiles:(id)arg1 ;
@end

