/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CXVoicemailObserverDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * voicemailUUIDToVoicemailMap; 
@required
-(void)removeDelegate:(id)arg1;
-(void)addDelegate:(id)arg1;
-(void)invalidate;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2;
-(NSDictionary *)voicemailUUIDToVoicemailMap;

@end
