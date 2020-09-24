/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIButton, UILabel;

@interface RPPairingShowViewController : UIViewController {

	/*^block*/id _dismissHandler;
	NSString* _password;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _verificationCodeLabel;

}

@property (nonatomic,retain) UIButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                      //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verificationCodeLabel;              //@synthesize verificationCodeLabel=_verificationCodeLabel - In the implementation block
@property (nonatomic,copy) id dismissHandler;                              //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,copy) NSString * password;                            //@synthesize password=_password - In the implementation block
+(id)instantiateViewController;
-(UIButton *)cancelButton;
-(UILabel *)titleLabel;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subTitleLabel;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)dismissHandler;
-(NSString *)password;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)handleCancelButton:(id)arg1 ;
-(void)_updatePasswordUI;
-(UILabel *)verificationCodeLabel;
-(void)setVerificationCodeLabel:(UILabel *)arg1 ;
@end
