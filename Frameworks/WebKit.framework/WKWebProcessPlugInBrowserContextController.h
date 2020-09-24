/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, NSString;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPage> _page;
	WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > _formDelegate;
	WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate> > _editingDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;

}

@property (nonatomic,readonly) OpaqueWKBundlePageRef _bundlePageRef; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (setter=_setFormDelegate:,__weak) id<WKWebProcessPlugInFormDelegatePrivate> _formDelegate; 
@property (setter=_setEditingDelegate:,__weak) id<WKWebProcessPlugInEditingDelegate> _editingDelegate; 
@property (assign,setter=_setDefersLoading:,nonatomic) BOOL _defersLoading; 
@property (nonatomic,readonly) BOOL _usesNonPersistentWebsiteDataStore; 
@property (readonly) WKDOMDocument * mainFrameDocument; 
@property (readonly) WKDOMRange * selectedRange; 
@property (readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (readonly) WKWebProcessPlugInPageGroup * pageGroup; 
@property (__weak) id<WKWebProcessPlugInLoadDelegate> loadDelegate; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookUpBrowsingContextFromHandle:(id)arg1 ;
-(WKDOMRange *)selectedRange;
-(WKBrowsingContextHandle *)handle;
-(id<WKWebProcessPlugInEditingDelegate>)_editingDelegate;
-(id<WKWebProcessPlugInFormDelegatePrivate>)_formDelegate;
-(Object*)_apiObject;
-(void)_setFormDelegate:(id)arg1 ;
-(WKWebProcessPlugInPageGroup *)pageGroup;
-(BOOL)_defersLoading;
-(void)dealloc;
-(void)_setDefersLoading:(BOOL)arg1 ;
-(OpaqueWKBundlePageRef)_bundlePageRef;
-(id<WKWebProcessPlugInLoadDelegate>)loadDelegate;
-(void)_setEditingDelegate:(id)arg1 ;
-(WKWebProcessPlugInFrame *)mainFrame;
-(BOOL)_usesNonPersistentWebsiteDataStore;
-(WKDOMDocument *)mainFrameDocument;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(void)setLoadDelegate:(id<WKWebProcessPlugInLoadDelegate>)arg1 ;
@end
