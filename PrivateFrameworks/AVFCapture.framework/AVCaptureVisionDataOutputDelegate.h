/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCaptureVisionDataOutputDelegate <NSObject>
@optional
-(void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(SCD_Struct_AV0)arg2 connection:(id)arg3 reason:(long long)arg4;
-(void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(CVBufferRef)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4;

@end
