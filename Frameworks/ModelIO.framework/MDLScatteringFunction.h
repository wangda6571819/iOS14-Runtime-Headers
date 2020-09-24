/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@class NSString, MDLMaterialProperty;

@interface MDLScatteringFunction : NSObject <MDLNamed> {

	NSString* _name;
	MDLMaterialProperty* _baseColor;
	unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction> >* _bsdf;
	MDLMaterialProperty* _emission;
	MDLMaterialProperty* _specular;
	MDLMaterialProperty* _materialIndexOfRefraction;
	MDLMaterialProperty* _interfaceIndexOfRefraction;
	MDLMaterialProperty* _normal;
	MDLMaterialProperty* _ambientOcclusion;
	MDLMaterialProperty* _ambientOcclusionScale;

}

@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * baseColor;                               //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * emission;                                //@synthesize emission=_emission - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * specular;                                //@synthesize specular=_specular - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * materialIndexOfRefraction;               //@synthesize materialIndexOfRefraction=_materialIndexOfRefraction - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * interfaceIndexOfRefraction;              //@synthesize interfaceIndexOfRefraction=_interfaceIndexOfRefraction - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * normal;                                  //@synthesize normal=_normal - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * ambientOcclusion;                        //@synthesize ambientOcclusion=_ambientOcclusion - In the implementation block
@property (nonatomic,retain,readonly) MDLMaterialProperty * ambientOcclusionScale;                   //@synthesize ambientOcclusionScale=_ambientOcclusionScale - In the implementation block
-(MDLMaterialProperty *)normal;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(MDLMaterialProperty *)specular;
-(MDLMaterialProperty *)emission;
-(MDLMaterialProperty *)baseColor;
-(MDLMaterialProperty *)ambientOcclusion;
-(MDLMaterialProperty *)materialIndexOfRefraction;
-(MDLMaterialProperty *)interfaceIndexOfRefraction;
-(MDLMaterialProperty *)ambientOcclusionScale;
@end
