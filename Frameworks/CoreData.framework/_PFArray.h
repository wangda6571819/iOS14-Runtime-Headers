/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@class _PFWeakReference;

@interface _PFArray : NSArray {

	int _cd_rc;
	unsigned _count;
	id* _array;
	_PFWeakReference* _weakContext;
	struct {
		unsigned shouldRetain : 1;
		unsigned shouldRelease : 1;
		unsigned useExtendedRelease : 1;
		unsigned freeBackingArray : 1;
		unsigned copyBackingArray : 1;
		unsigned managedObjects : 1;
		unsigned _RESERVED : 27;
	}  _flags;

}
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newArrayFromObjectIDs;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 andContext:(id)arg4 ;
-(Class)classForCoder;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(oneway void)release;
-(void)dealloc;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)count;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isDeallocating;
-(id)retain;
-(id)arrayFromObjectIDs;
@end

