/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, NSDictionary, NSArray;


@protocol APPCPromotableNewsSupplementalContext <APPCSecureCodable,NSCopying>
@property (readonly,nonatomic) NSString * advertisementType; 
@property (readonly,nonatomic) NSString * creativeType; 
@property (readonly,nonatomic) NSString * currentArticleArticleId; 
@property (readonly,nonatomic) NSString * nextArticleArticleId; 
@property (readonly,nonatomic) NSNumber * currentArticleIsSponsored; 
@property (readonly,nonatomic) NSNumber * nextArticleIsSponsored; 
@property (readonly,nonatomic) NSDictionary * currentArticlePublicationMetadata; 
@property (readonly,nonatomic) NSDictionary * nextArticlePublicationMetadata; 
@property (readonly,nonatomic) NSString * currentArticleRating; 
@property (readonly,nonatomic) NSString * nextArticleRating; 
@property (readonly,nonatomic) NSString * currentArticleSourceChannel; 
@property (readonly,nonatomic) NSString * nextArticleSourceChannel; 
@property (readonly,nonatomic) NSString * currentArticleSourceChannelRating; 
@property (readonly,nonatomic) NSString * nextArticleSourceChannelRating; 
@property (readonly,nonatomic) NSNumber * currentArticleSourceContentProviderId; 
@property (readonly,nonatomic) NSNumber * nextArticleSourceContentProviderId; 
@property (readonly,nonatomic) NSArray * currentArticleSourceSections; 
@property (readonly,nonatomic) NSArray * nextArticleSourceSections; 
@property (readonly,nonatomic) NSArray * feedMetadataCategories; 
@property (readonly,nonatomic) NSString * feedMetadataChannelId; 
@property (readonly,nonatomic) NSString * feedMetadataTagId; 
@property (readonly,nonatomic) NSNumber * feedMetadataContentProviderID; 
@property (readonly,nonatomic) NSArray * feedMetadataKeywords; 
@property (readonly,nonatomic) NSArray * feedMetadataLanguages; 
@property (readonly,nonatomic) NSString * feedMetadataRating; 
@property (readonly,nonatomic) NSString * feedMetadataSectionId; 
@property (readonly,nonatomic) NSArray * groupContextCategories; 
@property (readonly,nonatomic) NSArray * groupContextAboveCategories; 
@property (readonly,nonatomic) NSArray * groupContextBelowCategories; 
@property (readonly,nonatomic) NSString * groupContextId; 
@property (readonly,nonatomic) NSString * groupContextAboveId; 
@property (readonly,nonatomic) NSString * groupContextBelowId; 
@property (readonly,nonatomic) NSArray * groupContextKeywords; 
@property (readonly,nonatomic) NSArray * groupContextAboveKeywords; 
@property (readonly,nonatomic) NSArray * groupContextBelowKeywords; 
@property (readonly,nonatomic) NSArray * groupContextLanguages; 
@property (readonly,nonatomic) NSArray * groupContextAboveLanguages; 
@property (readonly,nonatomic) NSArray * groupContextBelowLanguages; 
@property (readonly,nonatomic) NSString * groupContextAboveChannelId; 
@property (readonly,nonatomic) NSString * groupContextAboveTagId; 
@property (readonly,nonatomic) NSString * groupContextBelowChannelId; 
@property (readonly,nonatomic) NSString * groupContextBelowTagId; 
@property (readonly,nonatomic) NSNumber * groupContextContentProviderId; 
@property (readonly,nonatomic) NSNumber * groupContextAboveContentProviderId; 
@property (readonly,nonatomic) NSNumber * groupContextBelowContentProviderId; 
@property (readonly,nonatomic) NSString * groupContextType; 
@property (readonly,nonatomic) NSString * groupContextAboveType; 
@property (readonly,nonatomic) NSString * groupContextBelowType; 
@property (readonly,nonatomic) NSString * contentEnvironment; 
@property (readonly,nonatomic) NSNumber * isDraft; 
@property (readonly,nonatomic) NSNumber * onboardStatus; 
@property (readonly,nonatomic) NSString * placement; 
@property (readonly,nonatomic) NSString * referralLocation; 
@property (readonly,nonatomic) NSNumber * referralPublisherInventory; 
@property (readonly,nonatomic) NSNumber * numOfArticlesSeenSinceLastInterstitial; 
@property (readonly,nonatomic) NSNumber * playerAspectRatio; 
@property (readonly,nonatomic) NSString * subscriptionType; 
@property (readonly,nonatomic) NSString * currentIssueId; 
@property (readonly,nonatomic) long long currentIssueIsDraft; 
@property (readonly,nonatomic) long long currentIssueIsCurrent; 
@required
-(NSString *)creativeType;
-(NSString *)contentEnvironment;
-(NSString *)placement;
-(NSNumber *)onboardStatus;
-(NSString *)subscriptionType;
-(NSNumber *)isDraft;
-(NSString *)advertisementType;
-(NSString *)currentArticleArticleId;
-(NSString *)nextArticleArticleId;
-(NSNumber *)currentArticleIsSponsored;
-(NSNumber *)nextArticleIsSponsored;
-(NSDictionary *)currentArticlePublicationMetadata;
-(NSDictionary *)nextArticlePublicationMetadata;
-(NSString *)currentArticleRating;
-(NSString *)nextArticleRating;
-(NSString *)currentArticleSourceChannel;
-(NSString *)nextArticleSourceChannel;
-(NSString *)currentArticleSourceChannelRating;
-(NSString *)nextArticleSourceChannelRating;
-(NSNumber *)currentArticleSourceContentProviderId;
-(NSNumber *)nextArticleSourceContentProviderId;
-(NSArray *)currentArticleSourceSections;
-(NSArray *)nextArticleSourceSections;
-(NSArray *)feedMetadataCategories;
-(NSString *)feedMetadataChannelId;
-(NSString *)feedMetadataTagId;
-(NSNumber *)feedMetadataContentProviderID;
-(NSArray *)feedMetadataKeywords;
-(NSArray *)feedMetadataLanguages;
-(NSString *)feedMetadataRating;
-(NSString *)feedMetadataSectionId;
-(NSArray *)groupContextCategories;
-(NSArray *)groupContextAboveCategories;
-(NSArray *)groupContextBelowCategories;
-(NSString *)groupContextId;
-(NSString *)groupContextAboveId;
-(NSString *)groupContextBelowId;
-(NSArray *)groupContextKeywords;
-(NSArray *)groupContextAboveKeywords;
-(NSArray *)groupContextBelowKeywords;
-(NSArray *)groupContextLanguages;
-(NSArray *)groupContextAboveLanguages;
-(NSArray *)groupContextBelowLanguages;
-(NSString *)groupContextAboveChannelId;
-(NSString *)groupContextAboveTagId;
-(NSString *)groupContextBelowChannelId;
-(NSString *)groupContextBelowTagId;
-(NSNumber *)groupContextContentProviderId;
-(NSNumber *)groupContextAboveContentProviderId;
-(NSNumber *)groupContextBelowContentProviderId;
-(NSString *)groupContextType;
-(NSString *)groupContextAboveType;
-(NSString *)groupContextBelowType;
-(NSString *)referralLocation;
-(NSNumber *)referralPublisherInventory;
-(NSNumber *)numOfArticlesSeenSinceLastInterstitial;
-(NSNumber *)playerAspectRatio;
-(NSString *)currentIssueId;
-(long long)currentIssueIsDraft;
-(long long)currentIssueIsCurrent;

@end

