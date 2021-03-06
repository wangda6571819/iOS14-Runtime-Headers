/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString, NSDate;


@protocol IDSSocketPairMessage
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
@optional
-(NSData *)data;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1;
-(void)setStreamID:(unsigned short)arg1;
-(BOOL)didWakeHint;
-(NSString *)peerResponseIdentifier;
-(void)setExpiryDate:(id)arg1;
-(NSDate *)expiryDate;
-(BOOL)expectsPeerResponse;
-(NSString *)messageUUID;
-(unsigned short)streamID;
-(BOOL)wantsAppAck;

@end

