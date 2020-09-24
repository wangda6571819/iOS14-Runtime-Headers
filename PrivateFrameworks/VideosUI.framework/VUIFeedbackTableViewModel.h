/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUILabel, NSArray;

@interface VUIFeedbackTableViewModel : NSObject {

	VUILabel* _headerTextView;
	NSArray* _descriptionTextView;

}

@property (nonatomic,retain) VUILabel * headerTextView;                  //@synthesize headerTextView=_headerTextView - In the implementation block
@property (nonatomic,retain) NSArray * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)descriptionTextViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(void)setHeaderTextView:(VUILabel *)arg1 ;
-(VUILabel *)headerTextView;
-(void)setDescriptionTextView:(NSArray *)arg1 ;
-(NSArray *)descriptionTextView;
@end
