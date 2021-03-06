/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject {

	long long _statusCode;
	NSError* _error;
	NSString* _folderID;
	NSString* _folderName;

}

@property (readonly) long long statusCode;               //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (readonly) NSString * folderID;                //@synthesize folderID=_folderID - In the implementation block
@property (readonly) NSString * folderName;              //@synthesize folderName=_folderName - In the implementation block
-(long long)statusCode;
-(BOOL)wasSuccessful;
-(NSString *)folderName;
-(NSError *)error;
-(id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4 ;
-(NSString *)folderID;
-(id)description;
@end

