/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject {

	BOOL _preventStoreItemMetadataCaching;
	MPPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;              //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (assign,nonatomic) BOOL preventStoreItemMetadataCaching;                //@synthesize preventStoreItemMetadataCaching=_preventStoreItemMetadataCaching - In the implementation block
+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(MPPropertySet *)requestedPropertySet;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 ;
-(BOOL)preventStoreItemMetadataCaching;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2 ;
-(void)setPreventStoreItemMetadataCaching:(BOOL)arg1 ;
@end

