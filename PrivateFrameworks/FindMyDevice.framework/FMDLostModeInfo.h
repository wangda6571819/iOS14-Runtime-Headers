/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {

	BOOL _lostModeEnabled;
	BOOL _disableSlideToUnlock;
	BOOL _facetimeCapable;
	NSString* _message;
	NSString* _phoneNumber;
	unsigned long long _lostModeType;
	NSString* _footnoteText;

}

@property (assign,nonatomic) unsigned long long lostModeType;              //@synthesize lostModeType=_lostModeType - In the implementation block
@property (assign,nonatomic) BOOL lostModeEnabled;                         //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL disableSlideToUnlock;                    //@synthesize disableSlideToUnlock=_disableSlideToUnlock - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL facetimeCapable;                         //@synthesize facetimeCapable=_facetimeCapable - In the implementation block
@property (nonatomic,retain) NSString * footnoteText;                      //@synthesize footnoteText=_footnoteText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setLostModeEnabled:(BOOL)arg1 ;
-(void)setFacetimeCapable:(BOOL)arg1 ;
-(void)setFootnoteText:(NSString *)arg1 ;
-(void)setDisableSlideToUnlock:(BOOL)arg1 ;
-(void)setLostModeType:(unsigned long long)arg1 ;
-(BOOL)lostModeEnabled;
-(BOOL)disableSlideToUnlock;
-(BOOL)facetimeCapable;
-(NSString *)footnoteText;
-(void)dealloc;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)lostModeType;
-(NSString *)message;
-(id)description;
@end

