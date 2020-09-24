/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSSet;

@interface CWFScanParameters : NSObject <NSCopying, NSSecureCoding> {

	BOOL _mergeScanResults;
	BOOL _includeHiddenNetworks;
	int _BSSType;
	int _PHYMode;
	int _scanType;
	int _scanFlags;
	NSArray* _channels;
	NSString* _SSID;
	NSArray* _SSIDList;
	unsigned long long _numberOfScans;
	unsigned long long _restTime;
	unsigned long long _dwellTime;
	unsigned long long _maximumCacheAge;
	long long _minimumRSSI;
	NSSet* _includeProperties;
	NSArray* _includeScanResults;

}

@property (nonatomic,copy) NSArray * channels;                                //@synthesize channels=_channels - In the implementation block
@property (setter=SID,nonatomic,copy) NSString * SSID;                        //@synthesize SSID=_SSID - In the implementation block
@property (setter=SIDList,nonatomic,copy) NSArray * SSIDList;                 //@synthesize SSIDList=_SSIDList - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScans;                //@synthesize numberOfScans=_numberOfScans - In the implementation block
@property (assign,nonatomic) unsigned long long restTime;                     //@synthesize restTime=_restTime - In the implementation block
@property (assign,nonatomic) unsigned long long dwellTime;                    //@synthesize dwellTime=_dwellTime - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCacheAge;              //@synthesize maximumCacheAge=_maximumCacheAge - In the implementation block
@property (assign,nonatomic) int BSSType;                                     //@synthesize BSSType=_BSSType - In the implementation block
@property (assign,nonatomic) int PHYMode;                                     //@synthesize PHYMode=_PHYMode - In the implementation block
@property (assign,nonatomic) int scanType;                                    //@synthesize scanType=_scanType - In the implementation block
@property (assign,nonatomic) long long minimumRSSI;                           //@synthesize minimumRSSI=_minimumRSSI - In the implementation block
@property (assign,nonatomic) BOOL mergeScanResults;                           //@synthesize mergeScanResults=_mergeScanResults - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenNetworks;                      //@synthesize includeHiddenNetworks=_includeHiddenNetworks - In the implementation block
@property (assign,nonatomic) int scanFlags;                                   //@synthesize scanFlags=_scanFlags - In the implementation block
@property (nonatomic,copy) NSSet * includeProperties;                         //@synthesize includeProperties=_includeProperties - In the implementation block
@property (nonatomic,copy) NSArray * includeScanResults;                      //@synthesize includeScanResults=_includeScanResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)SSID;
-(void)setDwellTime:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mergeScanResults;
-(unsigned long long)maximumCacheAge;
-(void)setIncludeScanResults:(NSArray *)arg1 ;
-(unsigned long long)dwellTime;
-(void)setMinimumRSSI:(long long)arg1 ;
-(int)BSSType;
-(void)setScanType:(int)arg1 ;
-(long long)minimumRSSI;
-(void)setNumberOfScans:(unsigned long long)arg1 ;
-(void)setBSSType:(int)arg1 ;
-(void)setSSID:(NSString *)arg1 ;
-(unsigned long long)numberOfScans;
-(NSArray *)SSIDList;
-(int)PHYMode;
-(void)setIncludeProperties:(NSSet *)arg1 ;
-(NSArray *)includeScanResults;
-(NSSet *)includeProperties;
-(void)setSSIDList:(NSArray *)arg1 ;
-(void)setMaximumCacheAge:(unsigned long long)arg1 ;
-(void)setMergeScanResults:(BOOL)arg1 ;
-(unsigned long long)restTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIncludeHiddenNetworks:(BOOL)arg1 ;
-(int)scanFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)channels;
-(void)setChannels:(NSArray *)arg1 ;
-(void)setRestTime:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(int)scanType;
-(BOOL)includeHiddenNetworks;
-(void)setPHYMode:(int)arg1 ;
-(void)setScanFlags:(int)arg1 ;
-(BOOL)isEqualToScanParameters:(id)arg1 ;
@end
