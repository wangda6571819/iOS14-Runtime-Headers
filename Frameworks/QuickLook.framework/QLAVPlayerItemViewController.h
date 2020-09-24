/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class QLOverlayPlayButton, AVPlayerViewController, AVPlayer, NSString;

@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate> {

	QLOverlayPlayButton* _playButton;
	AVPlayerViewController* _playerViewController;
	BOOL _fullScreen;
	BOOL _mediaWasPausedOnResignActive;
	AVPlayer* _player;
	CGSize _imageSize;
	BOOL _isAudioOnly;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredWhitePointAdaptivityStyle;
-(void)play;
-(void)pause;
-(CGSize)imageSize;
-(BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2 ;
-(void)enterFullScreen:(BOOL)arg1 ;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnterFullScreen;
-(void)hostApplicationDidEnterBackground:(id)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)previewDidDisappear:(BOOL)arg1 ;
@end
