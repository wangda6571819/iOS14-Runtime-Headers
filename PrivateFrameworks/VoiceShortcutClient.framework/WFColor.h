/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSColor, NSString, WFGradient;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _platformColor;
	CGColorRef _CGColor;
	NSColor* _NSColor;

}

@property (nonatomic,readonly) unsigned RGBAValue; 
@property (nonatomic,readonly) NSString * hexValue; 
@property (nonatomic,readonly) WFGradient * paletteGradient; 
@property (nonatomic,readonly) CGColorRef CGColor;                        //@synthesize CGColor=_CGColor - In the implementation block
@property (nonatomic,readonly) UIColor * platformColor; 
@property (nonatomic,readonly) UIColor * UIColor; 
@property (nonatomic,readonly) NSColor * NSColor;                         //@synthesize NSColor=_NSColor - In the implementation block
+(id)colorWithRemindersColor:(id)arg1 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)clearColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithRGBAValue:(unsigned)arg1 ;
+(id)colorWithP3RGBAValue:(unsigned)arg1 ;
+(id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)workflowGradientPalette;
+(id)workflowPalette;
+(id)workflowPaletteNames;
+(id)colorWithPaletteColor:(unsigned long long)arg1 ;
+(id)whiteColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)CGColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(UIColor *)UIColor;
-(NSColor *)NSColor;
-(NSString *)hexValue;
-(id)init;
-(WFGradient *)paletteGradient;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlatformColor:(id)arg1 ;
-(UIColor *)platformColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(unsigned long long)hash;
-(unsigned)RGBAValue;
@end

