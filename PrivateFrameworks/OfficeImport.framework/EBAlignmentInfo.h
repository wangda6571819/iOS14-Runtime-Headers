/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBAlignmentInfo : NSObject
+(int)convertXlHorizAlignEnumToED:(int)arg1 ;
+(int)convertXlVertAlignEnumToED:(int)arg1 ;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)arg1 ;
+(int)convertEDVerticalAlignmentEnumToXl:(int)arg1 ;
+(id)edAlignmentInfoFromXlXf:(XlXf*)arg1 ;
+(id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign*)arg1 ;
+(id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(XlDXfAlign*)xlDXfAlignFromEDAlignmentInfo:(id)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
@end
