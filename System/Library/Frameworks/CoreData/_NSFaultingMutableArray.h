//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray
{
    int _cd_rc;	// 8 = 0x8
    NSMutableArray *_realArray;	// 16 = 0x10
    NSManagedObject *_source;	// 24 = 0x18
    NSPropertyDescription *_relationship;	// 32 = 0x20
    struct _NSFaultingMutableArrayFlags _flags;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0060000000058f3f
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000058441
+ (id)alloc;	// IMP=0x0060000000058435
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x006000000005842d
- (Class)classForCoder;	// IMP=0x0000000000058f2e
- (id)valueForKeyPath:(id)arg1;	// IMP=0x0000000000058ee9
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000058ea4
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000058e5a
- (void)getObjects:(id *)arg1;	// IMP=0x0000000000058e15
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000058dcb
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000058d86
- (void)removeLastObject;	// IMP=0x0000000000058d50
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000058d06
- (id)objectEnumerator;	// IMP=0x0000000000058cd0
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058c77
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058c2d
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058bd4
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058b8a
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058b31
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058ae7
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000058a8e
- (void)addObject:(id)arg1;	// IMP=0x0000000000058a49
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000058a04
- (unsigned long long)count;	// IMP=0x00000000000589ce
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000000005892c
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005888a
- (id)description;	// IMP=0x00000000000587e8
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000587d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005873c
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;	// IMP=0x00000000000586e7
- (void)willRead;	// IMP=0x0000000000058627
@property(readonly, nonatomic, getter=isFault) _Bool fault;
- (void)dealloc;	// IMP=0x00000000000585d2
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;	// IMP=0x0000000000058525
- (_Bool)_isDeallocating;	// IMP=0x0000000000058502
- (_Bool)_tryRetain;	// IMP=0x00000000000584c4
- (unsigned long long)retainCount;	// IMP=0x00000000000584ac
- (oneway void)release;	// IMP=0x000000000005846e
- (id)retain;	// IMP=0x000000000005844d

@end

