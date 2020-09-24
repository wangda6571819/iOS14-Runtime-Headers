/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImage.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIImageSymbolConfiguration;

@interface UIImageNibPlaceholder : UIImage <NSCoding> {

	NSString* runtimeResourceName;
	NSString* systemSymbolResourceName;
	long long _resourceRenderingMode;
	UIImageSymbolConfiguration* _resourceSymbolImageConfiguration;

}

@property (assign,nonatomic) long long resourceRenderingMode;                                          //@synthesize resourceRenderingMode=_resourceRenderingMode - In the implementation block
@property (nonatomic,copy) UIImageSymbolConfiguration * resourceSymbolImageConfiguration;              //@synthesize resourceSymbolImageConfiguration=_resourceSymbolImageConfiguration - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResourceRenderingMode:(long long)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 andRuntimeResourceName:(id)arg2 ;
-(id)initWithData:(id)arg1 andRuntimeResourceName:(id)arg2 ;
-(long long)resourceRenderingMode;
-(id)initWithRuntimeSystemSymbolResourceName:(id)arg1 ;
-(UIImageSymbolConfiguration *)resourceSymbolImageConfiguration;
-(void)setResourceSymbolImageConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
@end
