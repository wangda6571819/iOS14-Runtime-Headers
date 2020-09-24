/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdResourceInternalServiceProtocol.h>

@class NSString;

@interface PLAssetsdResourceInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceInternalServiceProtocol> {

	NSString* _trustedCallerBundleID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibraryServicesManager:(id)arg1 trustedCallerBundleID:(id)arg2 ;
-(void)asynchronousMasterThumbnailForAssetUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)batchSaveAssetJobs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)purgeExpiredOutboundSharingAssetsWithReply:(/*^block*/id)arg1 ;
-(void)prepareRevertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
