//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSCachingFetchRequest, NSManagedObjectContext, NSString, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    _PFArray *_array;	// 16 = 0x10
    unsigned int *_entryFlags;	// 24 = 0x18
    NSManagedObjectContext *_moc;	// 32 = 0x20
    NSCachingFetchRequest *_request;	// 40 = 0x28
    unsigned int _batchSize;	// 48 = 0x30
    unsigned int *_LRUBatches;	// 56 = 0x38
    struct _PFBatchFaultingArrayFlags _flags;	// 64 = 0x40
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000066037
+ (id)alloc;	// IMP=0x001000000006602b
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0010000000066023
+ (void)initialize;	// IMP=0x0010000000065fa0
+ (Class)classForKeyedUnarchiver;	// IMP=0x0010000000065a94
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000069807
- (unsigned long long)count;	// IMP=0x00000000000697cf
@property(readonly, copy) NSString *description;
- (id)newArrayFromObjectIDs;	// IMP=0x0000000000069544
- (id)arrayFromObjectIDs;	// IMP=0x000000000006952a
- (id)subarrayWithRange:(struct _NSRange)arg1;	// IMP=0x00000000000694b3
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000069434
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;	// IMP=0x00000000000692af
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000069102
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x00000000000690b3
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000069064
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000069015
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000068f20
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000068d51
- (id)valueForKeyPath:(id)arg1;	// IMP=0x0000000000068cf0
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000068c0e
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x0000000000068bad
- (id)filteredArrayUsingPredicate:(id)arg1;	// IMP=0x0000000000068b4c
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068ae1
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068a80
- (id)sortedArrayUsingSelector:(SEL)arg1;	// IMP=0x0000000000068a1f
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;	// IMP=0x00000000000689aa
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000006893f
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000006889e
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000000687fd
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068763
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000006857f
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000000683be
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068127
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000068046
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000067f24
- (void)getObjects:(id *)arg1;	// IMP=0x0000000000067ed5
- (_Bool)_isDeallocating;	// IMP=0x0000000000066d56
- (_Bool)_tryRetain;	// IMP=0x0000000000066d18
- (unsigned long long)retainCount;	// IMP=0x0000000000066d00
- (oneway void)release;	// IMP=0x0000000000066cc2
- (id)retain;	// IMP=0x0000000000066ca1
- (void)dealloc;	// IMP=0x0000000000066c01
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000066bbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000066b85
- (_Bool)isEqualToArray:(id)arg1;	// IMP=0x0000000000066486
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;	// IMP=0x0000000000066043
- (Class)classForCoder;	// IMP=0x0000000000065a83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
