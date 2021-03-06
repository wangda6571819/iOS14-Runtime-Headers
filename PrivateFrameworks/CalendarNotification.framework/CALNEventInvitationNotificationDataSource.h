/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNEventInvitationNotificationDataSource <NSObject>
@required
-(void)declineEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)acceptEventInvitationWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotificationWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotificationSourceClientIdentifiers:(id)arg1;
-(void)clearEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)reportEventInvitationAsJunkWithSourceClientIdentifier:(id)arg1;
-(void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotifications;

@end

