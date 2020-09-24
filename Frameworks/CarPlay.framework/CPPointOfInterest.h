/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MKMapItem, NSString, CPTextButton, NSUUID, CPImageSet, UIImage;

@interface CPPointOfInterest : NSObject <NSSecureCoding> {

	MKMapItem* _location;
	NSString* _title;
	NSString* _subtitle;
	NSString* _summary;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailSummary;
	CPTextButton* _primaryButton;
	CPTextButton* _secondaryButton;
	id _userInfo;
	NSUUID* _identifier;
	CPImageSet* _pinImageSet;

}

@property (nonatomic,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CPImageSet * pinImageSet;                    //@synthesize pinImageSet=_pinImageSet - In the implementation block
@property (nonatomic,retain) MKMapItem * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                        //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                     //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailSummary;                      //@synthesize detailSummary=_detailSummary - In the implementation block
@property (nonatomic,retain) UIImage * pinImage; 
@property (nonatomic,retain) CPTextButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPTextButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) id userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)identifier;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)pinImage;
-(NSString *)summary;
-(CPTextButton *)primaryButton;
-(CPTextButton *)secondaryButton;
-(MKMapItem *)location;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(void)setLocation:(MKMapItem *)arg1 ;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(NSString *)detailTitle;
-(NSString *)detailSubtitle;
-(id)userInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPrimaryButton:(CPTextButton *)arg1 ;
-(void)setSecondaryButton:(CPTextButton *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setPinImage:(UIImage *)arg1 ;
-(CPImageSet *)pinImageSet;
-(NSString *)detailSummary;
-(BOOL)isEqualToPointOfInterest:(id)arg1 ;
-(id)initWithLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 detailTitle:(id)arg5 detailSubtitle:(id)arg6 detailSummary:(id)arg7 pinImage:(id)arg8 ;
-(void)setDetailSummary:(NSString *)arg1 ;
-(void)setPinImageSet:(CPImageSet *)arg1 ;
@end
