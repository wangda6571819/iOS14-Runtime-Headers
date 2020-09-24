/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GPBFileDescriptor : NSObject {

	NSString* package_;
	NSString* objcPrefix_;
	unsigned char syntax_;

}

@property (nonatomic,copy,readonly) NSString * package; 
@property (nonatomic,copy,readonly) NSString * objcPrefix; 
@property (nonatomic,readonly) unsigned char syntax; 
-(void)dealloc;
-(id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3 ;
-(NSString *)package;
-(NSString *)objcPrefix;
-(id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2 ;
-(unsigned char)syntax;
@end
