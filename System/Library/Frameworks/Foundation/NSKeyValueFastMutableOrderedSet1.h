//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1
{
    NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 32 = 0x20
}

- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000631812
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000063175e
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000631730
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000063169e
- (unsigned long long)count;	// IMP=0x0000000000631670
- (void)_proxyNonGCFinalize;	// IMP=0x00000000006315ff
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000631572

@end

