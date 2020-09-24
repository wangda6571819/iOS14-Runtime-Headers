/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSPersonNameComponents, PLShare;

@interface PLShareParticipant : PLManagedObject

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (assign,nonatomic) long long role; 
@property (assign,nonatomic) long long acceptanceStatus; 
@property (assign,nonatomic) long long permission; 
@property (assign,nonatomic) BOOL isCurrentUser; 
@property (nonatomic,retain) PLShare * share; 
+(id)entityName;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(id)updateOrInsertWithCPLShareParticipant:(id)arg1 inShare:(id)arg2 ;
+(id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_shareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(long long)acceptanceStatus;
-(long long)role;
-(void)setRole:(long long)arg1 ;
-(long long)permission;
-(id)description;
-(void)setPermission:(long long)arg1 ;
@end
