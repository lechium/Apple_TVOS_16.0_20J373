//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InstallAttributionDatabaseStore, NSMutableDictionary, NSString, TaskQueue, URLBag;
@protocol OS_dispatch_queue;

@interface InstallAttributionManager : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    InstallAttributionDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
    NSMutableDictionary *_logKeyDict;	// 40 = 0x28
    NSMutableDictionary *_paramsDict;	// 48 = 0x30
}

+ (void)registerInstallAttributionDatabaseCleanTask;	// IMP=0x00200000001add2c
+ (void)registerInstallAttributionPingbackRetryTask;	// IMP=0x00100000001aafd0
+ (id)sharedManager;	// IMP=0x00100000001a46b0
- (void).cxx_destruct;	// IMP=0x00200000001af6f7
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001af5d1
- (id)sanitizedError:(id)arg1;	// IMP=0x00100000001af513
- (_Bool)_installAttributionShouldSendDevPingback;	// IMP=0x00100000001af4b3
- (_Bool)_installAttributionShouldUseProxy;	// IMP=0x00100000001af424
- (id)_getMescalSignedAuthValueForUrl:(id)arg1;	// IMP=0x00100000001aef6c
- (id)_getProxyHeaderForURL:(id)arg1;	// IMP=0x00100000001aee12
- (id)_createConnectProxyConfig;	// IMP=0x00100000001aeb75
- (void)_removeUnregisteredInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x00100000001ae9f1
- (void)_removeInstallAttributionParamsBeforeDate:(id)arg1 isLowFidelity:(_Bool)arg2;	// IMP=0x00100000001ae862
- (void)_removeInstallAttributionImpressionsBeforeDate:(id)arg1;	// IMP=0x00100000001ae71b
- (void)_cleanDatabase;	// IMP=0x00100000001ae0d4
- (void)_registerInstallAttributionDatabaseCleanTaskIfNeeded;	// IMP=0x00100000001adfee
- (void)_sendMaturePingbacksWithXPCActivity:(id)arg1;	// IMP=0x00100000001ac902
- (void)sendTestPingbacksForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ab33c
- (void)_registerInstallAttributionPingbackRetryTaskIfNeeded;	// IMP=0x00100000001aaea7
- (void)_incrementRetryCountForPingback:(id)arg1;	// IMP=0x00100000001aac76
- (void)_removePingback:(id)arg1;	// IMP=0x00100000001aaa3a
- (void)kickPingbackTask;	// IMP=0x00100000001aaa28
- (_Bool)cleanTestPingbacksForApp:(id)arg1;	// IMP=0x00100000001aa85b
- (id)retrieveTestPingbacksForApp:(id)arg1;	// IMP=0x00100000001aa583
- (_Bool)addMockPingback:(id)arg1;	// IMP=0x00100000001aa3b6
- (void)setDeveloperPingbackURL:(id)arg1 forApp:(id)arg2;	// IMP=0x00100000001aa081
- (void)updatePingbackWithConversionValue:(id)arg1 forApp:(id)arg2 withDeveloperPingbackURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a9bc3
- (void)setPingbackRegisteredForApp:(id)arg1 withDeveloperPingbackURL:(id)arg2;	// IMP=0x00100000001a996e
- (void)addPingbacks:(id)arg1;	// IMP=0x00100000001a93d8
- (void)addPingback:(id)arg1;	// IMP=0x00100000001a8f4b
- (void)cacheInstallAttributionParams:(id)arg1 forFetchPostbackURL:(id)arg2;	// IMP=0x00100000001a8f35
- (void)sendImpressionSentAnalyticsEventWithDicts:(id)arg1;	// IMP=0x00100000001a8b0f
- (void)sendDifferingImpressionAnalyticsEventWithDict:(id)arg1 sourceIsCache:(_Bool)arg2;	// IMP=0x00100000001a8922
- (id)getParamsForFetchingPostbacksForApp:(id)arg1 andFetchPostbackURL:(id)arg2;	// IMP=0x00100000001a8244
- (void)fetchPingbackInfoFor:(id)arg1 withLogKey:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a793c
- (void)retryFetchingPingbackFor:(id)arg1;	// IMP=0x00100000001a723c
- (void)removeFetchedPingbackInfoForApp:(id)arg1 andFetchPostbackURL:(id)arg2;	// IMP=0x00100000001a6fbe
- (void)addPingbackFetchInfo:(id)arg1 withLogKey:(id)arg2;	// IMP=0x00100000001a6a65
- (void)removeParamsForApp:(id)arg1;	// IMP=0x00100000001a6806
- (id)campaignIdWithinPermissibleRange:(long long)arg1;	// IMP=0x00100000001a65c9
- (id)addParams:(id)arg1 fromBundleId:(id)arg2 overrideCampaignLimit:(_Bool)arg3;	// IMP=0x00100000001a5f1d
- (id)getMultiParamsForApp:(id)arg1;	// IMP=0x00100000001a5dc7
- (void)purgeImpressionsFromProcessName:(id)arg1;	// IMP=0x00100000001a5bf2
- (void)finalizeImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a52d7
- (void)addImpression:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a4887
- (id)init;	// IMP=0x00100000001a4735

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

