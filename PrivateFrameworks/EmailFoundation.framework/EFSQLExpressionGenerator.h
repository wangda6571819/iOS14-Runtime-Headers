/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EFSQLGeneratorTableRelationship, NSArray, NSString;

@interface EFSQLExpressionGenerator : NSObject {

	BOOL _includeSourceColumn;
	EFSQLGeneratorTableRelationship* _tableRelationship;
	NSArray* _whereExpression;
	NSArray* _additionalSelectColumns;
	NSString* _alias;
	EFSQLExpressionGenerator* _previousExpressionGenerator;

}

@property (nonatomic,readonly) EFSQLGeneratorTableRelationship * tableRelationship;                 //@synthesize tableRelationship=_tableRelationship - In the implementation block
@property (nonatomic,readonly) NSArray * whereExpression;                                           //@synthesize whereExpression=_whereExpression - In the implementation block
@property (nonatomic,readonly) NSArray * additionalSelectColumns;                                   //@synthesize additionalSelectColumns=_additionalSelectColumns - In the implementation block
@property (assign,nonatomic) BOOL includeSourceColumn;                                              //@synthesize includeSourceColumn=_includeSourceColumn - In the implementation block
@property (nonatomic,copy) NSString * alias;                                                        //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) EFSQLExpressionGenerator * previousExpressionGenerator;              //@synthesize previousExpressionGenerator=_previousExpressionGenerator - In the implementation block
+(id)tableFromPreviousTable:(id)arg1 propertyMapper:(id)arg2 ;
-(NSString *)alias;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 additionalSelectColumns:(id)arg4 includeSourceColumn:(BOOL)arg5 ;
-(EFSQLGeneratorTableRelationship *)tableRelationship;
-(void)assignAliasWithMap:(id)arg1 ;
-(EFSQLExpressionGenerator *)previousExpressionGenerator;
-(BOOL)isEqualToEFSQLExpressionGenerator:(id)arg1 ;
-(id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 ;
-(id)joinOnGenerator;
-(id)columnAlias;
-(NSArray *)whereExpression;
-(NSArray *)additionalSelectColumns;
-(BOOL)includeSourceColumn;
-(void)setIncludeSourceColumn:(BOOL)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(unsigned long long)hash;
@end

