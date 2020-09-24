/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFActionNaturalLanguageOptions, NSSet, NSMutableSet;

@interface HFActionNaturalLanguageExecution : NSObject {

	BOOL _named;
	HFActionNaturalLanguageOptions* _options;
	NSSet* _actions;
	NSSet* _allInvolvedObjects;
	NSSet* _involvedServices;
	NSMutableSet* _indescribableActionTypes;

}

@property (nonatomic,retain) HFActionNaturalLanguageOptions * options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSSet * actions;                                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSSet * allInvolvedObjects;                                            //@synthesize allInvolvedObjects=_allInvolvedObjects - In the implementation block
@property (nonatomic,retain) NSSet * involvedServices;                                              //@synthesize involvedServices=_involvedServices - In the implementation block
@property (assign,nonatomic) BOOL named;                                                            //@synthesize named=_named - In the implementation block
@property (nonatomic,readonly) NSMutableSet * indescribableActionTypes;                             //@synthesize indescribableActionTypes=_indescribableActionTypes - In the implementation block
@property (nonatomic,readonly) id<HFUIRepresentableHomeObject> singularInvolvedObject; 
+(id)executionWithActions:(id)arg1 options:(id)arg2 ;
-(BOOL)named;
-(void)setOptions:(HFActionNaturalLanguageOptions *)arg1 ;
-(HFActionNaturalLanguageOptions *)options;
-(NSSet *)actions;
-(void)setNamed:(BOOL)arg1 ;
-(void)setInvolvedServices:(NSSet *)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)setActions:(NSSet *)arg1 ;
-(void)updateInvolvedObjects;
-(void)setAllInvolvedObjects:(NSSet *)arg1 ;
-(NSSet *)allInvolvedObjects;
-(NSMutableSet *)indescribableActionTypes;
-(id<HFUIRepresentableHomeObject>)singularInvolvedObject;
-(NSSet *)involvedServices;
@end
