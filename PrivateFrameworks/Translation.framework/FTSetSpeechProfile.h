/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTUserLanguageProfile, FTUserAcousticProfile;

@interface FTSetSpeechProfile : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SetSpeechProfile* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) FTUserLanguageProfile * user_language_profile; 
@property (nonatomic,readonly) FTUserAcousticProfile * user_acoustic_profile; 
@property (nonatomic,readonly) NSString * language; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)initWithFlatbuffData:(id)arg1 root:(const SetSpeechProfile*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SetSpeechProfile>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SetSpeechProfile*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(FTUserLanguageProfile *)user_language_profile;
-(FTUserAcousticProfile *)user_acoustic_profile;
@end

