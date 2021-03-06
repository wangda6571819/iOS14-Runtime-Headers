/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVBufferedInputStream.h>
#import <libobjc.A.dylib/AVOutputContextCommunicationChannelDelegate.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate> {

	AVOutputContext* _outputContext;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;              //@synthesize outputContext=_outputContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)dealloc;
-(void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithOutputContext:(id)arg1 ;
-(AVOutputContext *)outputContext;
-(id)initWithData:(id)arg1 ;
-(NSString *)description;
@end

