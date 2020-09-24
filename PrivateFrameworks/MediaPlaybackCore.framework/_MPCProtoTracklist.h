/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying> {

	NSMutableArray* _accountInfos;
	NSMutableArray* _containers;
	int _shuffleMode;
	_MPCProtoTracklistIndexPath* _startingItemIndexPath;
	SCD_Struct_MP20 _has;

}

@property (nonatomic,retain) NSMutableArray * accountInfos;                                    //@synthesize accountInfos=_accountInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * containers;                                      //@synthesize containers=_containers - In the implementation block
@property (nonatomic,readonly) BOOL hasStartingItemIndexPath; 
@property (nonatomic,retain) _MPCProtoTracklistIndexPath * startingItemIndexPath;              //@synthesize startingItemIndexPath=_startingItemIndexPath - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                                  //@synthesize shuffleMode=_shuffleMode - In the implementation block
+(Class)containerType;
+(Class)accountInfoType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearContainers;
-(void)writeTo:(id)arg1 ;
-(void)setContainers:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)containers;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addContainer:(id)arg1 ;
-(void)setShuffleMode:(int)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(unsigned long long)hash;
-(int)shuffleMode;
-(unsigned long long)containersCount;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setStartingItemIndexPath:(_MPCProtoTracklistIndexPath *)arg1 ;
-(void)addAccountInfo:(id)arg1 ;
-(void)clearAccountInfos;
-(unsigned long long)accountInfosCount;
-(id)accountInfoAtIndex:(unsigned long long)arg1 ;
-(id)containerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStartingItemIndexPath;
-(NSMutableArray *)accountInfos;
-(void)setAccountInfos:(NSMutableArray *)arg1 ;
-(_MPCProtoTracklistIndexPath *)startingItemIndexPath;
@end
