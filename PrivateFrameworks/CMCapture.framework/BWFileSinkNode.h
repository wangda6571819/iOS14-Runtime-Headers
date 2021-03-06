/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWNodeFileWriterStatusDelegate;
@interface BWFileSinkNode : BWSinkNode {

	id<BWNodeFileWriterStatusDelegate> _recordingStatusDelegate;

}

@property (assign,nonatomic) id<BWNodeFileWriterStatusDelegate> recordingStatusDelegate;              //@synthesize recordingStatusDelegate=_recordingStatusDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFileSize; 
@property (nonatomic,readonly) SCD_Struct_BW8 lastFileDuration; 
-(unsigned long long)lastFileSize;
-(void)setRecordingStatusDelegate:(id<BWNodeFileWriterStatusDelegate>)arg1 ;
-(SCD_Struct_BW8)lastFileDuration;
-(id<BWNodeFileWriterStatusDelegate>)recordingStatusDelegate;
@end

