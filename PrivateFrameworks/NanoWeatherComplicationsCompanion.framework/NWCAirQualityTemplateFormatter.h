/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWCTemplateFormattable.h>

@class NSNumberFormatter, NSString;

@interface NWCAirQualityTemplateFormatter : NSObject <NWCTemplateFormattable> {

	NSNumberFormatter* _indexNumberFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * indexNumberFormatter;              //@synthesize indexNumberFormatter=_indexNumberFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(id)init;
-(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)switcherTemplateWithFamily:(long long)arg1 ;
-(id)_localizedIndexForConditions:(id)arg1 ;
-(id)graphicCircularTemplateForConditions:(id)arg1 location:(id)arg2 ;
-(NSNumberFormatter *)indexNumberFormatter;
-(id)_richCircularTemplateForComplicationFamily:(long long)arg1 conditions:(id)arg2 location:(id)arg3 ;
-(id)circularSmallTemplateForConditions:(id)arg1 ;
-(id)extraLargeTemplateForConditions:(id)arg1 ;
-(id)graphicBezelTemplateForConditions:(id)arg1 location:(id)arg2 ;
-(id)graphicCornerTemplateForConditions:(id)arg1 location:(id)arg2 ;
-(id)graphicExtraLargeTemplateForConditions:(id)arg1 location:(id)arg2 ;
-(id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 conditions:(id)arg3 ;
-(id)modularSmallTemplateForLocation:(id)arg1 conditions:(id)arg2 ;
-(id)utilitarianLargeTemplateForLocation:(id)arg1 conditions:(id)arg2 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg1 ;
-(void)setIndexNumberFormatter:(NSNumberFormatter *)arg1 ;
@end
