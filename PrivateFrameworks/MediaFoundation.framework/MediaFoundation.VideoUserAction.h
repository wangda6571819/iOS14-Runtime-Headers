/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFUserAction.h>

@class NSString, NSDictionary;

@interface MediaFoundation.VideoUserAction : _UKNOWN_SUPERCLASS_ <MFUserAction> {

	 identifier;
	 type;
	 timeStamp;
	 options;
	 source;
	 sourceID;

}

@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) long long type; 
@property (retain,nonatomic) id<MFTimeStamp> timeStamp; 
@property (copy,nonatomic) NSDictionary * options; 
@property (assign,nonatomic) long long source; 
@property (copy,nonatomic) NSString * sourceID; 
-(NSString *)identifier;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id<MFTimeStamp>)timeStamp;
-(void)setSource:(long long)arg1 ;
-(long long)type;
-(NSString *)sourceID;
-(void)setType:(long long)arg1 ;
-(void)setTimeStamp:(id<MFTimeStamp>)arg1 ;
-(long long)source;
@end

