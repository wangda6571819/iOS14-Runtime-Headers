/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@interface EFLocked : NSObject {

	os_unfair_lock_s _lock;
	id _object;

}

@property (nonatomic,readonly) os_unfair_lock_s* unfairLockForTesting; 
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)debugDescription;
-(os_unfair_lock_s*)unfairLockForTesting;
-(void)performWhileLocked:(/*^block*/id)arg1 ;
-(id)description;
@end
