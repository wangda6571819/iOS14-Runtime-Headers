/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPWiFiConfigurationOperationTypeWrapper, HAPTLVUnsignedNumberValue, HAPWiFiConfigurationUpdateStatusWrapper, NSString, HAPWiFiStationConfiguration;

@interface HAPWiFiConfigurationControl : NSObject <NSCopying, HAPTLVProtocol> {

	HAPWiFiConfigurationOperationTypeWrapper* _operationType;
	HAPTLVUnsignedNumberValue* _cookie;
	HAPWiFiConfigurationUpdateStatusWrapper* _updateStatus;
	HAPTLVUnsignedNumberValue* _operationTimeout;
	NSString* _countryCodeConfiguration;
	HAPWiFiStationConfiguration* _stationConfiguration;

}

@property (nonatomic,retain) HAPWiFiConfigurationOperationTypeWrapper * operationType;              //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * cookie;                                    //@synthesize cookie=_cookie - In the implementation block
@property (nonatomic,retain) HAPWiFiConfigurationUpdateStatusWrapper * updateStatus;                //@synthesize updateStatus=_updateStatus - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * operationTimeout;                          //@synthesize operationTimeout=_operationTimeout - In the implementation block
@property (nonatomic,retain) NSString * countryCodeConfiguration;                                   //@synthesize countryCodeConfiguration=_countryCodeConfiguration - In the implementation block
@property (nonatomic,retain) HAPWiFiStationConfiguration * stationConfiguration;                    //@synthesize stationConfiguration=_stationConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setCookie:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HAPTLVUnsignedNumberValue *)operationTimeout;
-(HAPWiFiConfigurationOperationTypeWrapper *)operationType;
-(void)setOperationType:(HAPWiFiConfigurationOperationTypeWrapper *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(HAPTLVUnsignedNumberValue *)cookie;
-(BOOL)isEqual:(id)arg1 ;
-(HAPWiFiConfigurationUpdateStatusWrapper *)updateStatus;
-(NSString *)description;
-(void)setOperationTimeout:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setStationConfiguration:(HAPWiFiStationConfiguration *)arg1 ;
-(void)setUpdateStatus:(HAPWiFiConfigurationUpdateStatusWrapper *)arg1 ;
-(void)setCountryCodeConfiguration:(NSString *)arg1 ;
-(NSString *)countryCodeConfiguration;
-(HAPWiFiStationConfiguration *)stationConfiguration;
-(id)initWithOperationType:(id)arg1 cookie:(id)arg2 updateStatus:(id)arg3 operationTimeout:(id)arg4 countryCodeConfiguration:(id)arg5 stationConfiguration:(id)arg6 ;
@end
