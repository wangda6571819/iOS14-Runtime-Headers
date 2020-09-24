/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CXCallObserver;

@interface PSUICoreTelephonyCallCache : NSObject {

	CXCallObserver* _callObserver;

}

@property (nonatomic,retain) CXCallObserver * callObserver;              //@synthesize callObserver=_callObserver - In the implementation block
+(id)sharedInstance;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(void)dealloc;
-(id)init;
-(CXCallObserver *)callObserver;
-(id)localizedPhoneNumber:(id)arg1 context:(id)arg2 ;
-(BOOL)isAnyCallActive;
-(BOOL)isAnyVOIPCallActive;
-(BOOL)isActiveCallVoLTE;
-(id)initPrivate:(id)arg1 ;
-(BOOL)isAnyCallActiveForProviderIdentifier:(id)arg1 ;
-(BOOL)isAnyTelephonyCallActive;
@end
