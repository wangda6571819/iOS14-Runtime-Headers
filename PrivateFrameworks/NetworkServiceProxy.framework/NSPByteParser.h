/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NSPByteParser : NSObject <NSCopying> {

	NSData* _data;
	const char* _bytes;
	const char* _cursor;
	unsigned long long _offset;

}

@property (readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (readonly) const char* bytes;                    //@synthesize bytes=_bytes - In the implementation block
@property (assign) const char* cursor;                     //@synthesize cursor=_cursor - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)parse8Bits:(BOOL*)arg1 ;
-(BOOL)advanceBy:(unsigned long long)arg1 andCopyTo:(void*)arg2 ;
-(NSData *)data;
-(const char*)bytes;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(const char*)cursor;
-(void)setCursor:(const char*)arg1 ;
-(unsigned short)parse16Bits:(BOOL*)arg1 ;
-(const char*)parseBytes:(unsigned long long)arg1 ;
-(id)parseDomainName;
-(unsigned)parse32Bits:(BOOL*)arg1 ;
-(id)parseAddressWithFamily:(unsigned char)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

