/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneSettings.h>

@class BSServiceConnectionEndpoint, NSString;

@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (assign,getter=isConnectedWirelessly,nonatomic) BOOL connectedWirelessly; 
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported; 
@property (assign,nonatomic) unsigned long long suspensionReasons; 
@property (nonatomic,retain) BSServiceConnectionEndpoint * openServiceEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)isConnectedWirelessly;
-(BSServiceConnectionEndpoint *)openServiceEndpoint;
-(void)setConnectedWirelessly:(BOOL)arg1 ;
-(void)setSuspensionReasons:(unsigned long long)arg1 ;
-(void)setOpenServiceEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isGeoSupported;
-(unsigned long long)suspensionReasons;
-(void)setGeoSupported:(BOOL)arg1 ;
@end

