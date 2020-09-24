/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>
#import <libobjc.A.dylib/MRAVDistantRoutingDiscoveryClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString, NSXPCConnection, NSMutableDictionary;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	BOOL _enableThrottling;
	NSArray* _distantEndpoints;
	NSArray* _distantOutputDevices;
	NSString* _routingContextUID;
	int _serviceResetNotifyToken;
	BOOL _hostedRoutingConnectionDidInitialize;
	NSXPCConnection* _hostedRoutingSessionConnection;
	NSMutableDictionary* _distantExternalDevices;

}

@property (nonatomic,retain) NSXPCConnection * hostedRoutingSessionConnection;              //@synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection - In the implementation block
@property (nonatomic,retain) NSArray * distantEndpoints; 
@property (nonatomic,retain) NSArray * distantOutputDevices; 
@property (nonatomic,retain) NSMutableDictionary * distantExternalDevices;                  //@synthesize distantExternalDevices=_distantExternalDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)serviceInterface;
-(BOOL)_shouldAddLocalEndpoint;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(id)routingContextUID;
-(void)_reloadAvailableDistantOutputDevices;
-(NSArray *)distantEndpoints;
-(unsigned)discoveryMode;
-(void)setRoutingContextUID:(id)arg1 ;
-(id)_hostedRoutingConnection;
-(unsigned)endpointFeatures;
-(void)dealloc;
-(void)setHostedRoutingSessionConnection:(NSXPCConnection *)arg1 ;
-(void)_reloadAvailableDistantEndpoints;
-(void)_reloadHostedRoutingServiceDiscoveryMode;
-(id)availableEndpoints;
-(void)_initializeHostedRoutingConnectionWithCompletion:(/*^block*/id)arg1 ;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1 ;
-(NSArray *)distantOutputDevices;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setEndpointFeatures:(unsigned)arg1 ;
-(void)availableEndpointsDidChange:(id)arg1 ;
-(void)availableOutputDevicesDidChange:(id)arg1 ;
-(BOOL)devicePresenceDetected;
-(NSMutableDictionary *)distantExternalDevices;
-(void)setDistantEndpoints:(NSArray *)arg1 ;
-(id)availableOutputDevices;
-(void)_reloadHostedRoutingServiceEndpointFeatures;
-(void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1 ;
-(void)setDistantExternalDevices:(NSMutableDictionary *)arg1 ;
-(NSString *)description;
-(NSXPCConnection *)hostedRoutingSessionConnection;
@end
