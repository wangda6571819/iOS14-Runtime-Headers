/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PSPortalSource : NSObject <NSCopying, NSSecureCoding> {

	unsigned _sourceContextID;
	unsigned long long _sourceLayerRenderID;

}

@property (nonatomic,readonly) unsigned long long sourceLayerRenderID;              //@synthesize sourceLayerRenderID=_sourceLayerRenderID - In the implementation block
@property (nonatomic,readonly) unsigned sourceContextID;                            //@synthesize sourceContextID=_sourceContextID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)sourceContextID;
-(unsigned long long)sourceLayerRenderID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithSourceContextID:(unsigned)arg1 sourceLayerRenderID:(unsigned long long)arg2 ;
@end

