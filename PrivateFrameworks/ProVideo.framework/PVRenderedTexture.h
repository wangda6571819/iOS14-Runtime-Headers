/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderedTexture : NSObject {

	HGRef<HGGLTexture>* _glTexture;

}

@property (nonatomic,readonly) unsigned textureName; 
@property (nonatomic,readonly) unsigned textureTarget; 
@property (nonatomic,readonly) CGRect textureRect; 
@property (nonatomic,readonly) CGRect bitmapRect; 
-(unsigned)textureName;
-(unsigned)textureTarget;
-(CGRect)textureRect;
-(CGSize)textureSize;
-(id)initWithHGGLTexture:(HGRef<HGGLTexture>*)arg1 ;
-(CGRect)bitmapRect;
@end

