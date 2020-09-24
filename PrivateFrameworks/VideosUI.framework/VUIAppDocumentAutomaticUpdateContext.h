/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIAppDocumentUpdateContext.h>

@class IKUpdateServiceRequest, NSArray, NSMutableOrderedSet, NSString;

@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext> {

	IKUpdateServiceRequest* _currentUpdateRequest;
	NSArray* _receivedEvents;
	NSMutableOrderedSet* _remainingViewElements;

}

@property (nonatomic,retain) IKUpdateServiceRequest * currentUpdateRequest;              //@synthesize currentUpdateRequest=_currentUpdateRequest - In the implementation block
@property (nonatomic,copy) NSArray * receivedEvents;                                     //@synthesize receivedEvents=_receivedEvents - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * remainingViewElements;                //@synthesize remainingViewElements=_remainingViewElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)receivedEvents;
-(void)setReceivedEvents:(NSArray *)arg1 ;
-(id)init;
-(NSMutableOrderedSet *)remainingViewElements;
-(id)_documentUpdateRequestForViewElement:(id)arg1 appContext:(id)arg2 documentRef:(id)arg3 ;
-(void)setCurrentUpdateRequest:(IKUpdateServiceRequest *)arg1 ;
-(void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2 ;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2 ;
-(IKUpdateServiceRequest *)currentUpdateRequest;
-(id)initWithEvents:(id)arg1 viewElements:(id)arg2 ;
-(void)setRemainingViewElements:(NSMutableOrderedSet *)arg1 ;
@end
