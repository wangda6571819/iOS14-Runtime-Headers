/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <SwiftUI/SwiftUI.PlatformViewCoordinator.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface _TtC7SwiftUIP33_8825076C2763A50452A210CBE1FA4AF011Coordinator : SwiftUI.PlatformViewCoordinator <UICollectionViewDataSource, UICollectionViewDelegate> {

	 selectedIndex;
	 children;
	 lastSeenIndex;
	 updateCount;

}
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)init;
@end
