/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, AMSUIDDynamicImpressionMetricsIdentifier;

@interface AMSUIDDynamicImpressionMetrics : NSObject {

	 custom;
	 fields;
	 identifier;

}

@property (copy,nonatomic) NSDictionary * custom; 
@property (copy,nonatomic) NSDictionary * fields; 
@property (retain,nonatomic) AMSUIDDynamicImpressionMetricsIdentifier * identifier; 
-(void)setFields:(NSDictionary *)arg1 ;
-(NSDictionary *)fields;
-(AMSUIDDynamicImpressionMetricsIdentifier *)identifier;
-(NSDictionary *)custom;
-(void)setIdentifier:(AMSUIDDynamicImpressionMetricsIdentifier *)arg1 ;
-(void)setCustom:(NSDictionary *)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3 ;
@end

