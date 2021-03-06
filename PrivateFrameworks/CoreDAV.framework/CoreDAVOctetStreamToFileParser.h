/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {

	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(id)initWithFileHandle:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
@end

