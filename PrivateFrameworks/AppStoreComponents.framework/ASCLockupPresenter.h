/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASCLockupPresenterObserver, ASCLockupPresenterView;
@class ASCLockup, ASCLockupViewGroup, ASCLockupRequest, ASCPresenterContext, ASCOfferPresenter, ASCAppearMetricsPresenter, AMSPromise, ASCSignpostSpan;

@interface ASCLockupPresenter : NSObject {

	id<ASCLockupPresenterObserver> _observer;
	ASCLockup* _lockup;
	ASCLockupViewGroup* _group;
	ASCLockupRequest* _request;
	/*^block*/id _viewRenderSpanProvider;
	id<ASCLockupPresenterView> _view;
	ASCPresenterContext* _context;
	ASCOfferPresenter* _offerPresenter;
	ASCAppearMetricsPresenter* _metricsPresenter;
	AMSPromise* _pendingRequestedLockup;
	ASCSignpostSpan* _pendingViewRender;

}

@property (nonatomic,__weak,readonly) id<ASCLockupPresenterView> view;                    //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) ASCPresenterContext * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) ASCOfferPresenter * offerPresenter;                        //@synthesize offerPresenter=_offerPresenter - In the implementation block
@property (nonatomic,readonly) ASCAppearMetricsPresenter * metricsPresenter;              //@synthesize metricsPresenter=_metricsPresenter - In the implementation block
@property (nonatomic,retain) AMSPromise * pendingRequestedLockup;                         //@synthesize pendingRequestedLockup=_pendingRequestedLockup - In the implementation block
@property (nonatomic,retain) ASCSignpostSpan * pendingViewRender;                         //@synthesize pendingViewRender=_pendingViewRender - In the implementation block
@property (nonatomic,readonly) BOOL prefersRightToLeftViewLayout; 
@property (assign,nonatomic,__weak) id<ASCLockupPresenterObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) ASCLockup * lockup;                                            //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,retain) ASCLockupViewGroup * group;                                  //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) ASCLockupRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id viewRenderSpanProvider;                                     //@synthesize viewRenderSpanProvider=_viewRenderSpanProvider - In the implementation block
-(void)setGroup:(ASCLockupViewGroup *)arg1 ;
-(ASCLockup *)lockup;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setLockup:(ASCLockup *)arg1 ;
-(void)dealloc;
-(id<ASCLockupPresenterView>)view;
-(ASCLockupViewGroup *)group;
-(ASCLockupRequest *)request;
-(ASCPresenterContext *)context;
-(void)setObserver:(id<ASCLockupPresenterObserver>)arg1 ;
-(void)setRequest:(ASCLockupRequest *)arg1 ;
-(id<ASCLockupPresenterObserver>)observer;
-(id)description;
-(void)daemonDidRebootstrap:(id)arg1 ;
-(id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3 context:(id)arg4 ;
-(ASCOfferPresenter *)offerPresenter;
-(ASCAppearMetricsPresenter *)metricsPresenter;
-(void)performIconFetch;
-(BOOL)prefersRightToLeftViewLayout;
-(void)retryGroup:(id)arg1 ;
-(void)performLockupFetch;
-(AMSPromise *)pendingRequestedLockup;
-(void)setPendingRequestedLockup:(AMSPromise *)arg1 ;
-(void)requestWillFetchLockup:(id)arg1 ;
-(void)request:(id)arg1 didCompleteWithLockup:(id)arg2 ;
-(void)endViewRender;
-(ASCSignpostSpan *)pendingViewRender;
-(void)iconArtwork:(id)arg1 didFetchImage:(id)arg2 ;
-(void)iconArtwork:(id)arg1 didFailFetchWithError:(id)arg2 ;
-(void)beginViewRender;
-(void)performFollowUpWork:(/*^block*/id)arg1 ;
-(void)setPendingViewRender:(ASCSignpostSpan *)arg1 ;
-(id)viewRenderSpanProvider;
-(id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3 ;
-(BOOL)retryRequestIfNeeded;
-(void)setViewRenderSpanProvider:(id)arg1 ;
@end
