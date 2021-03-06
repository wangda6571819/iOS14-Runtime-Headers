/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaDaemon/iCloudQuotaDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying> {

	BOOL _deviceStorageAlmostFull;
	BOOL _photosCloudEnabled;
	BOOL _photosOptimizeEnabled;
	NSNumber* _photosLibrarySize;

}

@property (assign,getter=isDeviceStorageAlmostFull,nonatomic) BOOL deviceStorageAlmostFull;              //@synthesize deviceStorageAlmostFull=_deviceStorageAlmostFull - In the implementation block
@property (assign,getter=isPhotosCloudEnabled,nonatomic) BOOL photosCloudEnabled;                        //@synthesize photosCloudEnabled=_photosCloudEnabled - In the implementation block
@property (assign,getter=isPhotosOptimizeEnabled,nonatomic) BOOL photosOptimizeEnabled;                  //@synthesize photosOptimizeEnabled=_photosOptimizeEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * photosLibrarySize;                                                 //@synthesize photosLibrarySize=_photosLibrarySize - In the implementation block
+(id)photosLibrarySize;
+(BOOL)isSimulatedDeviceStorageAlmostFull;
+(id)currentConditions;
+(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
+(BOOL)isDeviceStorageAlmostFull;
+(BOOL)isPhotosCloudEnabled;
+(BOOL)isPhotosOptimizeEnabled;
+(void)getPhotosLibrarySizeWithCompletion:(/*^block*/id)arg1 ;
+(void)getPhotosLibraryUploadSizeWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)hasPhotosCloudEverBeenEnabled;
+(id)photosLibraryUploadSize;
+(id)photosVideosCount;
+(BOOL)isDeviceStorageNearLowButNotLow;
+(BOOL)isCachedCloudQuotaAlmostFullOrFull;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)photosLibrarySize;
-(BOOL)isDeviceStorageAlmostFull;
-(id)initWithCurrentConditions;
-(void)setDeviceStorageAlmostFull:(BOOL)arg1 ;
-(BOOL)isPhotosCloudEnabled;
-(void)setPhotosCloudEnabled:(BOOL)arg1 ;
-(BOOL)isPhotosOptimizeEnabled;
-(void)setPhotosOptimizeEnabled:(BOOL)arg1 ;
-(void)setPhotosLibrarySize:(NSNumber *)arg1 ;
@end

