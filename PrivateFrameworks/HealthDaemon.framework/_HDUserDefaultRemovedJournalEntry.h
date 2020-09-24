/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry {

	NSString* _key;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSString *)key;
-(NSString *)bundleIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
