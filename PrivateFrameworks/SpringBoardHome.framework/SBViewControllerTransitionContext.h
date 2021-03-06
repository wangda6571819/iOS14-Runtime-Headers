/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBViewControllerContextTransitioning.h>
#import <libobjc.A.dylib/SBViewControllerTransitionCoordinator.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate;
@class NSMutableDictionary, NSMapTable, BSUIAnimationFactory, NSMutableArray, NSMutableSet, UIView, NSString;

@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator> {

	long long _presentationStyle;
	CGAffineTransform _targetTransform;
	NSMutableDictionary* _viewControllersByKey;
	NSMutableDictionary* _viewsByKey;
	NSMapTable* _initialFramesByViewController;
	NSMapTable* _finalFramesByViewController;
	BOOL _transitionStarted;
	BOOL _animationFinished;
	BOOL _transitionFinished;
	BOOL _transitionIsCancelled;
	BOOL _transitionWasEverCancelled;
	BOOL _transitionBeganInteractively;
	BOOL _transitionWasInteractive;
	BOOL _wantsAnimation;
	BOOL _transitionDidBeginCalled;
	double _transitionPercentComplete;
	unsigned long long _transitionAnimationOptions;
	BSUIAnimationFactory* _transitionAnimationFactory;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id<UIViewControllerInteractiveTransitioning> _interactor;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	NSMutableArray* _alongsideInteractionEndedHandlers;
	NSMutableSet* _alongsideAnimationViews;
	NSMutableArray* _transitionContinuations;
	unsigned long long _outstandingClientCompletionCount;
	id<SBViewControllerTransitionContextDelegate> _delegate;
	UIView* _containerView;
	id _userInfo;

}

@property (nonatomic,readonly) id<SBHWidgetConfigurationAnimationContext> widgetConfigurationAnimationContext; 
@property (assign,nonatomic,__weak) id<SBViewControllerTransitionContextDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> animator; 
@property (nonatomic,retain) id<UIViewControllerInteractiveTransitioning> interactor; 
@property (assign,nonatomic) long long presentationStyle;                                                                   //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) CGAffineTransform targetTransform;                                                             //@synthesize targetTransform=_targetTransform - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (assign,nonatomic) BOOL wantsAnimation;                                                                           //@synthesize wantsAnimation=_wantsAnimation - In the implementation block
@property (nonatomic,retain) id userInfo;                                                                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
-(void)_completeTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)cancelTransition;
-(void)setTargetTransform:(CGAffineTransform)arg1 ;
-(BOOL)isInterruptible;
-(id)viewForKey:(id)arg1 ;
-(BOOL)isAnimated;
-(id<UIViewControllerAnimatedTransitioning>)animator;
-(id<UIViewControllerInteractiveTransitioning>)interactor;
-(BOOL)supportsRestarting;
-(long long)presentationStyle;
-(CGAffineTransform)targetTransform;
-(void)restartTransition;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)initiallyInteractive;
-(BOOL)isTransitioning;
-(double)completionVelocity;
-(id<SBHWidgetConfigurationAnimationContext>)widgetConfigurationAnimationContext;
-(long long)completionCurve;
-(UIView *)containerView;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)setAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(void)cancelInteractiveTransition;
-(id)viewControllerForKey:(id)arg1 ;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(void)setView:(id)arg1 forKey:(id)arg2 ;
-(void)_completeTransitionIfPossible;
-(void)setFinalFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(BOOL)_animatorIsInteractive;
-(BOOL)wantsAnimation;
-(id)transitionAnimationFactory;
-(void)dealloc;
-(BOOL)requiresRestartableAnimations;
-(BOOL)requiresInteractiveAnimations;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_animatorSupportsRestarting;
-(BOOL)isInteractive;
-(void)setUserInfo:(id)arg1 ;
-(void)_runAlongsideAnimationBlocksWithFactory:(id)arg1 options:(unsigned long long)arg2 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(void)finishInteractiveTransition;
-(void)setInteractor:(id<UIViewControllerInteractiveTransitioning>)arg1 ;
-(BOOL)_animatorIsReversible;
-(/*^block*/id)_acquireTransitionCompletion;
-(double)percentComplete;
-(BOOL)wasPreviousPhaseInteractive;
-(void)_startInteractiveTransition;
-(BOOL)transitionWasRestarted;
-(void)setContainerView:(UIView *)arg1 ;
-(id)_interactiveAnimator;
-(id)init;
-(void)setInitialFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(BOOL)_interactorSupportsRestarting;
-(void)pauseInteractiveTransition;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(BOOL)requiresCancellableAnimations;
-(void)setDelegate:(id<SBViewControllerTransitionContextDelegate>)arg1 ;
-(BOOL)isCancelled;
-(id)userInfo;
-(double)transitionDuration;
-(id<SBViewControllerTransitionContextDelegate>)delegate;
-(void)_updateTransitionAnimationFactoryAndOptions;
-(void)setWantsAnimation:(BOOL)arg1 ;
-(BOOL)_objectSupportsRestarting:(id)arg1 ;
-(BOOL)transitionWasCancelled;
-(void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;
-(void)addTransitionContinuation:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)completeTransition:(BOOL)arg1 ;
-(void)startTransition;
-(BOOL)supportsCancelling;
-(void)_runInteractionEndedHandlers;
-(id)succinctDescription;
-(id)_reversibleAnimator;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setViewController:(id)arg1 forKey:(id)arg2 ;
-(NSString *)description;
-(unsigned long long)transitionAnimationOptions;
@end

