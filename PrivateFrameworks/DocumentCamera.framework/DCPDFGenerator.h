/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSURL, NSString, NSMutableData;

@interface DCPDFGenerator : NSObject {

	CGContextRef _pdfContext;
	NSURL* _fileURL;
	NSString* _title;
	NSMutableData* _data;
	CGRect _pageRect;

}

@property (nonatomic,copy) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) CGRect pageRect;                   //@synthesize pageRect=_pageRect - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(NSURL *)fileURL;
-(NSMutableData *)data;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(void)setData:(NSMutableData *)arg1 ;
-(id)init;
-(void)setPageRect:(CGRect)arg1 ;
-(void)finishGenerating;
-(void)addPageWithPageRect:(CGRect)arg1 renderBlock:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(id)initWithMutableData:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(BOOL)startGenerating;
-(void)addPageWithRenderBlock:(/*^block*/id)arg1 ;
-(CGRect)pageRect;
-(NSURL *)url;
-(void)setTitle:(NSString *)arg1 ;
@end
