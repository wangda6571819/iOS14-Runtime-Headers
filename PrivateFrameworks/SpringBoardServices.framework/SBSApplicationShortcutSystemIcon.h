/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString, UIImage;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {

	long long _type;
	NSString* _systemImageName;

}

@property (nonatomic,readonly) UIImage * sbh_systemImage; 
@property (nonatomic,readonly) UIImage * sbh_image; 
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * systemImageName;              //@synthesize systemImageName=_systemImageName - In the implementation block
+(id)sbh_defaultImage;
-(id)_scui_iconImageWithAssetProvider:(id)arg1 ;
-(id)_scui_iconImageName;
-(UIImage *)sbh_image;
-(UIImage *)sbh_systemImage;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithSystemImageName:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)_initForSubclass;
-(NSString *)systemImageName;
@end

