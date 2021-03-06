/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@interface HKProductVersions : NSObject
+(id)majorVersionForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)productBuildVersionForDeviceType:(long long)arg1 ;
+(id)_updateVersionForMajorVersion:(id)arg1 productBuildVersion:(id)arg2 ;
+(id)_infoDictionaryForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)versionForProductWithName:(id)arg1 deviceType:(long long)arg2 error:(out id*)arg3 ;
+(id)versionForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)_deviceIdentifierForProductName:(id)arg1 key:(id)arg2 error:(out id*)arg3 ;
+(id)watchECGUDIDeviceIdentifier;
+(SCD_Struct_HK3)semanticVersionForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)UDIDeviceIdentifierForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)dateOfManufactureForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)yearOfReleaseForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)_productBuildVersion;
@end

