/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(void)layoutCellsForWidth:(double)arg1 position:(int)arg2 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
@end
