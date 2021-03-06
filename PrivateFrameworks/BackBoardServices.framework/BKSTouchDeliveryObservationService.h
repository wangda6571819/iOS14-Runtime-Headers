/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSTouchDeliveryObserving_IPC.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, BSMutableIntegerMap, NSMapTable, NSHashTable, NSString;

@interface BKSTouchDeliveryObservationService : NSObject <BKSTouchDeliveryObserving_IPC> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _touchClientQueue;
	BSServiceConnection* _connection;
	BSMutableIntegerMap* _touchIdentifierToObserverLists;
	NSMapTable* _observersToTouchIdentifiers;
	NSHashTable* _generalObservers;

}

@property (nonatomic,retain) BSServiceConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BSMutableIntegerMap * touchIdentifierToObserverLists;              //@synthesize touchIdentifierToObserverLists=_touchIdentifierToObserverLists - In the implementation block
@property (nonatomic,retain) NSMapTable * observersToTouchIdentifiers;                          //@synthesize observersToTouchIdentifiers=_observersToTouchIdentifiers - In the implementation block
@property (nonatomic,retain) NSHashTable * generalObservers;                                    //@synthesize generalObservers=_generalObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_queue_observersForTouchIdentifier:(unsigned)arg1 ;
-(BSMutableIntegerMap *)touchIdentifierToObserverLists;
-(oneway void)addObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(BOOL)_queue_removeObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(oneway void)addObserver:(id)arg1 ;
-(BSServiceConnection *)connection;
-(oneway void)removeObserver:(id)arg1 ;
-(void)setTouchIdentifierToObserverLists:(BSMutableIntegerMap *)arg1 ;
-(void)_queue_removeObserversForTouchIdentifier:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)_queue_addObserver:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(id)init;
-(void)observeTouchEventDeliveryDidOccur:(id)arg1 ;
-(void)setObserversToTouchIdentifiers:(NSMapTable *)arg1 ;
-(void)setGeneralObservers:(NSHashTable *)arg1 ;
-(void)_connectToTouchDeliveryService;
-(NSMapTable *)observersToTouchIdentifiers;
-(NSHashTable *)generalObservers;
-(void)setConnection:(BSServiceConnection *)arg1 ;
@end

