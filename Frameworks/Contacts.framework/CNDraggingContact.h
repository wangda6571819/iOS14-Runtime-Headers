/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject {

	CNContact* _contact;
	CNContactStore* _contactStore;
	NSURL* _cachedFileURLRepresentation;

}

@property (nonatomic,retain) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSURL * cachedFileURLRepresentation;              //@synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation - In the implementation block
+(id)os_log;
+(id)availableDataRepresentationTypes;
-(id)serializeContactToVCard:(id)arg1 ;
-(NSURL *)cachedFileURLRepresentation;
-(void)setCachedFileURLRepresentation:(NSURL *)arg1 ;
-(id)fileURLRepresentation;
-(void)cleanupFileURLRepresentation;
-(CNContact *)contact;
-(id)fileNameForContact:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)dataRepresentationForType:(id)arg1 ;
-(id)fetchContactWithKeys:(id)arg1 ;
-(id)initWithContact:(id)arg1 contactStore:(id)arg2 ;
@end

