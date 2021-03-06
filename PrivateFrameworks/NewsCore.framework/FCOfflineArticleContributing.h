/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCObservable;


@protocol FCOfflineArticleContributing
@property (nonatomic,readonly) FCObservable * articleIDsToDownload; 
@property (nonatomic,readonly) long long articleDownloadOptions; 
@required
-(long long)articleDownloadOptions;
-(void)prepareToContributeWithCompletionHandler:(/*^block*/id)arg1;
-(FCObservable *)articleIDsToDownload;

@end

