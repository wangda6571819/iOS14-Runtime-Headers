/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RenderBox/RenderBox-Structs.h>
@interface RBDevice : NSObject {

	refcounted_ptr<RB::Device>* _device;
	objc_ptr<NSObject<OS_dispatch_queue> *> _queue;
	atomic<unsigned int> _pending_collect;

}

@property (nonatomic,readonly) Device* rb_device; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) id<MTLCaptureScope> captureScope; 
+(id)allDevices;
+(BOOL)isSupported;
+(id)sharedDefaultDevice;
+(id)sharedDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLCaptureScope>)captureScope;
-(Device*)rb_device;
-(void)collectResources;
-(id)pipelineDescriptions:(id)arg1 extraColorFormats:(id)arg2 ;
@end

