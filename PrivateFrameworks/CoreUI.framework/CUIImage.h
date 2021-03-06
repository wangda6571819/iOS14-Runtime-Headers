/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIImage : NSObject <NSCopying> {

	CGImageRef _cgImage;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
+(id)imageWithCGImage:(CGImageRef)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)cgImage;
-(void)dealloc;
-(CGImageRef)image;
-(CGSize)size;
@end

