/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCLSuppressSchoolModeAssertionXPCServer.h>

@protocol SCLSuppressSchoolModeAssertionClientDelegate;
@class NSXPCConnection, NSString;

@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer> {

	BOOL _acquired;
	BOOL _entitled;
	id<SCLSuppressSchoolModeAssertionClientDelegate> _delegate;
	NSXPCConnection* _connection;
	NSString* _explanation;

}

@property (assign,getter=isAcquired,nonatomic) BOOL acquired;                                               //@synthesize acquired=_acquired - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                                                 //@synthesize explanation=_explanation - In the implementation block
@property (assign,getter=isEntitled,nonatomic) BOOL entitled;                                               //@synthesize entitled=_entitled - In the implementation block
@property (assign,nonatomic,__weak) id<SCLSuppressSchoolModeAssertionClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)connection;
-(void)setEntitled:(BOOL)arg1 ;
-(void)connectionDidInvalidate;
-(NSString *)explanation;
-(BOOL)isEntitled;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)isAcquired;
-(void)setDelegate:(id<SCLSuppressSchoolModeAssertionClientDelegate>)arg1 ;
-(id<SCLSuppressSchoolModeAssertionClientDelegate>)delegate;
-(NSString *)description;
-(void)setAcquired:(BOOL)arg1 ;
-(oneway void)acquireWithExplanation:(id)arg1 UUID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

