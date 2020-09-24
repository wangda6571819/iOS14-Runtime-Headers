/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothHeadphoneInEarDetectionStateMutating.h>

@class AFBluetoothHeadphoneInEarDetectionState, NSString;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {

	AFBluetoothHeadphoneInEarDetectionState* _baseModel;
	BOOL _isEnabled;
	long long _primaryEarbudSide;
	long long _primaryInEarStatus;
	long long _secondaryInEarStatus;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasPrimaryEarbudSide : 1;
		unsigned hasPrimaryInEarStatus : 1;
		unsigned hasSecondaryInEarStatus : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setPrimaryInEarStatus:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setPrimaryEarbudSide:(long long)arg1 ;
-(void)setSecondaryInEarStatus:(long long)arg1 ;
-(id)init;
-(id)generate;
@end
