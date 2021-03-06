/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKSnapshotCacheKey : NSObject <NSCopying> {

	NSString* _identifier;
	long long _interfaceStyle;
	CGRect _bounds;

}

@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;              //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) CGRect bounds;                         //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
+(id)keyWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3 ;
-(void)setInterfaceStyle:(long long)arg1 ;
-(long long)interfaceStyle;
-(NSString *)identifier;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)keyWithOppositeInterfaceStyle;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)stringValue;
-(id)initWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

