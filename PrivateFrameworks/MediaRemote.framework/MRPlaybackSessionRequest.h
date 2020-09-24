/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaRemote/MediaRemote-Structs.h>
@class NSString, _MRPlaybackSessionRequestProtobuf, NSData;

@interface MRPlaybackSessionRequest : NSObject {

	BOOL _hasLocation;
	BOOL _hasLength;
	NSString* _requestIdentifier;
	NSString* _identifier;
	NSString* _type;
	unsigned long long _location;
	unsigned long long _length;

}

@property (nonatomic,readonly) _MRPlaybackSessionRequestProtobuf * protobuf; 
@property (nonatomic,copy) NSString * requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                            //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) unsigned long long length;                                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasLength;                                              //@synthesize hasLength=_hasLength - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) NSRange range; 
-(NSRange)range;
-(_MRPlaybackSessionRequestProtobuf *)protobuf;
-(void)setLength:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(NSString *)requestIdentifier;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSData *)data;
-(unsigned long long)location;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)length;
-(id)initWithIdentifier:(id)arg1 range:(NSRange)arg2 ;
-(void)setLocation:(unsigned long long)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 ;
-(BOOL)hasLength;
-(BOOL)hasLocation;
-(id)description;
@end
