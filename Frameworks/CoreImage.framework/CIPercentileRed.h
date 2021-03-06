/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPercentileRed : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPercentile;
	NSNumber* inputCount;
	NSNumber* inputScale;
	NSNumber* inputNormalize;
	NSNumber* inputClip;
	NSNumber* inputHard;

}

@property (nonatomic,retain) NSNumber * inputPercentile; 
@property (nonatomic,retain) NSNumber * inputCount; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputNormalize; 
@property (nonatomic,retain) NSNumber * inputClip; 
@property (nonatomic,retain) NSNumber * inputHard; 
+(id)customAttributes;
-(NSNumber *)inputClip;
-(void)setInputCount:(NSNumber *)arg1 ;
-(NSNumber *)inputHard;
-(NSNumber *)inputPercentile;
-(void)setInputPercentile:(NSNumber *)arg1 ;
-(NSNumber *)inputNormalize;
-(void)setInputClip:(NSNumber *)arg1 ;
-(void)setInputNormalize:(NSNumber *)arg1 ;
-(void)setInputHard:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputScale;
-(NSNumber *)inputCount;
-(void)setInputScale:(NSNumber *)arg1 ;
@end

