//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray
{
    NSMutableArray *_mutableArray;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00600000004d4844
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000004d4ebe
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000004d4dff
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000004d4d7a
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d4cc8
- (void)removeLastObject;	// IMP=0x00000000004d4c0a
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000004d4b7b
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000004d4abc
- (void)addObject:(id)arg1;	// IMP=0x00000000004d49f7
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000004d49da
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d49bd
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004d49a0
- (unsigned long long)count;	// IMP=0x00000000004d4983
- (void)_proxyNonGCFinalize;	// IMP=0x00000000004d4912
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000004d486b

@end
