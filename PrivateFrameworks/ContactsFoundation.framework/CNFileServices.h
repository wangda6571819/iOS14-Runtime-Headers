/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNFileServices.h>

@protocol CNFileServices <NSObject>
@required
-(void*)dlsym:(void*)arg1 :(const char*)arg2;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3;
-(int)flock:(int)arg1 :(int)arg2;
-(int)statfs:(const char*)arg1 :(statfs*)arg2;
-(void*)dlopen:(const char*)arg1 :(int)arg2;
-(int)dlclose:(void*)arg1;
-(int)fstatfs:(int)arg1 :(statfs*)arg2;
-(int)errnoValue;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3;
-(id)NSTemporaryDirectory;
-(int)close:(int)arg1;

@end


@class NSString;

@interface CNFileServices : NSObject <CNFileServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void*)dlsym:(void*)arg1 :(const char*)arg2 ;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3 ;
-(int)flock:(int)arg1 :(int)arg2 ;
-(int)statfs:(const char*)arg1 :(statfs*)arg2 ;
-(void*)dlopen:(const char*)arg1 :(int)arg2 ;
-(int)dlclose:(void*)arg1 ;
-(int)fstatfs:(int)arg1 :(statfs*)arg2 ;
-(int)errnoValue;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3 ;
-(id)NSTemporaryDirectory;
-(int)close:(int)arg1 ;
@end
