/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/BRQueryItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {

	NSString* _containerID;
	NSSet* _containerClientIDs;
	NSString* _localizedName;

}
+(BOOL)supportsSecureCoding;
-(id)itemIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(unsigned long long)capabilities;
-(id)containerDisplayName;
-(id)parentItemIdentifier;
-(id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3 ;
-(BOOL)fp_isContainer;
-(id)fp_cloudContainerIdentifier;
-(id)fp_cloudContainerClientBundleIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(id)typeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)filename;
@end
