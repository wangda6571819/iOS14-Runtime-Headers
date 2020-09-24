/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXMPBScreenLogUnlockSessionTracker : PBCodable <NSCopying> {

	unsigned _numEngagementsInAppLibrary;
	unsigned _numEngagementsInAppPredictionPanel;
	unsigned _numEngagementsInSpotlightActions;
	unsigned _numEngagementsInSpotlightApps;
	unsigned _numEngagementsInSuggestionsWidget;
	unsigned _sessionLengthInSeconds;
	BOOL _appLibraryEnabled;
	BOOL _appPredictionPanelEnabled;
	BOOL _spotlightEnabled;
	BOOL _suggestionsWidgetEnabled;
	SCD_Struct_AT7 _has;

}

@property (assign,nonatomic) BOOL hasSessionLengthInSeconds; 
@property (assign,nonatomic) unsigned sessionLengthInSeconds;                          //@synthesize sessionLengthInSeconds=_sessionLengthInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSpotlightApps; 
@property (assign,nonatomic) unsigned numEngagementsInSpotlightApps;                   //@synthesize numEngagementsInSpotlightApps=_numEngagementsInSpotlightApps - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSpotlightActions; 
@property (assign,nonatomic) unsigned numEngagementsInSpotlightActions;                //@synthesize numEngagementsInSpotlightActions=_numEngagementsInSpotlightActions - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSuggestionsWidget; 
@property (assign,nonatomic) unsigned numEngagementsInSuggestionsWidget;               //@synthesize numEngagementsInSuggestionsWidget=_numEngagementsInSuggestionsWidget - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInAppPredictionPanel; 
@property (assign,nonatomic) unsigned numEngagementsInAppPredictionPanel;              //@synthesize numEngagementsInAppPredictionPanel=_numEngagementsInAppPredictionPanel - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInAppLibrary; 
@property (assign,nonatomic) unsigned numEngagementsInAppLibrary;                      //@synthesize numEngagementsInAppLibrary=_numEngagementsInAppLibrary - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightEnabled; 
@property (assign,nonatomic) BOOL spotlightEnabled;                                    //@synthesize spotlightEnabled=_spotlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetEnabled; 
@property (assign,nonatomic) BOOL suggestionsWidgetEnabled;                            //@synthesize suggestionsWidgetEnabled=_suggestionsWidgetEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelEnabled; 
@property (assign,nonatomic) BOOL appPredictionPanelEnabled;                           //@synthesize appPredictionPanelEnabled=_appPredictionPanelEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppLibraryEnabled; 
@property (assign,nonatomic) BOOL appLibraryEnabled;                                   //@synthesize appLibraryEnabled=_appLibraryEnabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setSessionLengthInSeconds:(unsigned)arg1 ;
-(void)setHasSessionLengthInSeconds:(BOOL)arg1 ;
-(BOOL)hasSessionLengthInSeconds;
-(void)setNumEngagementsInSpotlightApps:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSpotlightApps:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSpotlightApps;
-(void)setNumEngagementsInSpotlightActions:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSpotlightActions:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSpotlightActions;
-(void)setNumEngagementsInSuggestionsWidget:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSuggestionsWidget:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSuggestionsWidget;
-(void)setNumEngagementsInAppPredictionPanel:(unsigned)arg1 ;
-(void)setHasNumEngagementsInAppPredictionPanel:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInAppPredictionPanel;
-(void)setNumEngagementsInAppLibrary:(unsigned)arg1 ;
-(void)setHasNumEngagementsInAppLibrary:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInAppLibrary;
-(void)setSpotlightEnabled:(BOOL)arg1 ;
-(void)setHasSpotlightEnabled:(BOOL)arg1 ;
-(BOOL)hasSpotlightEnabled;
-(void)setSuggestionsWidgetEnabled:(BOOL)arg1 ;
-(void)setHasSuggestionsWidgetEnabled:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetEnabled;
-(void)setAppPredictionPanelEnabled:(BOOL)arg1 ;
-(void)setHasAppPredictionPanelEnabled:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelEnabled;
-(void)setAppLibraryEnabled:(BOOL)arg1 ;
-(void)setHasAppLibraryEnabled:(BOOL)arg1 ;
-(BOOL)hasAppLibraryEnabled;
-(unsigned)sessionLengthInSeconds;
-(unsigned)numEngagementsInSpotlightApps;
-(unsigned)numEngagementsInSpotlightActions;
-(unsigned)numEngagementsInSuggestionsWidget;
-(unsigned)numEngagementsInAppPredictionPanel;
-(unsigned)numEngagementsInAppLibrary;
-(BOOL)spotlightEnabled;
-(BOOL)suggestionsWidgetEnabled;
-(BOOL)appPredictionPanelEnabled;
-(BOOL)appLibraryEnabled;
@end
