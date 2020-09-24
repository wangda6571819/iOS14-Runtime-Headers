/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptCanvasContext, NSString, UIImage;

@interface SUScriptSegmentedControlItem : SUScriptObject {

	SUScriptCanvasContext* _canvas;
	NSString* _identifier;
	UIImage* _image;
	NSString* _imageURLString;
	NSString* _title;
	id _userInfo;

}

@property (nonatomic,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (retain) SUScriptCanvasContext * canvas; 
@property (retain) NSString * identifier; 
@property (retain) NSString * imageURL; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(id)attributeKeys;
-(void)setUserInfo:(id)arg1 ;
-(UIImage *)image;
-(id)userInfo;
-(void)setImageURL:(NSString *)arg1 ;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(id)_className;
-(void)setTitle:(NSString *)arg1 ;
-(SUScriptCanvasContext *)canvas;
-(id)_segmentedControl;
-(NSString *)imageURL;
-(id)scriptAttributeKeys;
-(void)_reloadUserInterface;
-(id)newPageSection;
-(id)initWithPageSection:(id)arg1 ;
@end
