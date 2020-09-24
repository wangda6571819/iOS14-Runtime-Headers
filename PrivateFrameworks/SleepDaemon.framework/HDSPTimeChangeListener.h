/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSource.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;

@interface HDSPTimeChangeListener : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource> {

	HDSPEnvironment* environment;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;                       //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
-(id)initWithEnvironment:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)handleTimeZoneChange;
-(NSString *)sourceIdentifier;
-(void)removeObserver:(id)arg1 ;
-(void)handleSignificantTimeChange;
-(HDSPEnvironment *)environment;
@end
