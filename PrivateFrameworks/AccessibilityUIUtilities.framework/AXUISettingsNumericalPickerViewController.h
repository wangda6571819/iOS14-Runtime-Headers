/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>
#import <libobjc.A.dylib/AXUISettingsEditableTableCellWithStepperDelegate.h>

@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController <AXUISettingsEditableTableCellWithStepperDelegate> {

	double _cachedNumericalValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)minimumValue;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)maximumValue;
-(id)localizedTitle;
-(void)viewDidLoad;
-(BOOL)userCanDisableNumericalPreference;
-(BOOL)shouldDisablePreferenceEntirely;
-(id)localizedFooterText;
-(void)setDelayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)delayEnabled:(id)arg1 ;
-(BOOL)numericalPreferenceEnabled;
-(id)localizedPickerFooterText;
-(BOOL)shouldSaveOnExit;
-(id)_delayPickerSpecifier;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg1 ;
-(id)_delayPickerFooterSpecifier;
-(void)setNumericalPreferenceValueFromUser:(double)arg1 ;
-(double)stepAmount;
-(double)numericalPreferenceValue;
-(id)stringValueForSpecifier:(id)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)localizedTextForValue:(double)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(id)specifiers;
@end
