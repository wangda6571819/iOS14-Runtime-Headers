/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class SBSWallpaperClient, NSObject;

@interface SBSWallpaperService : NSObject {

	SBSWallpaperClient* _client;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _wasInvalidated;

}
-(void)fetchOriginalImageForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentCutoutBoundsForVariant:(long long)arg1 orientation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchOriginalVideoURLForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

