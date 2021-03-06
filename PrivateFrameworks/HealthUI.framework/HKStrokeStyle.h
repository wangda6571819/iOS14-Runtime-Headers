/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface HKStrokeStyle : NSObject <NSCopying> {

	int _lineCap;
	int _lineJoin;
	int _blendMode;
	UIColor* _strokeColor;
	double _lineWidth;
	long long _dashStyle;

}

@property (nonatomic,copy) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCap;                      //@synthesize lineCap=_lineCap - In the implementation block
@property (assign,nonatomic) int lineJoin;                     //@synthesize lineJoin=_lineJoin - In the implementation block
@property (assign,nonatomic) long long dashStyle;              //@synthesize dashStyle=_dashStyle - In the implementation block
@property (assign,nonatomic) int blendMode;                    //@synthesize blendMode=_blendMode - In the implementation block
+(id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(double)lineWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)lineCap;
-(void)applyToContext:(CGContextRef)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(int)lineJoin;
-(id)init;
-(void)setLineCap:(int)arg1 ;
-(int)blendMode;
-(UIColor *)strokeColor;
-(void)setLineJoin:(int)arg1 ;
-(void)setDashStyle:(long long)arg1 ;
-(long long)dashStyle;
@end

