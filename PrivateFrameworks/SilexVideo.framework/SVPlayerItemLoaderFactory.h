/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerItemLoaderFactory.h>

@protocol SVPlayerItemLoaderFactory <NSObject>
@required
-(id)createPlayerItemLoaderForVideo:(id)arg1;

@end


@protocol SVPlayerItemFactory, SVURLAssetLoaderFactory, SVVideoMetadataProviding;
@class NSString;

@interface SVPlayerItemLoaderFactory : NSObject <SVPlayerItemLoaderFactory> {

	id<SVPlayerItemFactory> _playerItemFactory;
	id<SVURLAssetLoaderFactory> _URLAssetLoaderFactory;
	id<SVVideoMetadataProviding> _metadataProvider;

}

@property (nonatomic,readonly) id<SVPlayerItemFactory> playerItemFactory;                      //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (nonatomic,readonly) id<SVURLAssetLoaderFactory> URLAssetLoaderFactory;              //@synthesize URLAssetLoaderFactory=_URLAssetLoaderFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoMetadataProviding> metadataProvider;                  //@synthesize metadataProvider=_metadataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoMetadataProviding>)metadataProvider;
-(id<SVPlayerItemFactory>)playerItemFactory;
-(id<SVURLAssetLoaderFactory>)URLAssetLoaderFactory;
-(id)createPlayerItemLoaderForVideo:(id)arg1 ;
-(id)initWithPlayerItemFactory:(id)arg1 URLAssetLoaderFactory:(id)arg2 metadataProvider:(id)arg3 ;
@end
