/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRCommand.h>

@class NSDictionary, NSProgress, NSString;

@interface CRUpdateProgressCommand : NSObject <CRCommand> {

	BOOL _animatesProgress;
	unsigned long long commandDirection;
	NSDictionary* userInfo;
	unsigned long long _event;
	NSProgress* _progress;

}

@property (assign,nonatomic) unsigned long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL animatesProgress;                            //@synthesize animatesProgress=_animatesProgress - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEvent:(unsigned long long)arg1 ;
-(unsigned long long)event;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)init;
-(NSDictionary *)userInfo;
-(NSProgress *)progress;
-(void)setAnimatesProgress:(BOOL)arg1 ;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
-(BOOL)animatesProgress;
@end
