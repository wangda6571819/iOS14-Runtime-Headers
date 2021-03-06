/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, GCPhysicalInputProfile;


@protocol GCDevice <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
@required
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(NSString *)vendorName;
-(void)setHandlerQueue:(id)arg1;
-(NSString *)productCategory;
-(GCPhysicalInputProfile *)physicalInputProfile;

@end

