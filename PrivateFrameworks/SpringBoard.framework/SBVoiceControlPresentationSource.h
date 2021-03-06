/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject {

	BluetoothDevice* _bluetoothDevice;
	long long _sourceType;

}

@property (nonatomic,readonly) long long sourceType;                           //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BluetoothDevice * bluetoothDevice;              //@synthesize bluetoothDevice=_bluetoothDevice - In the implementation block
+(id)sourceFromHomeButton;
+(id)sourceFromHeadsetButton;
+(id)sourceFromBluetoothDevice:(id)arg1 ;
-(long long)sourceType;
-(id)_initWithSourceType:(long long)arg1 ;
-(BluetoothDevice *)bluetoothDevice;
@end

