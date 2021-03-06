/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Endpointer <NSObject>
@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@optional
-(BOOL)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2;
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2;

@required
-(void)reset;
-(int)getStatus:(AudioQueueBuffer*)arg1;
-(int)endpointMode;
-(double)endWaitTime;
-(void)setEndpointMode:(int)arg1;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1;
-(void)setEndWaitTime:(double)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;

@end

