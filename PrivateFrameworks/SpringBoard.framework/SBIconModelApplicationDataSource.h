/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SBIconModelApplicationDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * allApplications; 
@required
-(NSArray *)allApplications;
-(id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
-(id)placeholdersByDisplayIDForIconModel:(id)arg1;

@end
