/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSRSpeakerRecognitionControllerDelegate.h>

@class NSString;

@interface SSRVoiceProfilePruner : NSObject <SSRSpeakerRecognitionControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_retrainVoiceProfile:(id)arg1 withAsset:(id)arg2 ;
-(void)_getScoresForAudio:(id)arg1 withController:(id)arg2 withDetector:(id)arg3 forProfile:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(unsigned long long)_deleteUtterances:(id)arg1 ;
-(void)pruneVoiceProfile:(id)arg1 forSpIdType:(unsigned long long)arg2 withAsset:(id)arg3 ;
@end

