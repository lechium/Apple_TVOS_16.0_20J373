//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CFPrefsWeakObservers : NSObject
{
    struct __cfobservers_t values;	// 8 = 0x8
    unsigned long long count;	// 24 = 0x18
}

- (id)debugDescription;	// IMP=0x000000000006f024
- (unsigned long long)approximateCount;	// IMP=0x000000000006f01f
- (unsigned long long)borrowObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000006ef00
- (unsigned char)removeObject:(id)arg1;	// IMP=0x000000000006edd2
- (unsigned char)addObject:(id)arg1;	// IMP=0x000000000006ec9e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006eaf1
- (void)dealloc;	// IMP=0x000000000006ea65
- (id)init;	// IMP=0x000000000006e9ff

@end

