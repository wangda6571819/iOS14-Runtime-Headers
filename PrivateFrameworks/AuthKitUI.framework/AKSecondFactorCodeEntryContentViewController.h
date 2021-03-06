/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/AKSecondFactorCodeEntry.h>

@class AKCodeEntryView, AKBasicLoginContentViewController, AKAppleIDAuthenticationContext, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry> {

	AKCodeEntryView* _codeGeneratorView;
	AKBasicLoginContentViewController* _titleHeaderViewController;
	AKAppleIDAuthenticationContext* _authenticationContext;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) AKCodeEntryView * codeGeneratorView;                                        //@synthesize codeGeneratorView=_codeGeneratorView - In the implementation block
@property (nonatomic,retain) AKBasicLoginContentViewController * titleHeaderViewController;              //@synthesize titleHeaderViewController=_titleHeaderViewController - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authenticationContext;                     //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,readonly) NSString * generatedCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setReason:(NSString *)arg1 ;
-(void)setAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(NSString *)generatedCode;
-(NSString *)reason;
-(AKAppleIDAuthenticationContext *)authenticationContext;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(void)_configureTitleHeaderView;
-(void)_configureCodeGenView;
-(void)_updateFontContstraints:(id)arg1 ;
-(void)jiggleAView;
-(void)clearSecondFactorEntry;
-(AKCodeEntryView *)codeGeneratorView;
-(void)setCodeGeneratorView:(AKCodeEntryView *)arg1 ;
-(AKBasicLoginContentViewController *)titleHeaderViewController;
-(void)setTitleHeaderViewController:(AKBasicLoginContentViewController *)arg1 ;
@end

