//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPointerArray.h"

__attribute__((visibility("hidden")))
@interface NSConcretePointerArray : NSPointerArray
{
    struct NSSlice slice;	// 8 = 0x8
    unsigned long long count;	// 40 = 0x28
    unsigned long long capacity;	// 48 = 0x30
    unsigned long long options;	// 56 = 0x38
    unsigned long long mutations;	// 64 = 0x40
    _Bool needsCompaction;	// 72 = 0x48
    _Bool hasDynamicSlice;	// 73 = 0x49
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000529ffd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052b354
- (void)removePointer:(void *)arg1;	// IMP=0x000000000052b2a6
- (unsigned long long)indexOfPointer:(void *)arg1;	// IMP=0x000000000052b227
- (void)setCount:(unsigned long long)arg1;	// IMP=0x000000000052b15d
- (unsigned long long)count;	// IMP=0x000000000052b14c
- (void)compact;	// IMP=0x000000000052b047
- (void)_markNeedsCompaction;	// IMP=0x000000000052b036
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;	// IMP=0x000000000052aef8
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000052ad5e
- (void)removePointerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000052abe4
- (void)addPointer:(void *)arg1;	// IMP=0x000000000052ab39
- (void *)pointerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000052aa5f
- (void)arrayGrow:(unsigned long long)arg1;	// IMP=0x000000000052a9a6
- (id)pointerFunctions;	// IMP=0x000000000052a968
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000052a8d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000052a52e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052a40f
- (unsigned long long)hash;	// IMP=0x000000000052a3e9
- (void)dealloc;	// IMP=0x000000000052a2c5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000052a005
- (id)initWithPointerFunctions:(id)arg1;	// IMP=0x0000000000529edf
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000529dcf
- (id)init;	// IMP=0x0000000000529dbb

@end

