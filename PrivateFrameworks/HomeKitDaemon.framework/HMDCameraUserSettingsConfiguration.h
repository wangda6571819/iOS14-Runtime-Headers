/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMDCameraUserSettingsConfiguration : HMFObject {

	BOOL _sharingFaceClassificationsEnabled;
	BOOL _importingFromPhotoLibraryEnabled;
	BOOL _owner;

}

@property (getter=isSharingFaceClassificationsEnabled,readonly) BOOL sharingFaceClassificationsEnabled;              //@synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled - In the implementation block
@property (getter=isImportingFromPhotoLibraryEnabled,readonly) BOOL importingFromPhotoLibraryEnabled;                //@synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled - In the implementation block
@property (getter=isOwner,readonly) BOOL owner;                                                                      //@synthesize owner=_owner - In the implementation block
-(BOOL)isImportingFromPhotoLibraryEnabled;
-(BOOL)isSharingFaceClassificationsEnabled;
-(BOOL)isOwner;
-(id)initWithUser:(id)arg1 ;
@end

