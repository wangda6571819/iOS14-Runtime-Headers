/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@class NSDictionary, OBPrivacyLinkController, NSString;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter> {

	NSDictionary* _attributes;
	OBPrivacyLinkController* _linkController;

}

@property (readonly) OBPrivacyLinkController * linkController;              //@synthesize linkController=_linkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)configureInPage:(id)arg1 ;
-(OBPrivacyLinkController *)linkController;
@end

