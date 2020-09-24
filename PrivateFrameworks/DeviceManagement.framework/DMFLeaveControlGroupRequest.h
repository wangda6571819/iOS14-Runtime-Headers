/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray;

@interface DMFLeaveControlGroupRequest : DMFTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;
	NSArray* _leaderIdentifiers;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * leaderIdentifiers;                                //@synthesize leaderIdentifiers=_leaderIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)leaderIdentifiers;
-(void)setLeaderIdentifiers:(NSArray *)arg1 ;
@end
