/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol CNAvatarCaptureViewControllerDelegate, AVTAvatarRecord;
@class AVTView, NSLayoutConstraint, UILabel, CNCaptureButtonView, UIButton, UIView, UIImage;

@interface CNAvatarCaptureViewController : UIViewController {

	id<CNAvatarCaptureViewControllerDelegate> _delegate;
	AVTView* _avtView;
	NSLayoutConstraint* _avtViewHeightConstraint;
	UILabel* _promptLabel;
	id<AVTAvatarRecord> _avatarRecord;
	CNCaptureButtonView* _captureButtonView;
	UIButton* _cancelButton;
	UIView* _captureFooter;
	UIImage* _capturedImage;

}

@property (nonatomic,retain) AVTView * avtView;                                                      //@synthesize avtView=_avtView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * avtViewHeightConstraint;                           //@synthesize avtViewHeightConstraint=_avtViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * promptLabel;                                                  //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                       //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNCaptureButtonView * captureButtonView;                                //@synthesize captureButtonView=_captureButtonView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIView * captureFooter;                                                 //@synthesize captureFooter=_captureFooter - In the implementation block
@property (nonatomic,retain) UIImage * capturedImage;                                                //@synthesize capturedImage=_capturedImage - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCaptureViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIButton *)cancelButton;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(AVTView *)avtView;
-(UILabel *)promptLabel;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDelegate:(id<CNAvatarCaptureViewControllerDelegate>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setAvtView:(AVTView *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 ;
-(void)loadAvatarView;
-(void)addPromptLabel;
-(void)updateAvtViewAspectRatioConstraint;
-(BOOL)shouldUseLandscapeLayout;
-(void)layoutFooterView;
-(void)setupFooterView;
-(void)dismissCaptureController;
-(void)didTapCancelButton:(id)arg1 ;
-(void)didTapCaptureButton:(id)arg1 ;
-(NSLayoutConstraint *)avtViewHeightConstraint;
-(void)setAvtViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(UIView *)captureFooter;
-(CNCaptureButtonView *)captureButtonView;
-(void)setCaptureButtonView:(CNCaptureButtonView *)arg1 ;
-(void)setCaptureFooter:(UIView *)arg1 ;
-(UIImage *)capturedImage;
-(void)setCapturedImage:(UIImage *)arg1 ;
-(id<CNAvatarCaptureViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
@end

