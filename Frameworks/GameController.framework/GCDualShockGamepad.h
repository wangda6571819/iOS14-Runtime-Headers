/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput, GCControllerDirectionPad;

@interface GCDualShockGamepad : GCExtendedGamepad {

	GCControllerButtonInput* _touchpadButton;
	GCControllerDirectionPad* _touchpadPrimary;
	GCControllerDirectionPad* _touchpadSecondary;

}

@property (nonatomic,readonly) GCControllerButtonInput * touchpadButton;                  //@synthesize touchpadButton=_touchpadButton - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadPrimary;                //@synthesize touchpadPrimary=_touchpadPrimary - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadSecondary;              //@synthesize touchpadSecondary=_touchpadSecondary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)initializeExtraControllerElements;
-(BOOL)isBluetoothAndUSBMirrored;
-(GCControllerButtonInput *)touchpadButton;
-(GCControllerDirectionPad *)touchpadPrimary;
-(GCControllerDirectionPad *)touchpadSecondary;
@end

