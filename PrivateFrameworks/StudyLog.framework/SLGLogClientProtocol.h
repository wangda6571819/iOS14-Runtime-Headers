/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLGLogClientProtocol <NSObject>
@property (assign,nonatomic,__weak) id<SLGLogClientProtocolDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SLGLogClientProtocolDelegate>)delegate;
-(void)queryServer:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2;

@end

