/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSettings.h>

@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings {

	NSMutableDictionary* _keyMap;

}
-(BOOL)isKeyedSettings;
-(void)_removeAllSettings;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4 ;
-(long long)flagForKey:(id)arg1 ;
-(id)_keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_init;
-(id)objectForKey:(id)arg1 ;
-(void)enumerateKeyedFlagsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateKeyedObjectsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
@end

