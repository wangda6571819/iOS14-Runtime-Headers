/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMNetworkConfigurationWiFiOptions : HMFObject {

	BOOL _rotate;
	long long _credentialType;

}

@property (nonatomic,readonly) long long credentialType;              //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic) BOOL rotate;                             //@synthesize rotate=_rotate - In the implementation block
-(BOOL)rotate;
-(id)initWithCredentialType:(long long)arg1 ;
-(void)setRotate:(BOOL)arg1 ;
-(long long)credentialType;
-(id)description;
@end

