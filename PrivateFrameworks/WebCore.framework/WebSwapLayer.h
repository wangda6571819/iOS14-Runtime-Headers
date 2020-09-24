/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@class EAGLContext;

@interface WebSwapLayer : CAEAGLLayer {

	EAGLContext* mDisplayContext;
	BOOL initialized;
	SharedSwapState* mSwapState;
	const FunctionsGL* mFunctions;
	unsigned mReadFramebuffer;

}
-(id)initWithSharedState:(SharedSwapState*)arg1 withContext:(id)arg2 withFunctions:(const FunctionsGL*)arg3 ;
-(void)display;
@end
