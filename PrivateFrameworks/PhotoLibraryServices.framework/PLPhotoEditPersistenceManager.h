/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoEditPersistenceManager : NSObject
+(id)compositionControllerWithAdjustmentData:(id)arg1 asset:(id)arg2 outMasterWidth:(long long*)arg3 outMasterHeight:(long long*)arg4 ;
+(BOOL)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4 ;
-(id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id*)arg5 ;
-(void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long*)arg2 outMasterHeight:(long long*)arg3 ;
-(id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
@end

