/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UINotificationResponseAction : BSAction {

	UNNotificationResponse* _response;

}

@property (nonatomic,retain,readonly) UNNotificationResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
@property (nonatomic,readonly) BOOL isDefaultAction; 
-(BOOL)isLocal;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isRemote;
-(id)initWithResponse:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_trigger;
-(long long)UIActionType;
-(BOOL)isDefaultAction;
-(UNNotificationResponse *)response;
@end

