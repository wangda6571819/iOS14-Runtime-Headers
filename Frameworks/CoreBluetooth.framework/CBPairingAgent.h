/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;
@interface CBPairingAgent : NSObject {

	BOOL _useOOBMode;
	id<CBPairingAgentDelegate> _delegate;
	id<CBPairingAgentParentDelegate> _parentManager;

}

@property (assign,nonatomic,__weak) id<CBPairingAgentParentDelegate> parentManager;              //@synthesize parentManager=_parentManager - In the implementation block
@property (assign,nonatomic,__weak) id<CBPairingAgentDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useOOBMode;                                                    //@synthesize useOOBMode=_useOOBMode - In the implementation block
-(void)setParentManager:(id<CBPairingAgentParentDelegate>)arg1 ;
-(void)handleUnpaired:(id)arg1 ;
-(void)setUseOOBMode:(BOOL)arg1 ;
-(void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(BOOL)arg3 data:(id)arg4 ;
-(void)dealloc;
-(void)pairPeer:(id)arg1 ;
-(void)updateRegistration;
-(BOOL)isPeerPaired:(id)arg1 ;
-(id)retrieveOOBDataForPeer:(id)arg1 ;
-(void)setDelegate:(id<CBPairingAgentDelegate>)arg1 ;
-(void)pairPeer:(id)arg1 useMITM:(BOOL)arg2 ;
-(void)setOOBPairingEnabled:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPeerCloudPaired:(id)arg1 ;
-(id<CBPairingAgentDelegate>)delegate;
-(void)unpairPeer:(id)arg1 ;
-(void)handlePairingCompleted:(id)arg1 ;
-(id)initWithParentManager:(id)arg1 ;
-(id<CBPairingAgentParentDelegate>)parentManager;
-(id)retrievePairedPeers;
-(BOOL)useOOBMode;
-(BOOL)isPeerMagicPaired:(id)arg1 ;
-(void)handlePairingRequested:(id)arg1 ;
-(void)pairPeer:(id)arg1 options:(id)arg2 ;
-(void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2 ;
@end

