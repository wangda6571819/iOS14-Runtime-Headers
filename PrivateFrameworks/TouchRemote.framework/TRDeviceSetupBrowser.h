/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTransferBrowserDelegate.h>

@protocol TRDeviceSetupBrowserDelegate;
@class TRTransferBrowser, TRDeviceSetupPeripheral, NSString;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {

	id<TRDeviceSetupBrowserDelegate> _delegate;
	TRTransferBrowser* _transferBrowser;
	TRDeviceSetupPeripheral* _peripheral;

}

@property (nonatomic,retain) TRTransferBrowser * transferBrowser;                           //@synthesize transferBrowser=_transferBrowser - In the implementation block
@property (nonatomic,retain) TRDeviceSetupPeripheral * peripheral;                          //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)browser:(id)arg1 didStartTransferWithSendDataHandler:(/*^block*/id)arg2 ;
-(TRTransferBrowser *)transferBrowser;
-(void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)defer;
-(void)browserDidDisconnect:(id)arg1 ;
-(void)start;
-(void)setPeripheral:(TRDeviceSetupPeripheral *)arg1 ;
-(TRDeviceSetupPeripheral *)peripheral;
-(id)init;
-(void)setDelegate:(id<TRDeviceSetupBrowserDelegate>)arg1 ;
-(id<TRDeviceSetupBrowserDelegate>)delegate;
-(void)browserDidChangeState:(id)arg1 ;
-(void)setTransferBrowser:(TRTransferBrowser *)arg1 ;
-(long long)state;
-(void)stop;
@end
