/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString, AWDHomeKitValue;

@interface HMDWHASettingEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSString* _keyPath;
	AWDHomeKitValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * keyPath;                      //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy) AWDHomeKitValue * value;                 //@synthesize value=_value - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWithKeyPath:(id)arg1 value:(id)arg2 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(AWDHomeKitValue *)value;
-(NSString *)keyPath;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end
