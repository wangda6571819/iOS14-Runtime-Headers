/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSService.h>

@interface MSMailDefaultService : MSService {

	BOOL _shouldLaunch;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunch=_shouldLaunch - In the implementation block
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(id)init;
-(BOOL)shouldLaunchMobileMail;
-(BOOL)_launchMobileMailSuspendedError:(id*)arg1 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
@end

