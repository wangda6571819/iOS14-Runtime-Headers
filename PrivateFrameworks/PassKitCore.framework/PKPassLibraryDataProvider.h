/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(BOOL)canAddPaymentPass;
-(id)peerPaymentPassUniqueID;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1;
-(id)passWithUniqueID:(id)arg1;
-(id)paymentPasses;
-(void)removePass:(id)arg1;

@end
