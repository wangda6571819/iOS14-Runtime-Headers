/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHWidgetSheetViewControllerPresenter.h>
#import <libobjc.A.dylib/SBHOccludable.h>

@protocol SBHomeScreenOverlayViewControllerDelegate, SBHOccludable;
@class SBHRootSidebarController, UIViewController, MTMaterialView, SBHRootFolderVisualConfiguration, NSLayoutConstraint, SBTitledHomeScreenButton, SBFTodayGestureSettings, UIViewFloatAnimatableProperty, NSString;

@interface SBHomeScreenOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SBHWidgetSheetViewControllerPresenter, SBHOccludable> {

	BOOL _occluded;
	BOOL _fromLeading;
	BOOL _shouldUseReducedMotionAnimation;
	BOOL _suppressesExtraEditingButtons;
	BOOL _showsDoneButton;
	BOOL _showsAddWidgetButton;
	double _titledButtonsAlpha;
	id<SBHomeScreenOverlayViewControllerDelegate> _delegate;
	double _presentationProgress;
	SBHRootSidebarController* _contentViewController;
	UIViewController*<SBHOccludable> _leftSidebarViewController;
	UIViewController*<SBHOccludable> _rightSidebarViewController;
	MTMaterialView* _backgroundView;
	SBHRootFolderVisualConfiguration* _rootFolderVisualConfiguration;
	NSLayoutConstraint* _contentLeadingConstraint;
	NSLayoutConstraint* _contentWidthConstraint;
	SBTitledHomeScreenButton* _doneButton;
	SBTitledHomeScreenButton* _widgetButton;
	SBFTodayGestureSettings* _gestureSettings;
	UIViewFloatAnimatableProperty* _overlayPresentationFloatAnimatableProperty;

}

