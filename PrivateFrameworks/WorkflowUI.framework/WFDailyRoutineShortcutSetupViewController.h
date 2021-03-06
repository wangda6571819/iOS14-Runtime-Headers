/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupQuestionViewControllerDelegate.h>
#import <libobjc.A.dylib/WFDailyRoutineShortcutSetupTriggerViewControllerDelegate.h>
#import <libobjc.A.dylib/WFLocationPickerViewControllerDelegate.h>

@protocol WFDailyRoutineShortcutSetupViewControllerDelegate;
@class WFDailyRoutineShortcutSetupFlow, UINavigationController, NSMutableDictionary, CLCircularRegion, NSMutableArray, NSString;

@interface WFDailyRoutineShortcutSetupViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate> {

	id<WFDailyRoutineShortcutSetupViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupFlow* _flow;
	UINavigationController* _setupNavigationController;
	NSMutableDictionary* _actionsPerQuestionIndex;
	CLCircularRegion* _selectedRegion;
	NSMutableArray* _setupStepEvents;
	unsigned long long _metricsSource;

}

@property (nonatomic,retain) UINavigationController * setupNavigationController;                                 //@synthesize setupNavigationController=_setupNavigationController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionsPerQuestionIndex;                                      //@synthesize actionsPerQuestionIndex=_actionsPerQuestionIndex - In the implementation block
@property (nonatomic,retain) CLCircularRegion * selectedRegion;                                                  //@synthesize selectedRegion=_selectedRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * setupStepEvents;                                                   //@synthesize setupStepEvents=_setupStepEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long metricsSource;                                                 //@synthesize metricsSource=_metricsSource - In the implementation block
@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupFlow * flow;                                           //@synthesize flow=_flow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFDailyRoutineShortcutSetupFlow *)flow;
-(void)viewDidLoad;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupViewControllerDelegate>)arg1 ;
-(id<WFDailyRoutineShortcutSetupViewControllerDelegate>)delegate;
-(void)didSelectCancel;
-(void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2 ;
-(void)locationPickerDidCancel:(id)arg1 ;
-(void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)arg1 ;
-(void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)arg1 ;
-(void)dailyRoutineShortcutSetupQuestionViewController:(id)arg1 didAddActions:(id)arg2 ;
-(void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)arg1 ;
-(id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)arg1 ;
-(id)initWithFlow:(id)arg1 metricsSource:(unsigned long long)arg2 ;
-(long long)currentQuestionIndex;
-(void)pushTriggerSetupStep;
-(void)pushStepForQuestion:(id)arg1 ;
-(void)pushToNextStep;
-(void)configureBackButtonOnViewController:(id)arg1 ;
-(void)finishWithTrigger:(id)arg1 ;
-(id)currentStepEvent;
-(void)submitMetrics:(BOOL)arg1 ;
-(UINavigationController *)setupNavigationController;
-(void)setSetupNavigationController:(UINavigationController *)arg1 ;
-(NSMutableDictionary *)actionsPerQuestionIndex;
-(void)setActionsPerQuestionIndex:(NSMutableDictionary *)arg1 ;
-(CLCircularRegion *)selectedRegion;
-(void)setSelectedRegion:(CLCircularRegion *)arg1 ;
-(NSMutableArray *)setupStepEvents;
-(void)setSetupStepEvents:(NSMutableArray *)arg1 ;
-(unsigned long long)metricsSource;
@end

