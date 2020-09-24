/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue;
#import <Montreal/Montreal-Structs.h>
@interface MLPDeviceHandler : NSObject {

	mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> weightSeed;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	unsigned long long _dataLayout;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (readonly) unsigned long long dataLayout;                 //@synthesize dataLayout=_dataLayout - In the implementation block
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(void)importDataFromGPU:(id)arg1 cmdBuf:(id)arg2 ;
-(id)initWithDataLayout:(id)arg1 ;
-(id)weightMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 stdDev:(float)arg3 initialValues:(const void*)arg4 columnMajor:(BOOL)arg5 ;
-(id)imageFromData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 ;
-(id)matrixToVector:(id)arg1 ;
-(id)tempMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3 ;
-(id)imageFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 featureChannels:(unsigned long long)arg6 ;
-(void)sendDataToGPU:(id)arg1 ;
-(float)uniformRandWithParamA:(float)arg1 paramB:(float)arg2 ;
-(id)imageBatchFromMatrix:(id)arg1 m2iKernel:(id)arg2 cmdBuf:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 channels:(unsigned long long)arg6 ;
-(id)tempMatrixFromImages:(id)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3 ;
-(id)deduceDevice;
-(id)matrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 cmdBuf:(id)arg3 ;
-(id)weightMatrixFixedRowBytesWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 ;
-(id)biasVectorWithLength:(unsigned long long)arg1 stdDev:(float)arg2 values:(const void*)arg3 ;
-(id)matrixFromImages:(id)arg1 i2mKernel:(id)arg2 cmdBuf:(id)arg3 ;
-(id)vectorWithLength:(unsigned long long)arg1 cmdBuf:(id)arg2 ;
-(unsigned long long)dataLayout;
@end
