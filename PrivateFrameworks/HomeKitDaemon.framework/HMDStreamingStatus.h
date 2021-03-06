/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDStreamingStatus : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	unsigned long long _streamingStatus;

}

@property (nonatomic,readonly) unsigned long long streamingStatus;              //@synthesize streamingStatus=_streamingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)streamingStatus;
-(BOOL)_parseFromTLVData;
@end

