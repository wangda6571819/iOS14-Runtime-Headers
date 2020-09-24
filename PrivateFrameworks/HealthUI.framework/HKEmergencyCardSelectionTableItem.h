/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardSelectionTableItemDelegate;
@class UITableViewCell;

@interface HKEmergencyCardSelectionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardSelectionTableItemDelegate> _selectionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardSelectionTableItemDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
-(id)title;
-(id<HKEmergencyCardSelectionTableItemDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<HKEmergencyCardSelectionTableItemDelegate>)arg1 ;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
@end
