/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ProjectDelegate
@required
-(BOOL)isInCloud;
-(void)coordinateMove:(/*^block*/id)arg1;
-(void)coordinateRenameFrom:(id)arg1 to:(id)arg2 renameHandler:(/*^block*/id)arg3;
-(void)coordinateWrite:(/*^block*/id)arg1;
-(void)projectWasSaved:(id)arg1;
-(void)projectWasChanged:(id)arg1;
-(void)projectDidInvalidateSharingInfo:(id)arg1;
-(id)thumbnailImageForProject:(id)arg1;
-(void)coordinateRemove:(/*^block*/id)arg1;

@end
