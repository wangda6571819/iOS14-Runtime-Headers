/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSArray, NSSet;


@protocol PSBrokerCapabilities <NSObject>
@property (readonly) NSUUID * identifier; 
@property (copy,readonly) NSArray * exportedTopics; 
@property (copy,readonly) NSSet * supportedTransportIdentifiers; 
@required
-(NSUUID *)identifier;
-(NSSet *)supportedTransportIdentifiers;
-(NSArray *)exportedTopics;

@end
