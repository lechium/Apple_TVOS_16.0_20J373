//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet
{
    int _cd_rc;	// 8 = 0x8
    struct _NSFaultingMutableSetFlags _flags;	// 12 = 0xc
    id _realSet;	// 16 = 0x10
    NSManagedObject *_source;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000005a9bb
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000592be
+ (id)alloc;	// IMP=0x00600000000592b2
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0060000000058f50
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x000000000005a9cc
- (Class)classForCoder;	// IMP=0x000000000005a9aa
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000005a965
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005a920
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005a8d6
- (void)setSet:(id)arg1;	// IMP=0x000000000005a88b
- (void)unionSet:(id)arg1;	// IMP=0x000000000005a840
- (void)removeAllObjects;	// IMP=0x000000000005a814
- (void)minusSet:(id)arg1;	// IMP=0x000000000005a7ad
- (void)intersectSet:(id)arg1;	// IMP=0x000000000005a762
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000005a55d
- (void)removeObject:(id)arg1;	// IMP=0x000000000005a480
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000000005a436
- (void)makeObjectsPerformSelector:(SEL)arg1;	// IMP=0x000000000005a3f1
- (_Bool)isSubsetOfSet:(id)arg1;	// IMP=0x000000000005a3a4
- (_Bool)_isIdenticalFault:(id)arg1;	// IMP=0x000000000005a2eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a2a3
- (_Bool)isEqualToSet:(id)arg1;	// IMP=0x000000000005a1b5
- (_Bool)intersectsSet:(id)arg1;	// IMP=0x000000000005a168
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000005a0e9
- (id)anyObject;	// IMP=0x000000000005a049
- (id)allObjects;	// IMP=0x000000000005a013
- (void)getObjects:(id *)arg1;	// IMP=0x0000000000059fe2
- (id)objectEnumerator;	// IMP=0x0000000000059fac
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059f62
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059f18
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000059ebf
- (void)addObject:(id)arg1;	// IMP=0x0000000000059de2
- (id)member:(id)arg1;	// IMP=0x0000000000059d35
- (unsigned long long)count;	// IMP=0x0000000000059d09
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x0000000000059c29
- (id)description;	// IMP=0x0000000000059b54
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059add
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059883
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;	// IMP=0x000000000005977d
- (_Bool)_shouldProcessKVOChange;	// IMP=0x0000000000059775
- (void)willReadWithContents:(id)arg1;	// IMP=0x00000000000593b6
- (void)willRead;	// IMP=0x0000000000059350
@property(readonly, nonatomic, getter=isFault) _Bool fault;
- (void)dealloc;	// IMP=0x00000000000592ca
- (_Bool)_isDeallocating;	// IMP=0x000000000005928f
- (_Bool)_tryRetain;	// IMP=0x0000000000059251
- (unsigned long long)retainCount;	// IMP=0x0000000000059239
- (oneway void)release;	// IMP=0x00000000000591fb
- (id)retain;	// IMP=0x00000000000591da
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;	// IMP=0x00000000000590a5
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;	// IMP=0x0000000000058f58

@end
