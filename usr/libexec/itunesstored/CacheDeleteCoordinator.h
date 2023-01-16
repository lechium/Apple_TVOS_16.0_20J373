//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, SSAppPurchaseHistoryCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CacheDeleteCoordinator : NSObject
{
    NSDictionary *_combinedSpaceByUrgency;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _lastUpdate;	// 24 = 0x18
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_scheduledTimer;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000004b250
- (void).cxx_destruct;	// IMP=0x002000000004cc2a
@property(retain) NSObject<OS_dispatch_source> *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
- (void)_refreshPurgeableStorage;	// IMP=0x001000000004c986
- (void)_pushUpdatedAvailableStorage;	// IMP=0x001000000004c6ff
- (id)_purgeable:(id)arg1 urgency:(int)arg2;	// IMP=0x001000000004c2d9
- (id)_purge:(id)arg1 urgency:(int)arg2;	// IMP=0x001000000004bf35
- (id)_purchaseHistoryCache;	// IMP=0x001000000004befa
- (id)_periodic:(id)arg1 urgency:(int)arg2;	// IMP=0x001000000004bc78
- (_Bool)_isStale;	// IMP=0x001000000004bc3d
- (unsigned long long)_currentPurgeable;	// IMP=0x001000000004bbc3
- (void)_cancelPurge;	// IMP=0x001000000004ba55
- (void)updatePurgeableStorage;	// IMP=0x001000000004b900
- (void)registerCacheDeleteInfoCallbacks;	// IMP=0x001000000004b3f3
- (void)dealloc;	// IMP=0x001000000004b369
- (id)init;	// IMP=0x001000000004b2d5

@end
