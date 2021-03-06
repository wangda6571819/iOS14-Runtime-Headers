/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFDatabaseObjectObserver.h>

@protocol OS_dispatch_queue, VCDatabaseProvider;
@class NSObject, NSOrderedSet;

@interface WFSiriWorkflowVocabularyUpdater : NSObject <WFDatabaseObjectObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	id<VCDatabaseProvider> _databaseProvider;
	NSOrderedSet* _speakableStrings;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,copy) NSOrderedSet * speakableStrings;                          //@synthesize speakableStrings=_speakableStrings - In the implementation block
-(void)queue_updateFromDatabase:(id)arg1 ;
-(void)startIfPossible;
-(void)queue_startIfPossible;
-(void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)updateIfPossible;
-(NSOrderedSet *)speakableStrings;
-(void)setSpeakableStrings:(NSOrderedSet *)arg1 ;
@end

