/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {

	int mLoadState;
	TSPData* mImageData;
	TSUFlushingManager* mFlushingManager;
	int mInterest;
	os_unfair_lock_s mInterestLock;
	atomic<int> mRetainCount;
	atomic<int> mOwnerCount;

}

@property (nonatomic,readonly) unsigned long long imageGamut; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)imageData;
-(void)flush;
-(CGSize)naturalSize;
-(oneway void)release;
-(void)dealloc;
-(BOOL)isError;
-(id)initWithImageData:(id)arg1 ;
-(unsigned long long)retainCount;
-(int)interest;
-(BOOL)isValid;
-(id)retain;
-(void)setFlushingManager:(id)arg1 ;
-(void)addInterest;
-(void)removeInterest;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)flushIfInterestLessThan:(int)arg1 ;
-(CGSize)dpiAdjustedNaturalSize;
-(unsigned long long)imageGamut;
-(void)i_commonInit;
-(BOOL)hasFlushableContent;
-(void)addOwner;
-(void)removeOwner;
-(void)ownerAccess;
@end
