/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVCaptureSession.h>

@interface AVCaptureMultiCamSession : AVCaptureSession {

	float _hardwareCost;
	float _systemPressureCost;

}

@property (nonatomic,readonly) float hardwareCost; 
@property (nonatomic,readonly) float systemPressureCost; 
+(BOOL)isMultiCamSupported;
-(void)_removeConnection:(id)arg1 ;
-(void)dealloc;
-(void)startRunning;
-(float)hardwareCost;
-(id)init;
-(BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_addConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_updateCosts;
-(void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2 ;
-(BOOL)isOverCost:(id*)arg1 ;
-(void)_updateSystemPressureCost;
-(void)_updateHardwareCost;
-(id)_livePortSetsByDeviceInput;
-(unsigned)_computeMemoryUsageForOutputs;
-(float)_computeEncoderCostForOutputs;
-(id)_physicalDevicePowerInfoSet;
-(id)_constituentDeviceFormatFromVirtualDeviceFormat:(id)arg1 virtualDevice:(id)arg2 constituentDevice:(id)arg3 ;
-(float)systemPressureCost;
-(BOOL)canSetSessionPreset:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

