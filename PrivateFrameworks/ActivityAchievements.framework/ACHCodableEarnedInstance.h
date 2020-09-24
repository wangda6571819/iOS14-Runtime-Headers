/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ACHCodableEarnedInstance : PBCodable <NSCopying> {

	double _createdDate;
	long long _creatorDevice;
	double _value;
	NSString* _earnedDateComponents;
	NSString* _templateUniqueName;
	NSString* _valueUnitString;
	SCD_Struct_AC1 _has;

}

@property (nonatomic,readonly) BOOL hasTemplateUniqueName; 
@property (nonatomic,retain) NSString * templateUniqueName;                //@synthesize templateUniqueName=_templateUniqueName - In the implementation block
@property (nonatomic,readonly) BOOL hasEarnedDateComponents; 
@property (nonatomic,retain) NSString * earnedDateComponents;              //@synthesize earnedDateComponents=_earnedDateComponents - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedDate; 
@property (assign,nonatomic) double createdDate;                           //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) BOOL hasCreatorDevice; 
@property (assign,nonatomic) long long creatorDevice;                      //@synthesize creatorDevice=_creatorDevice - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValueUnitString; 
@property (nonatomic,retain) NSString * valueUnitString;                   //@synthesize valueUnitString=_valueUnitString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCreatedDate:(double)arg1 ;
-(BOOL)hasValue;
-(void)setValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)value;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)createdDate;
-(unsigned long long)hash;
-(void)setHasValue:(BOOL)arg1 ;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(long long)creatorDevice;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)earnedDateComponents;
-(void)setEarnedDateComponents:(NSString *)arg1 ;
-(void)setCreatorDevice:(long long)arg1 ;
-(void)setValueUnitString:(NSString *)arg1 ;
-(BOOL)hasTemplateUniqueName;
-(BOOL)hasEarnedDateComponents;
-(void)setHasCreatedDate:(BOOL)arg1 ;
-(BOOL)hasCreatedDate;
-(void)setHasCreatorDevice:(BOOL)arg1 ;
-(BOOL)hasCreatorDevice;
-(BOOL)hasValueUnitString;
-(NSString *)valueUnitString;
@end
