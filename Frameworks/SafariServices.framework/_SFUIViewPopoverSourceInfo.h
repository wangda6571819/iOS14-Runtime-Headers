/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/_SFPopoverSourceInfo.h>

@class UIView, UIBarButtonItem, NSString;

@interface _SFUIViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {

	UIView* _view;

}

@property (nonatomic,readonly) CGRect popoverSourceRect; 
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)popoverSourceView;
-(CGRect)popoverSourceRect;
-(id)initWithView:(id)arg1 ;
@end

