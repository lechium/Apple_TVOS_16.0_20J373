//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SubscriptionEntitlementsCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSNumber *_lastAccountID;	// 16 = 0x10
    NSData *_newsEntitlementsData;	// 24 = 0x18
    NSData *_appStoreEntitlementsData;	// 32 = 0x20
    NSData *_activityEntitlementsData;	// 40 = 0x28
    NSData *_musicEntitlementsData;	// 48 = 0x30
    NSData *_tvEntitlementsData;	// 56 = 0x38
    NSData *_iCloudEntitlementsData;	// 64 = 0x40
    NSData *_podcastEntitlementsData;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 80 = 0x50
    NSMutableDictionary *_completionHandlersBySegment;	// 88 = 0x58
}

+ (id)adPlatformsArcadeStatusCondition;	// IMP=0x0020000000117577
+ (id)sharedInstance;	// IMP=0x0010000000116474
- (void).cxx_destruct;	// IMP=0x002000000011c09c
- (void)_finishHandlersForSegment:(unsigned long long)arg1 result:(id)arg2;	// IMP=0x001000000011beba
- (_Bool)_hasHandlersWaitingForSegment:(unsigned long long)arg1;	// IMP=0x001000000011be38
- (void)_enqueueCompletionHandler:(CDUnknownBlockType)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x001000000011bd0b
- (void)_clearEntitlementsDataFromMemoryForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x001000000011bc30
- (id)_readEntitlementsDataFromMemoryForSegment:(unsigned long long)arg1;	// IMP=0x001000000011bb04
- (void)_persistEntitlementsDataToMemory:(id)arg1 segment:(unsigned long long)arg2 logKey:(id)arg3;	// IMP=0x001000000011b9ba
- (void)_verifyAccountForCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 logKey:(id)arg2 notifyInternal:(_Bool)arg3 notifyExternal:(_Bool)arg4;	// IMP=0x001000000011b6f7
- (void)_setCachedSubscriptionEntitlementsDictionary:(id)arg1 segment:(unsigned long long)arg2 logKey:(id)arg3 notifyInternal:(_Bool)arg4 notifyExternal:(_Bool)arg5;	// IMP=0x001000000011b4ab
- (void)_setCachedSubscriptionEntitlements:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 notifyInternal:(_Bool)arg4 notifyExternal:(_Bool)arg5;	// IMP=0x001000000011b15b
- (void)_removeCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x001000000011b021
- (void)_notifyChangeForAppStoreWithSubscriptionEntitlementsDictionary:(id)arg1 logKey:(id)arg2;	// IMP=0x001000000011aac4
- (void)_notifyChangeToSegment:(unsigned long long)arg1 logKey:(id)arg2 subscriptionEntitlementsDictionary:(id)arg3 notifyInternal:(_Bool)arg4 notifyExternal:(_Bool)arg5;	// IMP=0x001000000011a8e9
- (void)_markCachedSubscriptionEntitlementsAsExpiredForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x001000000011a79e
- (id)_logKeyForSegment:(unsigned long long)arg1 logUUID:(id)arg2;	// IMP=0x001000000011a75f
- (id)_logKeyForSegment:(unsigned long long)arg1;	// IMP=0x001000000011a6fc
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x001000000011a2ca
- (void)_getSubscriptionEntitlementsResponseWithSubscriptionRequestInfo:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001194a9
- (void)_getSubscriptionEntitlementsForSubscriptionInfo:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000118edf
- (id)_cachedSubscriptionEntitlementsResponseForSegment:(unsigned long long)arg1 logKey:(id)arg2 expired:(_Bool *)arg3;	// IMP=0x0010000000118cd2
- (void)_cachedSubscriptionEntitlementsResponseForSegment:(unsigned long long)arg1 logKey:(id)arg2 completionHander:(CDUnknownBlockType)arg3;	// IMP=0x0010000000118bb0
- (id)_cachedSubscriptionEntitlementsPathForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x0010000000118918
- (id)_cachedSubscriptionEntitlementsDictionaryForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x00100000001186dd
- (id)_cachedAccountIdForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x0010000000118646
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000001181c9
- (void)_clearAdPlatformsArcadeStatusCondition;	// IMP=0x0010000000117f5d
- (void)_setAdPlatformsArcadeStatusCondition;	// IMP=0x0010000000117c3f
- (void)updateAdPlatformsArcadeStatusCondition;	// IMP=0x0010000000117a7b
- (void)updateAdPlatformsArcadeStatusConditionForEntitlementsResponse:(id)arg1;	// IMP=0x00100000001175a7
- (void)setCachedSubscriptionEntitlements:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x0010000000117479
- (void)markCachedSubscriptionEntitlementsAsExpiredForSegment:(unsigned long long)arg1 logKey:(id)arg2;	// IMP=0x00100000001173bf
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withToken:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001170f9
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withToken:(id)arg2 ignoreCaches:(_Bool)arg3 notifyInternal:(_Bool)arg4 withResultHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000116ebb
- (void)appStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000116d76
- (void)dealloc;	// IMP=0x0010000000116c92
- (id)init;	// IMP=0x00100000001164f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
