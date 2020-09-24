/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <SearchUI/SearchUIWatchListCardRowModelDelegate.h>

@class SearchUIButton, TLKSimpleRowView, NUIContainerStackView, SearchUIWatchListCardRowModel;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate> {

	SearchUIButton* _button;
	TLKSimpleRowView* _rowView;

}

@property (nonatomic,retain) NUIContainerStackView * contentView; 
@property (nonatomic,retain) SearchUIButton * button;                               //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) TLKSimpleRowView * rowView;                            //@synthesize rowView=_rowView - In the implementation block
@property (nonatomic,retain) SearchUIWatchListCardRowModel * rowModel; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)setButton:(SearchUIButton *)arg1 ;
-(SearchUIButton *)button;
-(TLKSimpleRowView *)rowView;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(void)setRowView:(TLKSimpleRowView *)arg1 ;
-(void)didUpdateRowModel:(id)arg1 animate:(BOOL)arg2 ;
-(void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3 ;
@end