@property (nonatomic,readonly) MTMaterialView * backgroundView;                                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) SBHRootFolderVisualConfiguration * rootFolderVisualConfiguration;                      //@synthesize rootFolderVisualConfiguration=_rootFolderVisualConfiguration - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentLeadingConstraint;                                           //@synthesize contentLeadingConstraint=_contentLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentWidthConstraint;                                             //@synthesize contentWidthConstraint=_contentWidthConstraint - In the implementation block
@property (nonatomic,retain) SBTitledHomeScreenButton * doneButton;                                                   //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) SBTitledHomeScreenButton * widgetButton;                                                 //@synthesize widgetButton=_widgetButton - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                                    //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsAddWidgetButton;                                                               //@synthesize showsAddWidgetButton=_showsAddWidgetButton - In the implementation block
@property (nonatomic,retain) SBFTodayGestureSettings * gestureSettings;                                               //@synthesize gestureSettings=_gestureSettings - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * overlayPresentationFloatAnimatableProperty;              //@synthesize overlayPresentationFloatAnimatableProperty=_overlayPresentationFloatAnimatableProperty - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeScreenOverlayViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double presentationProgress;                                                             //@synthesize presentationProgress=_presentationProgress - In the implementation block
@property (nonatomic,readonly) double layerPresentationProgress; 
@property (assign,getter=isFromLeading,nonatomic) BOOL fromLeading;                                                   //@synthesize fromLeading=_fromLeading - In the implementation block
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) CGRect contentRect; 
@property (assign,nonatomic) BOOL shouldUseReducedMotionAnimation;                                                    //@synthesize shouldUseReducedMotionAnimation=_shouldUseReducedMotionAnimation - In the implementation block
@property (getter=isHeaderVisible,nonatomic,readonly) BOOL headerVisible; 
@property (nonatomic,readonly) SBHRootSidebarController * contentViewController;                                      //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHOccludable> leftSidebarViewController;                              //@synthesize leftSidebarViewController=_leftSidebarViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<SBHOccludable> rightSidebarViewController;                             //@synthesize rightSidebarViewController=_rightSidebarViewController - In the implementation block
@property (assign,nonatomic) BOOL suppressesExtraEditingButtons;                                                      //@synthesize suppressesExtraEditingButtons=_suppressesExtraEditingButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double titledButtonsAlpha;                                                               //@synthesize titledButtonsAlpha=_titledButtonsAlpha - In the implementation block
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                                         //@synthesize occluded=_occluded - In the implementation block
-(void)setDoneButton:(SBTitledHomeScreenButton *)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(SBTitledHomeScreenButton *)doneButton;
-(BOOL)showsDoneButton;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)contentWidth;
-(BOOL)isHeaderVisible;
-(void)setWidgetButton:(SBTitledHomeScreenButton *)arg1 ;
-(SBHRootSidebarController *)contentViewController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)titledButtonsAlpha;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)doneButtonTriggered:(id)arg1 ;
-(NSLayoutConstraint *)contentWidthConstraint;
-(void)setContentWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)newHomeScreenButtonBackgroundView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)bs_endAppearanceTransition:(BOOL)arg1 ;
-(BOOL)bs_beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(BOOL)bs_endAppearanceTransition;
-(void)widgetButtonTriggered:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(double)presentationProgress;
-(id)makeTitledButtonOfClass:(Class)arg1 ;
-(MTMaterialView *)backgroundView;
-(void)setShowsAddWidgetButton:(BOOL)arg1 ;
-(void)setShowsAddWidgetButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsAddWidgetButton;
-(void)setDelegate:(id<SBHomeScreenOverlayViewControllerDelegate>)arg1 ;
-(unsigned long long)presenterType;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setSuppressesEditingStateForListView:(BOOL)arg1 ;
-(void)setContentLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentLeadingConstraint;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg1 ;
-(BOOL)isOccluded;
-(id<SBHomeScreenOverlayViewControllerDelegate>)delegate;
-(void)setTitledButtonsAlpha:(double)arg1 ;
-(void)setSuppressesExtraEditingButtons:(BOOL)arg1 ;
-(BOOL)suppressesExtraEditingButtons;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SBTitledHomeScreenButton *)widgetButton;
-(SBHRootFolderVisualConfiguration *)rootFolderVisualConfiguration;
-(CGRect)contentRect;
-(void)setShowsDoneButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setShouldUseReducedMotionAnimation:(BOOL)arg1 ;
-(CGSize)_suggestedTodayViewSizeForBounds:(CGRect)arg1 ;
-(void)setLeftSidebarViewController:(UIViewController*<SBHOccludable>)arg1 ;
-(void)setRightSidebarViewController:(UIViewController*<SBHOccludable>)arg1 ;
-(double)layerPresentationProgress;
-(void)animatePresentationProgress:(double)arg1 withGestureLiftOffVelocity:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIViewController*<SBHOccludable>)leftSidebarViewController;
-(UIViewController*<SBHOccludable>)rightSidebarViewController;
-(BOOL)isFromLeading;
-(BOOL)shouldUseReducedMotionAnimation;
-(void)setFromLeading:(BOOL)arg1 ;
-(void)setPresentationProgress:(double)arg1 ;
-(double)contentWidthWithContainerWidth:(double)arg1 ;
-(void)_updateConstraintsForPresentationProgress:(double)arg1 ;
-(void)_configureMatchMoveAnimationForBackgroundView:(id)arg1 withSourceView:(id)arg2 ;
-(void)setPresentationProgress:(double)arg1 withAnimationUpdateMode:(long long)arg2 overrideAnimationSettings:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateLayoutForEditButtons;
-(void)_button:(id)arg1 appearAnimated:(BOOL)arg2 ;
-(void)_button:(id)arg1 disappearAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SBFTodayGestureSettings *)gestureSettings;
-(void)setGestureSettings:(SBFTodayGestureSettings *)arg1 ;
-(UIViewFloatAnimatableProperty *)overlayPresentationFloatAnimatableProperty;
-(void)setOverlayPresentationFloatAnimatableProperty:(UIViewFloatAnimatableProperty *)arg1 ;
@end

