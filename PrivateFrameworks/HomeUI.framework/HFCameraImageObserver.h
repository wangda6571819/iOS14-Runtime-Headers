/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCameraImageObserver
@optional
-(void)manager:(id)arg1 didFindFaceCrop:(id)arg2 forClip:(id)arg3 usingPersonName:(id)arg4;
-(void)manager:(id)arg1 failedToFindFaceCropForPersonName:(id)arg2;
-(void)manager:(id)arg1 failedToFindImageAtTimeOffset:(double)arg2 forClip:(id)arg3;
-(void)manager:(id)arg1 didFindHeroFrame:(id)arg2 forClip:(id)arg3;
-(void)manager:(id)arg1 failedToFindHeroFrameforClip:(id)arg2;
-(void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
-(void)manager:(id)arg1 didFinishGeneratingImagesForObserver:(id)arg2;

@end
