/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface ESDObjectFactory : NSObject {

	EshObjectFactory* eshObjectFactory;
	NSMutableArray* eshObjectFactoryStack;

}
+(id)threadLocalFactory;
-(void)dealloc;
-(id)init;
-(EshObject*)createObjectWithType:(unsigned short)arg1 ;
-(EshObject*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2 ;
-(void)replaceHostEshFactoryWith:(EshObjectFactory*)arg1 ;
-(void)restoreHostEshFactory;
-(void)setEshFactory:(EshObjectFactory*)arg1 ;
@end
