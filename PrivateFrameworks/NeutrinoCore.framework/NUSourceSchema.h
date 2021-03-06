/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSchema.h>

@interface NUSourceSchema : NUSchema
+(id)identifier;
+(id)requiredAttributes;
+(id)supportedAttributes;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)copy:(id)arg1 ;
-(id)identifier;
-(id)init;
-(long long)type;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)schemaDependencies;
-(BOOL)validateSource:(id)arg1 error:(out id*)arg2 ;
-(id)serializeSource:(id)arg1 error:(out id*)arg2 ;
-(id)deserializeSource:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeAssetIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(id)deserializeAssetIdentifierFromDictionary:(id)arg1 error:(out id*)arg2 ;
@end

