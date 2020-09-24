/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PathObject : NSObject {

	int _len;
	char* _path;

}

@property (readonly) char* path;              //@synthesize path=_path - In the implementation block
@property (readonly) int len;                 //@synthesize len=_len - In the implementation block
+(id)pathObjectWithPath:(const char*)arg1 component:(const char*)arg2 ;
-(int)len;
-(char*)path;
-(void)dealloc;
-(id)description;
-(id)initWithPath:(const char*)arg1 component:(const char*)arg2 ;
@end
