/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(SCD_Struct_SL13)imageSizeWithData:(id)arg1 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

