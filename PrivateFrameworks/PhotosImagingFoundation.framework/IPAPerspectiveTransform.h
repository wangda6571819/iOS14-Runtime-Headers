/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@protocol IPAQuadGeometry;
@interface IPAPerspectiveTransform : IPAImageTransform {

	Matrix4d _projectionTransform;
	Matrix4d _viewingTransform;
	id<IPAQuadGeometry> _intrinsicGeometry;
	BOOL _isInverse;

}
-(id)inverseTransform;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const Matrix4d*)arg3 viewingTransform:(const Matrix4d*)arg4 ;
-(id)intrinsicGeometry;
@end

