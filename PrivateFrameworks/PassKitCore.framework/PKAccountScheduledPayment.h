/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKCurrencyAmount, PKAccountPaymentFundingSource;

@interface PKAccountScheduledPayment : NSObject <NSSecureCoding> {

	PKCurrencyAmount* _currencyAmount;
	PKAccountPaymentFundingSource* _fundingSource;

}

@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                          //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;              //@synthesize fundingSource=_fundingSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCurrencyAmount:(id)arg1 fundingSource:(id)arg2 ;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(PKAccountPaymentFundingSource *)fundingSource;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
