/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentCredentialMetadata : NSObject {

	NSString* _localizedDisplayName;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                             //@synthesize value=_value - In the implementation block
+(id)paymentCredentialMetadataWithConfiguration:(id)arg1 ;
+(Class)classForValueType:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(id)displayString;
-(NSString *)value;
-(id)initWithConfiguration:(id)arg1 ;
@end

