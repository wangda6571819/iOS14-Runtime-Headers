/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel;

@interface WDMedicalRecordTimelinePanelTitleCell : WDMedicalRecordGroupableCell {

	NSString* _title;
	NSString* _subtitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
-(id)subtitleFont;
-(NSString *)subtitle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(NSString *)title;
-(id)titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(void)setTitle:(NSString *)arg1 ;
@end

