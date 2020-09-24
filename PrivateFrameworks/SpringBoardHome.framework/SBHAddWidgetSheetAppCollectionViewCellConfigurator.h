/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@class NSMutableDictionary;

@interface SBHAddWidgetSheetAppCollectionViewCellConfigurator : NSObject {

	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(void)configureCell:(id)arg1 withApplicationWidgetCollection:(id)arg2 iconImageInfo:(SBIconImageInfo)arg3 ;
-(id)_applicationCellTitleForApplicationWidgetCollection:(id)arg1 ;
-(id)_applicationCellIconImageForApplicationWidgetCollection:(id)arg1 withIconImageInfo:(SBIconImageInfo)arg2 ;
-(id)_cacheKeyForApplicationWidgetCollection:(id)arg1 iconImageInfo:(SBIconImageInfo)arg2 ;
-(id)_newIconImageForApplicationWidgetCollection:(id)arg1 withIconImageInfo:(SBIconImageInfo)arg2 ;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end
