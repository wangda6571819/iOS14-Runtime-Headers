/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgedSize;
	NSArray* _purgedApps;

}

@property (nonatomic,readonly) long long purgedSize;              //@synthesize purgedSize=_purgedSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgedApps;              //@synthesize purgedApps=_purgedApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2 ;
-(NSArray *)purgedApps;
-(long long)purgedSize;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

