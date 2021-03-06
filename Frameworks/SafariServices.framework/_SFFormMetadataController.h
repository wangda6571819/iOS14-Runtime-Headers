/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariShared/WBSFormMetadataController.h>
#import <libobjc.A.dylib/WKWebProcessPlugInFormDelegatePrivate.h>

@protocol SFFormMetadataObserver;
@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInPageController, NSDictionary, WBSFormMetadata, WKWebProcessPlugInFrame, NSString;

@interface _SFFormMetadataController : WBSFormMetadataController <WKWebProcessPlugInFormDelegatePrivate> {

	WKWebProcessPlugInScriptWorld* _scriptWorld;
	_SFWebProcessPlugInPageController* _pageController;
	id<SFFormMetadataObserver> _observer;
	NSDictionary* _assistedNodeMetadata;
	BOOL _shouldListenForFormChanges;
	WBSFormMetadata* _unsubmittedForm;
	WKWebProcessPlugInFrame* _unsubmittedFormFrame;
	BOOL _autoFillInProgress;
	BOOL _focusingFormForStreamlinedLogin;

}

@property (nonatomic,readonly) WKWebProcessPlugInScriptWorld * scriptWorld; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectFormMetadataForPreFilling;
-(id)_observer;
-(void)invalidate;
-(id)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 focusedFieldControlID:(id)arg4 ;
-(void)didFindSearchURLTemplateString:(id)arg1 inFrame:(id)arg2 pageController:(id)arg3 ;
-(id)_assistedNodeMetadataWithPasswordField:(id)arg1 passwordFieldMetadata:(id)arg2 formMetadata:(id)arg3 inFrame:(id)arg4 ;
-(BOOL)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg1 ;
-(void)_collectFormMetadataForPreFilling:(BOOL)arg1 ;
-(void)collectURLsForPreFilling;
-(void)clearScriptWorld;
-(void)didSameDocumentNavigation:(long long)arg1 inFrame:(id)arg2 ;
-(void)dealloc;
-(void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(BOOL)arg4 ;
-(void)_willNavigateFrameWithUnsubmittedForm:(id)arg1 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5 ;
-(WKWebProcessPlugInScriptWorld *)scriptWorld;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(id)initWithPageController:(id)arg1 ;
-(id)_webProcessPlugInBrowserContextController:(id)arg1 willBeginInputSessionForElement:(id)arg2 inFrame:(id)arg3 userIsInteracting:(BOOL)arg4 ;
-(BOOL)_formContainsAutoFilledElements:(id)arg1 ;
-(BOOL)shouldIncludeNonEmptyFields;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 focusFieldAfterFilling:(BOOL)arg5 fieldToFocus:(id)arg6 submitForm:(BOOL)arg7 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 targetFrame:(id)arg4 values:(id)arg5 ;
-(void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2 ;
-(void)didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2 ;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(BOOL)arg3 ;
-(void)_webProcessPlugInBrowserContextController:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3 initiatedByUserTyping:(BOOL)arg4 ;
-(void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3 ;
-(void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4 ;
-(void)clearField:(id)arg1 inFrame:(id)arg2 ;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(BOOL)arg3 setAutoFilled:(BOOL)arg4 selectFieldAfterFilling:(id)arg5 ;
@end

