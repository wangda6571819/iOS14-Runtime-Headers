/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPersistenceDatabaseSchema : NSObject
+(id)protectedSchema;
+(id)propertyMapper;
+(id)schema;
+(id)_protectedSchemaProviders;
+(id)_schemaProviders;
+(id)mailboxesTableName;
+(id)propertiesTableSchema;
+(id)partialMailboxesTableSchema;
+(id)propertiesTableName;
+(id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2 ;
+(id)_schemaWithPopulationBlock:(/*^block*/id)arg1 ;
+(id)additionalSchemaProviders;
+(void)_initializeSchemas;
+(void)ef_resetOnceTokens;
@end
