/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MUPayloadEncryption : NSObject {

	BOOL _keyInitialized;
	BOOL _haveKey;
	unsigned char _key[16];

}
+(id)sharedInstance;
-(id)decryptData:(id)arg1 ;
-(id)init;
-(id)encryptData:(id)arg1 ;
-(void)initializeKey;
@end
