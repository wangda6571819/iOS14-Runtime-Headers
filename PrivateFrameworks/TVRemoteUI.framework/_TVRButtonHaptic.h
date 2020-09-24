/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFeedbackGeneratorUserInteractionDriven;
@interface _TVRButtonHaptic : NSObject {

	id<UIFeedbackGeneratorUserInteractionDriven> _behavior;

}

@property (nonatomic,retain) id<UIFeedbackGeneratorUserInteractionDriven> behavior;              //@synthesize behavior=_behavior - In the implementation block
+(id)hapticForView:(id)arg1 ;
-(void)userInteractionCancelled;
-(id<UIFeedbackGeneratorUserInteractionDriven>)behavior;
-(void)setBehavior:(id<UIFeedbackGeneratorUserInteractionDriven>)arg1 ;
-(void)userInteractionEnded;
-(void)userInteractionBegan;
@end
