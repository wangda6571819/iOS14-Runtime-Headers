/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusGuideRegionDelegate <NSObject>
@property (nonatomic,readonly) id<UIFocusItem> focusItemForSorting; 
@optional
-(id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
-(void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;
-(id<UIFocusItem>)focusItemForSorting;

@end

