//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AKExpiringCache : NSObject
{
    NSMutableDictionary *_internalCache;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000022948
- (void)flushCacheForced:(_Bool)arg1;	// IMP=0x0010000000022699
- (void)setObject:(id)arg1 forKey:(id)arg2 expiresIn:(double)arg3;	// IMP=0x00100000000224ab
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00100000000223fa
- (id)objectForKey:(id)arg1;	// IMP=0x00100000000222b6
- (id)init;	// IMP=0x0010000000022249

@end
