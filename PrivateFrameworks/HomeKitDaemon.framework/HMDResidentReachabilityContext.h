/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding> {

	NSNumber* _mostRecentReachability;

}

@property (copy,readonly) NSNumber * mostRecentReachability;              //@synthesize mostRecentReachability=_mostRecentReachability - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithMostRecentReachability:(id)arg1 ;
-(NSNumber *)mostRecentReachability;
@end
