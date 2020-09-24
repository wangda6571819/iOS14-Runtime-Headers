/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HapticDictionaryReader : NSObject {

	unsigned long long _urlIndex;

}
-(id)parseEvent:(id)arg1 ;
-(id)parseParam:(id)arg1 ;
-(BOOL)verifyVersion:(id)arg1 ;
-(id)parseEventParams:(id)arg1 ;
-(id)parseParamCurve:(id)arg1 ;
-(id)scanForEmbeddedURLs:(id)arg1 ;
-(id)parseParamCurveControlPoints:(id)arg1 ;
-(BOOL)parseEventsAndParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
