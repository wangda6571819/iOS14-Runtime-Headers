/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigScreenCaptureFrameHandlerDelegate;
#import <MediaToolbox/MediaToolbox-Structs.h>
@interface FigScreenCaptureController : NSObject {

	id<FigScreenCaptureFrameHandlerDelegate> _delegateWeak;
	OpaqueFigVirtualDisplaySessionRef _session;
	OpaqueFigSimpleMutexRef _lock;
	CGSize _size;
	SCD_Struct_Fi11 _minIntervalBetweenFrames;

}

@property (assign,nonatomic) OpaqueFigVirtualDisplaySessionRef session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) OpaqueFigSimpleMutexRef lock;                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi11 minIntervalBetweenFrames;                              //@synthesize minIntervalBetweenFrames=_minIntervalBetweenFrames - In the implementation block
@property (assign,nonatomic,__weak) id<FigScreenCaptureFrameHandlerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
+(id)screenCaptureControllerWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi11)arg2 ;
-(void)setLock:(OpaqueFigSimpleMutexRef)arg1 ;
-(void)stopCapture;
-(OpaqueFigSimpleMutexRef)lock;
-(void)setSession:(OpaqueFigVirtualDisplaySessionRef)arg1 ;
-(OpaqueFigVirtualDisplaySessionRef)session;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi11)arg2 ;
-(void)startCapture;
-(SCD_Struct_Fi11)minIntervalBetweenFrames;
-(void)didReceiveSampleBuffer:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 destRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(void)setMinIntervalBetweenFrames:(SCD_Struct_Fi11)arg1 ;
-(void)setDelegate:(id<FigScreenCaptureFrameHandlerDelegate>)arg1 ;
-(id<FigScreenCaptureFrameHandlerDelegate>)delegate;
-(CGSize)size;
@end

