//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFUnfairLock.h"

__attribute__((visibility("hidden")))
@interface __HMFOSUnfairLock : HMFUnfairLock
{
    struct os_unfair_lock_s _internal;	// 16 = 0x10
    unsigned int _internalOptions;	// 20 = 0x14
}

- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050514
- (void)assertNotOwner;	// IMP=0x0000000000050503
- (void)assertOwner;	// IMP=0x00000000000504f2
- (void)unlock;	// IMP=0x00000000000504e1
- (void)lock;	// IMP=0x00000000000504c0
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000050469

@end

