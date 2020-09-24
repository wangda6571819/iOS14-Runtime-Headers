/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UIView, NSString;

@interface CKDetailsMapViewCell : CKDetailsCell <CKDetailsCell> {

	UIView* _mapView;

}

@property (nonatomic,retain) UIView * mapView;                      //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(UIView *)mapView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setMapView:(UIView *)arg1 ;
@end
