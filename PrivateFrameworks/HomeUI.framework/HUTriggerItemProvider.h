/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HUTriggerItemProvider : HFItemProvider {

	BOOL _usesRichIconDescriptors;
	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _triggerItems;

}

@property (nonatomic,retain) NSMutableSet * triggerItems;               //@synthesize triggerItems=_triggerItems - In the implementation block
@property (nonatomic,copy) id filter;                                   //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL usesRichIconDescriptors;              //@synthesize usesRichIconDescriptors=_usesRichIconDescriptors - In the implementation block
@property (nonatomic,readonly) HMHome * home;                           //@synthesize home=_home - In the implementation block
-(id)items;
-(id)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(void)setUsesRichIconDescriptors:(BOOL)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(BOOL)usesRichIconDescriptors;
-(HMHome *)home;
-(NSMutableSet *)triggerItems;
-(void)setTriggerItems:(NSMutableSet *)arg1 ;
@end
