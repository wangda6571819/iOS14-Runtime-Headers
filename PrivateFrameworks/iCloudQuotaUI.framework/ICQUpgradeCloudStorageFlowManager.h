/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/ICQUpgradeFlowManager.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>

@class NSURLSession, NSString, PSCloudStorageOffersManager, NSDictionary;

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager <PSCloudStorageOffersManagerDelegate> {

	NSURLSession* _buyProductSession;
	NSString* _storagePurchaseButtonId;
	PSCloudStorageOffersManager* _storageOffersManager;
	/*^block*/id _purchaseCompletionHandler;

}

@property (nonatomic,retain) NSString * storagePurchaseButtonId;                              //@synthesize storagePurchaseButtonId=_storagePurchaseButtonId - In the implementation block
@property (nonatomic,readonly) NSDictionary * storagePurchaseKeybag; 
@property (nonatomic,retain) PSCloudStorageOffersManager * storageOffersManager;              //@synthesize storageOffersManager=_storageOffersManager - In the implementation block
@property (nonatomic,copy) id purchaseCompletionHandler;                                      //@synthesize purchaseCompletionHandler=_purchaseCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldSubclassShowForOffer:(id)arg1 ;
+(BOOL)_canDoTokenPurchaseWithOffer:(id)arg1 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)initSubclassWithOffer:(id)arg1 ;
-(void)_performPageButtonActionWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)storagePurchaseKeybag;
-(void)_performPurchase;
-(NSString *)storagePurchaseButtonId;
-(id)_buyProductQueryKeySet;
-(id)_storageContextJSONString;
-(id)_dummyRequestWithAccount:(id)arg1 token:(id)arg2 ;
-(id)_storageContextHeaderDictionary;
-(id)_buyProductQueryDictionary;
-(void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3 ;
-(id)purchaseCompletionHandler;
-(id)secureTokenMissingError;
-(void)_performPurchaseUsingSettingsUI;
-(void)_buyProductShouldUseToken:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performPurchaseUsingTouchID;
-(void)setStoragePurchaseButtonId:(NSString *)arg1 ;
-(PSCloudStorageOffersManager *)storageOffersManager;
-(void)setStorageOffersManager:(PSCloudStorageOffersManager *)arg1 ;
-(void)setPurchaseCompletionHandler:(id)arg1 ;
@end
