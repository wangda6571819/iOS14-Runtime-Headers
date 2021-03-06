/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFServiceState.h>

@interface HFFaucetValveServiceState : HFServiceState {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)optionalCharacteristicTypes;
+(unsigned long long)_typeForSystemActiveState:(BOOL)arg1 heaterCoolerActiveState:(id)arg2 usageState:(long long)arg3 currentHeaterCoolerState:(id)arg4 ;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
-(BOOL)isTransitioning;
-(id)initWithBatchReadResponse:(id)arg1 ;
-(unsigned long long)type;
-(long long)priority;
-(long long)primaryState;
-(id)stateTypeIdentifier;
@end

