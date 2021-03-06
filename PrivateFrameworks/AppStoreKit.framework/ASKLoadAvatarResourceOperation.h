/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString;

@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation {

	NSString* _playerId;

}

@property (nonatomic,copy,readonly) NSString * playerId;              //@synthesize playerId=_playerId - In the implementation block
-(NSString *)playerId;
-(id)makePlayerFetchError;
-(id)initWithPlayerId:(id)arg1 ;
-(void)main;
@end

