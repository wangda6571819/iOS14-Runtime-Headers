/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBCountedMapValue.h>

@protocol NSCopyingNSObject;
@class UIImage, NSString;

@interface SBHIconAccessoryCountedMapImageTuple : NSObject <SBCountedMapValue> {

	unsigned long long _hash;
	id<NSCopying><NSObject> _countedMapKey;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying><NSObject> sbh_countedMapKey;              //@synthesize countedMapKey=_countedMapKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSCopying><NSObject>)sbh_countedMapKey;
-(id)initWithImage:(id)arg1 countedMapKey:(id)arg2 hash:(unsigned long long)arg3 ;
-(id)initWithImage:(id)arg1 countedMapKey:(id)arg2 ;
@end

