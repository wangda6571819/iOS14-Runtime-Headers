/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANoteCreate : SADomainCommand

@property (nonatomic,copy) NSString * contents; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setContents:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)contents;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
@end
