/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup {

	double _scale;
	cuintproperties _textureProperties;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaCropped; 
-(BOOL)isOpaque;
-(double)scale;
-(BOOL)_cacheRenditionProperties;
-(BOOL)isAlphaCropped;
-(id)textureWithBufferAllocator:(id)arg1 ;
-(CGSize)size;
-(int)exifOrientation;
-(CGRect)alphaCroppedRect;
-(id)description;
@end
