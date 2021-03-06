/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HDSPEnvironment;


@protocol HDSPEnvironmentAware <NSObject>
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment; 
@optional
-(void)environmentDidBecomeReady:(id)arg1;
-(void)environmentWillBecomeReady:(id)arg1;
-(void)environmentWillInvalidate:(id)arg1;

@required
+(id)new;
-(id)initWithEnvironment:(id)arg1;
-(id)init;
-(HDSPEnvironment *)environment;

@end

