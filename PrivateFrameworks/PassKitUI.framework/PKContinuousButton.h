/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage, NSMutableSet, UIColor, CAFilter, CAShapeLayer, _UIBackdropView, UIActivityIndicatorView;

@interface PKContinuousButton : UIButton {

	SCD_Struct_PK34 _configuration;
	UIImage* _image;
	NSMutableSet* _disabledImageStates;
	UIColor* _overrideTitleColor;
	CAFilter* _highlightFilter;
	UIColor* _normalInputColor;
	UIColor* _highlightInputColor;
	UIColor* _selectedInputColor;
	UIColor* _disabledInputColor;
	UIColor* _appliedInputColor;
	CAShapeLayer* _layer;
	_UIBackdropView* _backdropView;
	long long _backdropStyle;
	BOOL _updatingBackdropSettings;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _enabled;
	CGSize _boundsSize;
	UIActivityIndicatorView* _activityIndicatorView;
	UIColor* _activityIndicatorColor;
	BOOL _showSpinner;
	BOOL _blurDisabled;

}

@property (assign,nonatomic) BOOL showSpinner;               //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) BOOL blurDisabled;              //@synthesize blurDisabled=_blurDisabled - In the implementation block
+(Class)layerClass;
+(id)_filterInputColorForEffect:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateWithImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_updateFilter;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithCornerRadius:(double)arg1 effect:(long long)arg2 ;
-(id)initWithConfiguration:(SCD_Struct_PK34)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)showSpinner;
-(void)updateActivityIndicatorColorWithColor:(id)arg1 ;
-(void)_accessibilitySettingsDidChange:(id)arg1 ;
-(void)setImageEnabled:(BOOL)arg1 forState:(unsigned long long)arg2 ;
-(void)updateTitleColorWithColor:(id)arg1 ;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)updateImageView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_updateColor;
-(void)_updateTitleColor;
-(void)_updateBackdropSettings;
-(void)_createHighlightFilterIfNecessary;
-(BOOL)blurDisabled;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
@end

