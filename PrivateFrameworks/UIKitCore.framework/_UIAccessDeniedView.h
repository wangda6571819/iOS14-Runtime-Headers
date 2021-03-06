/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _UIAccessDeniedView : UIView {

	UIImageView* _lockView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSString* _title;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(id)_textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(void)setMessage:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
@end

