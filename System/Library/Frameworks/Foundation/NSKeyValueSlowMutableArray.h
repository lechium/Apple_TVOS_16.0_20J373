//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000004d4074
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000004d3ffe
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000004d3f97
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d3f30
- (void)removeLastObject;	// IMP=0x00000000004d3ece
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000004d3e6e
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000004d3c4f
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000004d3b37
- (void)addObject:(id)arg1;	// IMP=0x00000000004d3a35
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000004d3a01
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d39cd
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004d3985
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000004d3931
- (unsigned long long)count;	// IMP=0x00000000004d38c4
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000004d382f
- (void)_proxyNonGCFinalize;	// IMP=0x00000000004d37a2
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000004d36d0

@end
