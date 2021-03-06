/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PGManager;


@protocol PGHighlightItemEnrichmentRule <NSObject>
@property (nonatomic,readonly) PGManager * manager; 
@optional
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(/*^block*/id)arg2 maximumNumberOfVisibleItems:(unsigned long long)arg3 maximumNumberOfVisibleRegularItems:(unsigned long long)arg4;

@required
-(PGManager *)manager;
-(double)promotionScoreForHighlightItemList:(id)arg1;
-(id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
-(id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
-(void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(/*^block*/id)arg2;

@end

