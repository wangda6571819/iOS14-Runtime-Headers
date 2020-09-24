/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, CNGeminiBadge;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	CNGeminiBadge* _badge;

}

@property (retain) CNGeminiBadge * badge;                   //@synthesize badge=_badge - In the implementation block
@property (retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setBadge:(CNGeminiBadge *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CNGeminiBadge *)badge;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3 ;
@end
