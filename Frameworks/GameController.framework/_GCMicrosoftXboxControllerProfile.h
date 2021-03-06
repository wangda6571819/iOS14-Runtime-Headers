/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCControllerProfile.h>

@class NSString;

@interface _GCMicrosoftXboxControllerProfile : NSObject <_GCControllerProfile>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2 ;
+(id)deviceManager;
+(void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2 ;
+(id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2 ;
+(void)physicalDevice:(id)arg1 getBatteryWithReply:(/*^block*/id)arg2 ;
+(id)physicalDeviceGetHapticCapabilityGraph:(id)arg1 ;
+(void)logicalDevice:(id)arg1 determinePhysicalInputType:(id)arg2 ;
+(id)physicalDeviceGetHapticCapabilities:(id)arg1 ;
+(id)logicalDeviceControllerProductCategory:(id)arg1 ;
@end

