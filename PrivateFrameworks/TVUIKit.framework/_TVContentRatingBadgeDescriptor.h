/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVContentRatingBadgeDescriptor : NSObject {

	BOOL _templatedImage;
	NSString* _resourceName;

}

@property (nonatomic,copy,readonly) NSString * resourceName;                             //@synthesize resourceName=_resourceName - In the implementation block
@property (getter=isTemplatedImage,nonatomic,readonly) BOOL templatedImage;              //@synthesize templatedImage=_templatedImage - In the implementation block
-(NSString *)resourceName;
-(id)initWithResourceName:(id)arg1 isTemplatedImage:(BOOL)arg2 ;
-(BOOL)isTemplatedImage;
@end

