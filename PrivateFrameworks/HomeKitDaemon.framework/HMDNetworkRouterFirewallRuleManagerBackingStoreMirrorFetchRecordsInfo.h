/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

@class CKRecordZoneID, CKRecordID, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper {

	CKRecordZoneID* _zoneID;
	CKRecordID* _recordID;
	NSArray* _desiredKeys;
	NSMutableSet* _records;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID;                //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSArray * desiredKeys;                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,readonly) NSMutableSet * records;               //@synthesize records=_records - In the implementation block
-(CKRecordID *)recordID;
-(CKRecordZoneID *)zoneID;
-(NSArray *)desiredKeys;
-(NSMutableSet *)records;
-(id)initWithActivity:(id)arg1 options:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 zoneID:(id)arg6 recordID:(id)arg7 desiredKeys:(id)arg8 ;
@end
