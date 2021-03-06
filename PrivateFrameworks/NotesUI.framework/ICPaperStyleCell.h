/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _selectionView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;               //@synthesize selectionView=_selectionView - In the implementation block
-(BOOL)isAccessibilityElement;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(id)preferredTintColor;
-(UIView *)selectionView;
-(id)accessibilityHint;
-(UIImageView *)imageView;
-(unsigned long long)accessibilityTraits;
-(void)setupCell;
@end

