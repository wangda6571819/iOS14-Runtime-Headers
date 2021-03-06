/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlaybackIntentDataSource, NSSecureCoding;
@class NSString, NSData;

@interface MPCPlaybackIntent : NSObject {

	id<MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
	BOOL _prefersEnqueuingUsingAirPlay;
	NSString* _localizedTitle;
	long long _tracklistSource;
	id<NSSecureCoding> _tracklistToken;
	long long _actionAfterQueueLoad;
	long long _shuffleMode;
	long long _repeatMode;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	NSString* _siriAssetInfo;
	NSString* _siriReferenceIdentifier;

}

@property (nonatomic,readonly) id<MPCPlaybackIntentDataSource> tracklistDataSource; 
@property (nonatomic,copy) NSString * localizedTitle;                                            //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (assign,nonatomic) long long tracklistSource;                                          //@synthesize tracklistSource=_tracklistSource - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> tracklistToken;                                  //@synthesize tracklistToken=_tracklistToken - In the implementation block
@property (assign,nonatomic) long long actionAfterQueueLoad;                                     //@synthesize actionAfterQueueLoad=_actionAfterQueueLoad - In the implementation block
@property (assign,nonatomic) long long shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) long long repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL prefersEnqueuingUsingAirPlay;                                  //@synthesize prefersEnqueuingUsingAirPlay=_prefersEnqueuingUsingAirPlay - In the implementation block
@property (nonatomic,copy) NSString * playActivityFeatureName;                                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;                              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                                             //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                                   //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
+(id)radioPlaybackIntentWithStationURL:(id)arg1 ;
+(id)radioPlaybackIntentFromSong:(id)arg1 ;
+(id)tracklistDataSourceForSource:(long long)arg1 ;
+(id)radioPlaybackIntentFromReference:(id)arg1 ;
+(id)intentFromQueueDescriptor:(id)arg1 ;
+(id)continueListeningRadioPlaybackIntent;
+(id)radioPlaybackIntentFromAlbum:(id)arg1 ;
+(id)radioPlaybackIntentFromArtist:(id)arg1 ;
+(id)radioPlaybackIntentWithStation:(id)arg1 ;
+(id)radioPlaybackIntentWithStationStringID:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)playActivityRecommendationData;
-(void)setTracklistToken:(id<NSSecureCoding>)arg1 ;
-(void)setTracklistSource:(long long)arg1 ;
-(long long)actionAfterQueueLoad;
-(NSString *)localizedTitle;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)getRepresentativeMetadataWithCompletion:(/*^block*/id)arg1 ;
-(long long)repeatMode;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(id)init;
-(long long)tracklistSource;
-(NSString *)siriReferenceIdentifier;
-(void)getArchiveWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShuffleMode:(long long)arg1 ;
-(void)setRepeatMode:(long long)arg1 ;
-(NSString *)siriAssetInfo;
-(BOOL)prefersEnqueuingUsingAirPlay;
-(void)setActionAfterQueueLoad:(long long)arg1 ;
-(void)setPrefersEnqueuingUsingAirPlay:(BOOL)arg1 ;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(long long)shuffleMode;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
-(id<NSSecureCoding>)tracklistToken;
-(id)description;
-(id<MPCPlaybackIntentDataSource>)tracklistDataSource;
@end

