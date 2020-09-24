/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {

	UISApplicationInitializationContext* _applicationInitializationContext;
	AB _hasRequestedPreload;

}

@property (nonatomic,readonly) UISApplicationInitializationContext * applicationInitializationContext; 
@property (nonatomic,readonly) BOOL isFrontBoard; 
@property (nonatomic,readonly) BOOL usesLocalInitializationContext; 
+(id)sharedLoader;
-(BOOL)isFrontBoard;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(void)dealloc;
-(id)_appInitializationContextFactoryClass;
-(BOOL)usesLocalInitializationContext;
-(id)_init;
-(id)_loadInitializationContext;
-(void)startPreloadInitializationContext;
@end
