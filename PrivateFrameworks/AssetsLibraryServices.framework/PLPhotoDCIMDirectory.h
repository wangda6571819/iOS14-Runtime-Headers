/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)lockDirectory;
-(id)_userInfoPath;
-(void)unlockDirectory;
-(id)nextAvailableDirectory;
-(id)initWithDCIMPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadUserInfo;
-(void)saveUserInfo;
-(id)posterImagePath;
-(void)recreateInfoPlist;
-(id)userInfoObjectForKey:(id)arg1 ;
-(id)dcfDirectories;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
-(id)dcimPath;
-(id)miscPath;
-(id)userInfo;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
@end

