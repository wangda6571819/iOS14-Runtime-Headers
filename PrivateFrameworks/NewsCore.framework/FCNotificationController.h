/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@protocol FCCoreConfigurationManager;
@class NSString, FCUserInfo, FCCommandQueue;

@interface FCNotificationController : NSObject <FCUserInfoObserving> {

	BOOL _publisherNotificationsAllowed;
	BOOL _appleNewsNotificationsAllowed;
	BOOL _shouldUseNewsUINotificationHandling;
	NSString* _notificationsUserID;
	NSString* _deviceToken;
	FCUserInfo* _userInfo;
	FCCommandQueue* _commandQueue;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,retain) FCUserInfo * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) FCCommandQueue * commandQueue;                                    //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,copy) NSString * notificationsUserID;                                     //@synthesize notificationsUserID=_notificationsUserID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                                             //@synthesize deviceToken=_deviceToken - In the implementation block
@property (assign,nonatomic) BOOL publisherNotificationsAllowed;                               //@synthesize publisherNotificationsAllowed=_publisherNotificationsAllowed - In the implementation block
@property (assign,nonatomic) BOOL appleNewsNotificationsAllowed;                               //@synthesize appleNewsNotificationsAllowed=_appleNewsNotificationsAllowed - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNewsUINotificationHandling;                         //@synthesize shouldUseNewsUINotificationHandling=_shouldUseNewsUINotificationHandling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCCommandQueue *)commandQueue;
-(BOOL)appleNewsNotificationsAllowed;
-(void)setCommandQueue:(FCCommandQueue *)arg1 ;
-(BOOL)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 ;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1 ;
-(void)dealloc;
-(void)setUserInfo:(FCUserInfo *)arg1 ;
-(BOOL)registerNotificationsForTagID:(id)arg1 isPaid:(BOOL)arg2 ;
-(id)init;
-(BOOL)unregisterNotificationsForTagID:(id)arg1 ;
-(void)setShouldUseNewsUINotificationHandling:(BOOL)arg1 ;
-(FCUserInfo *)userInfo;
-(NSString *)deviceToken;
-(void)setNewIssueNotificationsEnabled:(BOOL)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)_registerDeviceToken:(id)arg1 ;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1 ;
-(BOOL)shouldUseNewsUINotificationHandling;
-(BOOL)publisherNotificationsAllowed;
-(void)setEndOfAudioTrackNotificationsEnabled:(BOOL)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setNotificationsUserID:(NSString *)arg1 ;
-(BOOL)setMarketingNotificationsEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)setPublisherNotificationsAllowed:(BOOL)arg1 ;
-(void)registerDeviceToken:(id)arg1 ;
-(id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 publisherNotificationsAllowed:(BOOL)arg4 appleNewsNotificationsAllowed:(BOOL)arg5 ;
-(void)refreshNotificationsFromAppleNews;
-(void)setAppleNewsNotificationsAllowed:(BOOL)arg1 ;
-(NSString *)notificationsUserID;
@end

