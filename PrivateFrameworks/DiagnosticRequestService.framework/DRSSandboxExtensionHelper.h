/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DRSSandboxExtensionHelper : NSObject {

	BOOL _didInit;
	long long _sandboxExtensionHandle;
	NSString* _logPath;

}

@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,readonly) BOOL didInit;                                //@synthesize didInit=_didInit - In the implementation block
@property (nonatomic,readonly) NSString * logPath;                          //@synthesize logPath=_logPath - In the implementation block
-(void)dealloc;
-(long long)sandboxExtensionHandle;
-(BOOL)didInit;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(NSString *)logPath;
-(id)initWithSandboxExtensionToken:(id)arg1 logPath:(id)arg2 errorOut:(id*)arg3 ;
@end

