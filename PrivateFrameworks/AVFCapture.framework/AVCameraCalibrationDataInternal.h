/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSData, NSDictionary;

@interface AVCameraCalibrationDataInternal : NSObject {

	SCD_Struct_AV32 intrinsicMatrix;
	CGSize intrinsicMatrixReferenceDimensions;
	SCD_Struct_AV33 extrinsicMatrix;
	float pixelSize;
	NSData* lensDistortionCoefficients;
	NSData* inverseLensDistortionCoefficients;
	CGPoint lensDistortionCenter;
	NSData* lensDistortionLookupTable;
	NSData* inverseLensDistortionLookupTable;
	NSDictionary* cameraCalibrationDataDictionary;

}
@end

