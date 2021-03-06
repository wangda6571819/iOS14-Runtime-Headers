/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary, TPSURLSessionItem;

@interface HLPRemoteDataController : NSObject {

	BOOL _loading;
	BOOL _hasLoaded;
	NSURL* _URL;
	NSDictionary* _headerFields;
	TPSURLSessionItem* _URLSessionItem;

}

@property (nonatomic,retain) TPSURLSessionItem * URLSessionItem;              //@synthesize URLSessionItem=_URLSessionItem - In the implementation block
@property (assign,nonatomic) BOOL loading;                                    //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                                  //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSDictionary * headerFields;                     //@synthesize headerFields=_headerFields - In the implementation block
-(void)cancel;
-(id)initWithURL:(id)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(NSDictionary *)headerFields;
-(void)setURL:(NSURL *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(void)clearData;
-(BOOL)hasLoaded;
-(void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(TPSURLSessionItem *)URLSessionItem;
-(void)setURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
@end

