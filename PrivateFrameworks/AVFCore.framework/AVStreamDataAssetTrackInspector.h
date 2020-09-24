/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {

	AVWeakReference* _weakReferenceToAsset;
	int _trackID;

}
-(SCD_Struct_AV7)timeRange;
-(id)mediaType;
-(int)trackID;
-(CGSize)naturalSize;
-(BOOL)isEnabled;
-(void)dealloc;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(unsigned)figMediaType;
-(id)mediaCharacteristics;
-(CGSize)dimensions;
@end
