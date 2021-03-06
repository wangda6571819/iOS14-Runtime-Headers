/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject {

	NSMutableDictionary* _colorPresets;

}

@property (nonatomic,readonly) NSMutableDictionary * colorPresets;              //@synthesize colorPresets=_colorPresets - In the implementation block
-(NSMutableDictionary *)colorPresets;
-(void)resetValues;
-(id)init;
-(id)colorVariationFromColor:(id)arg1 ;
-(void)saveColorPreset:(id)arg1 forColor:(id)arg2 ;
-(id)colorPresetFromColor:(id)arg1 ;
-(id)keyForColor:(id)arg1 ;
@end

