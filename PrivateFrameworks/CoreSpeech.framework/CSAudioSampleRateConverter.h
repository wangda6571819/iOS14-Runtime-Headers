/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioSampleRateConverter : NSObject {

	OpaqueAudioConverterRef _sampleRateConverter;
	float _outBufferScaleFactor;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;

}
+(id)upsampler;
+(id)downsampler;
-(void)dealloc;
-(id)convertSampleRateOfBuffer:(id)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(OpaqueAudioConverterRef)_createSampleRateConverterWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
@end

