//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenArrayM : NSArray
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_a6934631 storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000012142
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000011b56
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001232c
- (id)mutableCopy;	// IMP=0x00000000000122b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000122ab
- (id)copy;	// IMP=0x00000000000122a6
- (void)dealloc;	// IMP=0x0000000000012147
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x00000000000120d4
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000011ee1
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011cb4
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000011c4d
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000011bd9
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011b65
- (unsigned long long)count;	// IMP=0x0000000000011b59

@end
