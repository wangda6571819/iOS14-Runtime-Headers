/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKIDirectInvocationContext : NSObject {

	BOOL _voiceTriggerEnabled;
	BOOL _textToSpeechEnabled;
	BOOL _eyesFree;
	NSString* _inputOrigin;
	NSString* _interactionType;

}

@property (assign,getter=isVoiceTriggerEnabled,nonatomic) BOOL voiceTriggerEnabled;              //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (assign,getter=isTextToSpeechEnabled,nonatomic) BOOL textToSpeechEnabled;              //@synthesize textToSpeechEnabled=_textToSpeechEnabled - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) BOOL eyesFree;                                    //@synthesize eyesFree=_eyesFree - In the implementation block
@property (nonatomic,copy) NSString * inputOrigin;                                               //@synthesize inputOrigin=_inputOrigin - In the implementation block
@property (nonatomic,copy) NSString * interactionType;                                           //@synthesize interactionType=_interactionType - In the implementation block
+(id)contextForCarPlayDirectAction;
+(id)contextForAnnounceNotifications;
-(NSString *)interactionType;
-(id)init;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)setEyesFree:(BOOL)arg1 ;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(void)setTextToSpeechEnabled:(BOOL)arg1 ;
-(void)setInteractionType:(NSString *)arg1 ;
-(BOOL)isEyesFree;
-(BOOL)isVoiceTriggerEnabled;
-(BOOL)isTextToSpeechEnabled;
@end

