/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathPainter.h>
#import <TSReading/TSSThemeAsset.h>

@class NSString;

@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset> {

	int mInterest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isOpaque;
-(id)referenceColor;
-(int)fillType;
-(BOOL)isClear;
-(BOOL)isNearlyWhite;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(BOOL)drawsInOneStep;
-(void)addInterest;
-(void)removeInterest;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(BOOL)shouldBeReappliedToCALayer:(id)arg1 ;
-(void)i_flushCaches;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
@end
