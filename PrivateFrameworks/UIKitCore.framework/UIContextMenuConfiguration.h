/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@interface UIContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	/*^block*/id _previewProvider;
	/*^block*/id _actionProvider;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id previewProvider;                    //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id actionProvider;                     //@synthesize actionProvider=_actionProvider - In the implementation block
+(id)configurationWithIdentifier:(id)arg1 previewProvider:(/*^block*/id)arg2 actionProvider:(/*^block*/id)arg3 ;
-(id<NSCopying>)identifier;
-(id)actionProvider;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(void)setActionProvider:(id)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
@end
