/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol BFFPasscodeInputViewDelegate;
@class UILabel, UIView, UIButton;

@interface BFFPasscodeInputView : UIView {

	id<BFFPasscodeInputViewDelegate> _delegate;
	UILabel* _instructions;
	UIView* _footerView;
	UIButton* _footerButton;
	UIButton* _instructionsLinkButton;

}

@property (nonatomic,retain) UILabel * instructions;                                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) UIButton * instructionsLinkButton;                             //@synthesize instructionsLinkButton=_instructionsLinkButton - In the implementation block
@property (assign,nonatomic,__weak) id<BFFPasscodeInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                       //@synthesize footerButton=_footerButton - In the implementation block
-(BOOL)becomeFirstResponder;
-(void)setFooterView:(UIView *)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(UILabel *)instructions;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)passcodeField;
-(UIView *)footerView;
-(void)layoutSubviews;
-(id)passcode;
-(void)disable;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setInstructions:(UILabel *)arg1 ;
-(void)setDelegate:(id<BFFPasscodeInputViewDelegate>)arg1 ;
-(id<BFFPasscodeInputViewDelegate>)delegate;
-(void)setPasscode:(id)arg1 ;
-(UIButton *)footerButton;
-(void)setFooterButtonText:(id)arg1 ;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)footerButtonPressed;
-(UIButton *)instructionsLinkButton;
-(void)setInstructionsLinkButton:(UIButton *)arg1 ;
-(void)_instructionsLinkButtonPressed;
-(id)passcodeDisplayView;
-(void)_layoutForBounds:(CGRect)arg1 ;
-(void)setInstructionsLinkText:(id)arg1 ;
-(void)shakePasscode;
@end

