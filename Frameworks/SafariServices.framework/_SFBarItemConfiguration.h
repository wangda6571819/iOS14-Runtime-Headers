/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SFBarItemConfiguration : NSObject {

	BOOL _enabled;
	BOOL _hidden;
	/*^block*/id _menuProvider;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) id menuProvider;                              //@synthesize menuProvider=_menuProvider - In the implementation block
-(BOOL)isEnabled;
-(id)init;
-(BOOL)isHidden;
-(id)menuProvider;
-(void)setHidden:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setMenuProvider:(id)arg1 ;
@end
