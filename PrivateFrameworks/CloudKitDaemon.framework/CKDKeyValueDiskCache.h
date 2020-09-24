/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject {

	double _expirationTimeout;
	PQLConnection* _db;
	NSString* _identifier;
	CKDClientContext* _context;

}

@property (nonatomic,retain) PQLConnection * db;                             //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double expirationTimeout;                       //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
-(PQLConnection *)db;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)identifier;
-(id)dbPath;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setDb:(PQLConnection *)arg1 ;
-(CKDClientContext *)context;
-(id)cachedValueForKey:(id)arg1 ;
-(void)setExpirationTimeout:(double)arg1 ;
-(double)expirationTimeout;
-(BOOL)setupCacheWithError:(id*)arg1 ;
-(void)_garbageCollectExpiredEntries;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
@end
