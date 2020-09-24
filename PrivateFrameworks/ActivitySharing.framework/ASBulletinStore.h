/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ASBulletinStore : NSObject {

	NSArray* _bulletins;

}

@property (nonatomic,readonly) NSArray * bulletins;              //@synthesize bulletins=_bulletins - In the implementation block
-(id)init;
-(void)removeAllBulletins;
-(void)_persistBulletins;
-(void)addBulletins:(id)arg1 ;
-(void)removeBulletinsMatchingCriteria:(/*^block*/id)arg1 ;
-(NSArray *)bulletins;
@end
