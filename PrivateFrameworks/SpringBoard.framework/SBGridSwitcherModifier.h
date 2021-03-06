/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBGridLayoutSwitcherModifier, _SBGridFloorSwitcherModifier, SBAppLayout;

@interface SBGridSwitcherModifier : SBSwitcherModifier {

	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	_SBGridFloorSwitcherModifier* _floorModifier;
	unsigned long long _ongoingAppLayoutRemovals;
	SBAppLayout* _activeAppLayoutInSwitcher;

}
-(unsigned long long)numberOfRows;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)gridLayoutModifier;
@end

