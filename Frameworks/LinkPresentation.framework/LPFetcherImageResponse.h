/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPFetcherResponse.h>
#import <libobjc.A.dylib/LPFetcherURLResponse.h>

@class LPImage, NSString;

@interface LPFetcherImageResponse : LPFetcherResponse <LPFetcherURLResponse> {

	LPImage* _image;

}

@property (nonatomic,retain,readonly) LPImage * image;              //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidMIMEType:(id)arg1 ;
+(id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3 ;
+(id)imagePropertiesForFetcher:(id)arg1 ;
-(id)initWithImage:(id)arg1 fetcher:(id)arg2 ;
-(LPImage *)image;
@end
