/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUMomentsControllerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<TUMomentsControllerDataSourceDelegate> delegate; 
@required
-(void)invalidate;
-(void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)unregisterStreamToken:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)setDelegate:(id)arg1;
-(id<TUMomentsControllerDataSourceDelegate>)delegate;

@end
