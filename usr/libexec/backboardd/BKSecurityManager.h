//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BKSecurityManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_vpidToCacheEntry;	// 16 = 0x10
}

+ (_Bool)hasEntitlement:(id)arg1 forConnection:(id)arg2;	// IMP=0x0040000000020f6d
+ (_Bool)hasEntitlement:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x0010000000020eec
+ (id)sharedInstance;	// IMP=0x0010000000020ebc
- (void).cxx_destruct;	// IMP=0x0020000000020e8f
- (void)_processDidTerminate:(long long)arg1;	// IMP=0x0000000000020d76
- (_Bool)_lock_hasEntitlement:(id)arg1 usingCacheForAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x0010000000020a98
- (_Bool)hasEntitlement:(id)arg1 forAuditToken:(CDStruct_6ad76789 *)arg2;	// IMP=0x0010000000020a31
- (id)init;	// IMP=0x00100000000209d4

@end

