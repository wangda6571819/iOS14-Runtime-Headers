/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _INPBIntentResponse;


@protocol INIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) _INPBIntentResponse * backingStore; 
@required
-(id)init;
-(id)_payloadResponseMessageData;
-(void)_setPayloadResponseMessageData:(id)arg1;
-(long long)_intentHandlingStatus;
-(_INPBIntentResponse *)backingStore;

@end
