/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMeasurement;

@interface INCarChargingConnectorPower : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _chargingConnector;
	NSMeasurement* _maximumPower;

}

@property (nonatomic,copy,readonly) NSString * chargingConnector;              //@synthesize chargingConnector=_chargingConnector - In the implementation block
@property (nonatomic,copy,readonly) NSMeasurement * maximumPower;              //@synthesize maximumPower=_maximumPower - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMeasurement *)maximumPower;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithChargingConnector:(id)arg1 maximumPower:(id)arg2 ;
-(NSString *)chargingConnector;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

