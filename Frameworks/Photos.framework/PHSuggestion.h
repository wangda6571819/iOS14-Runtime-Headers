/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSArray, NSDictionary, NSString;

@interface PHSuggestion : PHAssetCollection {

	NSData* _actionData;
	NSData* _featuresData;
	NSDate* _creationDate;
	unsigned long long _approximateCount;
	unsigned long long _approximatePhotosCount;
	unsigned long long _approximateVideosCount;
	NSArray* _assets;
	unsigned short _type;
	unsigned short _subtype;
	unsigned short _state;
	unsigned short _notificationState;
	unsigned short _featuredState;
	NSDictionary* _actionProperties;
	NSDictionary* _featuresProperties;
	long long _version;
	NSDate* _activationDate;
	NSDate* _relevantUntilDate;
	NSDate* _expungeDate;
	NSString* _subtitle;

}

@property (nonatomic,readonly) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionProperties;                //@synthesize actionProperties=_actionProperties - In the implementation block
@property (nonatomic,readonly) NSDictionary * featuresProperties;              //@synthesize featuresProperties=_featuresProperties - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (nonatomic,readonly) unsigned short type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                         //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short notificationState;               //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,readonly) unsigned short featuredState;                   //@synthesize featuredState=_featuredState - In the implementation block
@property (nonatomic,readonly) long long version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDate * activationDate;                        //@synthesize activationDate=_activationDate - In the implementation block
@property (nonatomic,readonly) NSDate * relevantUntilDate;                     //@synthesize relevantUntilDate=_relevantUntilDate - In the implementation block
@property (nonatomic,readonly) NSDate * expungeDate;                           //@synthesize expungeDate=_expungeDate - In the implementation block
+(id)managedEntityName;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsTrashedState;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)entityKeyMap;
+(id)fetchType;
+(BOOL)managedObjectSupportsRejectedState;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(double)lifetimeAfterBecomingActive;
+(id)predicateForAllFeaturedStateEnabledSuggestionTypes;
+(id)fetchSuggestionsWithOptions:(id)arg1 ;
+(id)fetchSuggestionsWithState:(unsigned short)arg1 withOptions:(id)arg2 ;
+(id)fetchSuggestionsWithState:(unsigned short)arg1 ofType:(unsigned short)arg2 withOptions:(id)arg3 ;
+(id)transientSuggestionWithInfo:(id)arg1 photoLibrary:(id)arg2 ;
+(id)availableSuggestionTypeInfosWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)suggestionInfosWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
-(id)assets;
-(NSString *)subtitle;
-(long long)version;
-(id)localizedSubtitle;
-(unsigned long long)estimatedAssetCount;
-(NSDate *)activationDate;
-(unsigned short)subtype;
-(unsigned short)type;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(id)creationDate;
-(id)predicateForAllMomentsFromRepresentativeAssets;
-(unsigned short)notificationState;
-(unsigned short)featuredState;
-(NSDate *)expungeDate;
-(NSDate *)relevantUntilDate;
-(unsigned short)state;
-(id)description;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVidoesCount;
-(id)predicateForAllAssets;
-(NSDictionary *)actionProperties;
-(NSDictionary *)featuresProperties;
-(BOOL)containsUnverifiedPersons;
@end
