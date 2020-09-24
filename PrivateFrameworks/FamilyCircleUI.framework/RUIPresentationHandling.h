/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUIPresentationHandling <NSObject>
@optional
-(void)ruiPresentAlertController:(id)arg1;
-(void)ruiDidDismissAlertController:(id)arg1;

@required
-(void)presentModalRUIController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replaceModalRUIController:(id)arg1 byController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dismissModalRUIController:(id)arg1 completion:(/*^block*/id)arg2;

@end
