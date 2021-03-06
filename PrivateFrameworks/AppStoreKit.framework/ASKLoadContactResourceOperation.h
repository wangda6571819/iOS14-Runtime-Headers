/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString, CNAvatarImageRenderer;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation {

	NSString* _contactId;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactId;                      //@synthesize contactId=_contactId - In the implementation block
+(double)mainScreenScale;
-(id)makeFetchError;
-(id)initWithContactId:(id)arg1 ;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
-(NSString *)contactId;
-(void)main;
@end

