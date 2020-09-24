/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WDMedicalRecordDaySummary, NSArray;

@interface WDMedicalRecordDisplayItemGroup : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WDMedicalRecordDaySummary* _daySummary;
	NSArray* _items;

}

@property (nonatomic,retain) WDMedicalRecordDaySummary * daySummary;              //@synthesize daySummary=_daySummary - In the implementation block
@property (nonatomic,retain) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * displayItems; 
+(id)displayItemGroupWithDaySummary:(id)arg1 ;
+(id)displayItemGroupWithDisplayItems:(id)arg1 ;
-(NSArray *)items;
-(NSArray *)displayItems;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDaySummary:(WDMedicalRecordDaySummary *)arg1 ;
-(WDMedicalRecordDaySummary *)daySummary;
-(id)displayItemAtIndex:(long long)arg1 ;
-(long long)numberOfDisplayItems;
-(NSString *)title;
-(void)setItems:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
@end
