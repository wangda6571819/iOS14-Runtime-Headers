/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSPerSitePreferenceManager.h>

@protocol WBSPerSitePreferenceManager <NSObject>
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate; 
@optional
-(id)localizedWarningTextForPreference:(id)arg1;
-(void)getDomainsAllowedToRemoveForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(BOOL)preferenceAppliesToHighLevelDomains:(id)arg1;
-(BOOL)preferenceOnlyShowsConfiguredSites:(id)arg1;

@required
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
-(id)preferences;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)valuesForPreference:(id)arg1;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setDelegate:(id)arg1;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id<WBSPerSitePreferenceManagerDelegate>)delegate;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4;

@end


@protocol WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate;
@class NSString;

@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager> {

	id<WBSPerSitePreferenceManagerDelegate> _delegate;
	id<WBSPerSitePreferenceManagerStorageDelegate> _storageDelegate;
	id<WBSPerSitePreferenceManagerDefaultsDelegate> _defaultsDelegate;

}

@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerStorageDelegate> storageDelegate;                //@synthesize storageDelegate=_storageDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate;              //@synthesize defaultsDelegate=_defaultsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(id)preferences;
-(void)_recursivelySetDefaultPreferenceValues:(id)arg1 orderedKeys:(id)arg2 currentIndex:(long long)arg3 existingResult:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDefaultPreferenceValues:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<WBSPerSitePreferenceManagerStorageDelegate>)storageDelegate;
-(id<WBSPerSitePreferenceManagerDefaultsDelegate>)defaultsDelegate;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)valuesForPreference:(id)arg1 ;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setStorageDelegate:(id<WBSPerSitePreferenceManagerStorageDelegate>)arg1 ;
-(void)setDefaultsDelegate:(id<WBSPerSitePreferenceManagerDefaultsDelegate>)arg1 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<WBSPerSitePreferenceManagerDelegate>)arg1 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<WBSPerSitePreferenceManagerDelegate>)delegate;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_validatePreferenceValue:(id)arg1 inPreference:(id)arg2 ;
@end
