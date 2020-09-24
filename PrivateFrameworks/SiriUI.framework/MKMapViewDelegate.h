/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapViewDelegate <NSObject>
@optional
-(void)mapViewWillStartLoadingMap:(id)arg1;
-(void)mapViewDidFinishLoadingMap:(id)arg1;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
-(void)mapViewWillStartRenderingMap:(id)arg1;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2;
-(void)mapView:(id)arg1 didAddOverlayViews:(id)arg2;
-(void)mapViewDidChangeVisibleRegion:(id)arg1;
-(id)mapView:(id)arg1 clusterAnnotationForMemberAnnotations:(id)arg2;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
-(void)mapViewWillStartLocatingUser:(id)arg1;
-(void)mapViewDidStopLocatingUser:(id)arg1;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
-(void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;

@end
