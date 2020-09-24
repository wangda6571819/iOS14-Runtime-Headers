/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol ICSearchIndexableNote <ICSearchIndexable>
@property (nonatomic,readonly) BOOL isModernNote; 
@property (nonatomic,readonly) NSSet * noteCellKeyPaths; 
@property (nonatomic,readonly) BOOL hasUnreadChanges; 
@property (nonatomic,readonly) BOOL isDeletedOrInTrash; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) long long currentStatus; 
@required
-(id)identifier;
-(BOOL)isPinned;
-(id)folderName;
-(BOOL)isModernNote;
-(id)noteAsPlainTextWithoutTitle;
-(BOOL)isPasswordProtected;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedViaICloudFolder;
-(BOOL)isSharedReadOnly;
-(id)trimmedTitle;
-(id)folderNameForNoteList;
-(NSSet *)noteCellKeyPaths;
-(id)contentInfoText;
-(BOOL)hasUnreadChanges;
-(BOOL)isDeletedOrInTrash;
-(long long)currentStatus;
-(id)title;
-(id)accountName;

@end
