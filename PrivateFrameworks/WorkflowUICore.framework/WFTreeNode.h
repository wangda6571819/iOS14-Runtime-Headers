/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFTreeObserver;
@class NSArray, NSMutableArray, NSIndexPath;

@interface WFTreeNode : NSObject {

	id _representedObject;
	WFTreeNode* _parentNode;
	id<WFTreeObserver> _observer;
	NSArray* _flattenedDescendents;
	NSMutableArray* _mutableChildNodes;

}

@property (nonatomic,readonly) NSMutableArray * mutableChildNodes;              //@synthesize mutableChildNodes=_mutableChildNodes - In the implementation block
@property (nonatomic,retain) id representedObject;                              //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (nonatomic,__weak,readonly) WFTreeNode * parentNode;                  //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic,__weak) id<WFTreeObserver> observer;                //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * flattenedDescendents;                  //@synthesize flattenedDescendents=_flattenedDescendents - In the implementation block
-(NSArray *)childNodes;
-(void)setParentNode:(WFTreeNode *)arg1 ;
-(id)debugDescription;
-(NSIndexPath *)indexPath;
-(void)setRepresentedObject:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)init;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)setChildNodes:(NSArray *)arg1 ;
-(void)removeNodeAtIndex:(unsigned long long)arg1 ;
-(void)setObserver:(id<WFTreeObserver>)arg1 ;
-(WFTreeNode *)parentNode;
-(BOOL)isLeaf;
-(id<WFTreeObserver>)observer;
-(id)representedObject;
-(void)addNode:(id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSMutableArray *)mutableChildNodes;
-(id)descendentNodeAtRelativeIndexPath:(id)arg1 ;
-(NSArray *)flattenedDescendents;
-(void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3 ;
-(void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2 ;
-(id)debugDescriptionAtDepth:(unsigned long long)arg1 ;
-(id)paddedStringAtDepth:(unsigned long long)arg1 ;
@end

