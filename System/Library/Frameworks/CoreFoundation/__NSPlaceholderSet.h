//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000003e5f1
+ (void)initialize;	// IMP=0x008000000003e5bb
- (void)dealloc;	// IMP=0x000000000003e83f
- (unsigned long long)retainCount;	// IMP=0x000000000003e837
- (oneway void)release;	// IMP=0x000000000003e836
- (id)retain;	// IMP=0x000000000003e832
- (id)init;	// IMP=0x000000000003e7ea
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003e7a4
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000003e69c
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003e5f3
- (void)removeObject:(id)arg1;	// IMP=0x000000000003e4fc
- (void)addObject:(id)arg1;	// IMP=0x000000000003e43d
- (id)objectEnumerator;	// IMP=0x000000000003e37e
- (id)member:(id)arg1;	// IMP=0x000000000003e2bf
- (unsigned long long)count;	// IMP=0x000000000003e200

@end

