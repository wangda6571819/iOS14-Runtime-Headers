/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TKTokenConfiguration, NSString, NSDictionary;

@interface TKTokenKeychainContents : NSObject {

	NSArray* _items;
	TKTokenConfiguration* _configuration;
	NSString* _tokenID;

}

@property (readonly) TKTokenConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSString * tokenID;                                //@synthesize tokenID=_tokenID - In the implementation block
@property (copy,readonly) NSDictionary * keys; 
@property (copy,readonly) NSDictionary * certificates; 
@property (copy,readonly) NSArray * items; 
-(NSArray *)items;
-(NSDictionary *)keys;
-(NSString *)tokenID;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)fillWithItems:(id)arg1 ;
-(id)certificateForKey:(id)arg1 ;
-(TKTokenConfiguration *)configuration;
-(id)initWithTokenID:(id)arg1 ;
-(NSDictionary *)certificates;
@end
