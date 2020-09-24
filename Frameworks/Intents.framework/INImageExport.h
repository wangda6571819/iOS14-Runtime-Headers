/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData, NSURL;


@protocol INImageExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * _identifier; 
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData; 
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri; 
@property (setter=_setName:,nonatomic,copy) NSString * _name; 
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath; 
@required
+(id)imageWithImageData:(id)arg1;
+(id)imageWithURL:(id)arg1;
+(id)imageNamed:(id)arg1;
-(void)_setName:(id)arg1;
-(NSURL *)_uri;
-(NSString *)_bundlePath;
-(NSString *)_identifier;
-(id)init;
-(void)_setImageData:(id)arg1;
-(void)_setUri:(id)arg1;
-(NSString *)_name;
-(void)_setBundlePath:(id)arg1;
-(NSData *)_imageData;

@end
