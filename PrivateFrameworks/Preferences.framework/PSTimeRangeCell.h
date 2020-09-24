/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PSTimeRangeCellDelegate;
@class UILabel, NSArray;

@interface PSTimeRangeCell : PSTableCell {

	UILabel* _fromTitle;
	UILabel* _toTitle;
	UILabel* _fromTime;
	UILabel* _toTime;
	NSArray* _constraints;
	id<PSTimeRangeCellDelegate> _delegate;

}
-(void)updateConstraints;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
-(id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
@end
