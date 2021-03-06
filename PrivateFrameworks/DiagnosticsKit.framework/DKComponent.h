/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DKComponentIdentity, NSDictionary;

@interface DKComponent : NSObject <NSCopying, NSSecureCoding> {

	DKComponentIdentity* _identity;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) DKComponentIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                   //@synthesize attributes=_attributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentWithIdentity:(id)arg1 attributes:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(id)initWithCoder:(id)arg1 ;
-(DKComponentIdentity *)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)dictionaryForJSON;
-(id)initWithIdentity:(id)arg1 attributes:(id)arg2 ;
@end

