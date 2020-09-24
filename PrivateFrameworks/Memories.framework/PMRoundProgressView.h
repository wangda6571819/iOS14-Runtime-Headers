/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@interface PMRoundProgressView : UIView {

	double _progress;

}

@property (assign,nonatomic) double progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) double displayedProgress; 
+(Class)layerClass;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)progress;
-(double)displayedProgress;
@end
