/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying> {

	SCD_Struct_AW5* _indices;
	SCD_Struct_AW5* _values;
	float _bucketSize;
	unsigned _length;
	float _minValue;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) unsigned long long indicesCount; 
@property (nonatomic,readonly) unsigned* indices; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) unsigned* values; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned length;                                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasMinValue; 
@property (assign,nonatomic) float minValue;                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) BOOL hasBucketSize; 
@property (assign,nonatomic) float bucketSize;                               //@synthesize bucketSize=_bucketSize - In the implementation block
+(id)quantizedSparseVectorFromSparseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
+(id)quantizedSparseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(void)setLength:(unsigned)arg1 ;
-(unsigned*)values;
-(unsigned long long)valuesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMinValue;
-(void)dealloc;
-(unsigned)length;
-(void)addValues:(unsigned)arg1 ;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearValues;
-(unsigned long long)hash;
-(BOOL)hasLength;
-(unsigned*)indices;
-(id)description;
-(id)dictionaryRepresentation;
-(float)bucketSize;
-(void)setBucketSize:(float)arg1 ;
-(unsigned long long)indicesCount;
-(void)clearIndices;
-(void)addIndices:(unsigned)arg1 ;
-(unsigned)indicesAtIndex:(unsigned long long)arg1 ;
-(void)setIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMinValue:(BOOL)arg1 ;
-(void)setHasBucketSize:(BOOL)arg1 ;
-(BOOL)hasBucketSize;
-(float)originalValueAtIndex:(unsigned long long)arg1 ;
@end
