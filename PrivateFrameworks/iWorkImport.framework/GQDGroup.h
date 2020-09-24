/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDDrawable.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDWPExternalTextWrap, NSString;

@interface GQDGroup : GQDDrawable <GQDNameMappable> {

	CFArrayRef mDrawables;
	GQDWPExternalTextWrap* mExternalTextWrap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(CFArrayRef)drawables;
-(id)externalTextWrap;
@end
