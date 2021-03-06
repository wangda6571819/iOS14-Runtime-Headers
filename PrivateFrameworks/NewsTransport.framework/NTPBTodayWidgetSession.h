/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTodayWidgetSession : PBCodable <NSCopying> {

	SCD_Struct_NT10* _countOfArticlesExposedPerSections;
	NSMutableArray* _countOfArticlesExposedEachSections;
	int _widgetArticleCount;
	NSMutableArray* _widgetSectionIdsExposeds;
	int _widgetSectionsExposed;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                                                   //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionsExposed; 
@property (assign,nonatomic) int widgetSectionsExposed;                                                //@synthesize widgetSectionsExposed=_widgetSectionsExposed - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfArticlesExposedPerSectionsCount; 
@property (nonatomic,readonly) int* countOfArticlesExposedPerSections; 
@property (nonatomic,retain) NSMutableArray * widgetSectionIdsExposeds;                                //@synthesize widgetSectionIdsExposeds=_widgetSectionIdsExposeds - In the implementation block
@property (nonatomic,retain) NSMutableArray * countOfArticlesExposedEachSections;                      //@synthesize countOfArticlesExposedEachSections=_countOfArticlesExposedEachSections - In the implementation block
+(Class)widgetSectionIdsExposedType;
+(Class)countOfArticlesExposedEachSectionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(void)setWidgetArticleCount:(int)arg1 ;
-(void)setHasWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCount;
-(void)mergeFrom:(id)arg1 ;
-(int)widgetArticleCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)countOfArticlesExposedEachSectionsCount;
-(id)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1 ;
-(void)addCountOfArticlesExposedEachSection:(id)arg1 ;
-(NSMutableArray *)countOfArticlesExposedEachSections;
-(void)clearCountOfArticlesExposedEachSections;
-(unsigned long long)hash;
-(void)addWidgetSectionIdsExposed:(id)arg1 ;
-(unsigned long long)countOfArticlesExposedPerSectionsCount;
-(int)countOfArticlesExposedPerSectionAtIndex:(unsigned long long)arg1 ;
-(void)addCountOfArticlesExposedPerSection:(int)arg1 ;
-(void)setWidgetSectionsExposed:(int)arg1 ;
-(void)setHasWidgetSectionsExposed:(BOOL)arg1 ;
-(BOOL)hasWidgetSectionsExposed;
-(int*)countOfArticlesExposedPerSections;
-(void)clearCountOfArticlesExposedPerSections;
-(void)setCountOfArticlesExposedPerSections:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearWidgetSectionIdsExposeds;
-(unsigned long long)widgetSectionIdsExposedsCount;
-(id)widgetSectionIdsExposedAtIndex:(unsigned long long)arg1 ;
-(int)widgetSectionsExposed;
-(NSMutableArray *)widgetSectionIdsExposeds;
-(void)setWidgetSectionIdsExposeds:(NSMutableArray *)arg1 ;
-(void)setCountOfArticlesExposedEachSections:(NSMutableArray *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

