/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(void)dealloc;
-(id)variableConstraints;
-(id)valueView;
-(id)constantConstraints;
-(void)textFieldChanged:(id)arg1 ;
-(id)firstResponderItem;
-(UITextField *)textField;
-(void)updateValueWithPropertyItem:(id)arg1 ;
@end
