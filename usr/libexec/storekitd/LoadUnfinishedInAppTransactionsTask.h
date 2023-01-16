//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, _TtC9storekitd6Client;

@interface LoadUnfinishedInAppTransactionsTask
{
    _Bool _forceServerCheck;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
    NSURL *_receiptInstallURL;	// 32 = 0x20
    NSArray *_transactions;	// 40 = 0x28
}

+ (_Bool)_invalidateLegacyTransactionCacheInDataStore:(id)arg1 bundleID:(id)arg2 logKey:(id)arg3;	// IMP=0x00400000000532d4
+ (id)_newDataStore;	// IMP=0x0010000000050a9c
+ (_Bool)invalidateCacheForBundleID:(id)arg1 withLogKey:(id)arg2;	// IMP=0x0010000000050a16
- (void).cxx_destruct;	// IMP=0x002000000005357c
@property(readonly, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(nonatomic) _Bool forceServerCheck; // @synthesize forceServerCheck=_forceServerCheck;
@property(retain, nonatomic) NSURL *receiptInstallURL; // @synthesize receiptInstallURL=_receiptInstallURL;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (_Bool)_invalidateLegacyTransactionCacheInDataStore:(id)arg1;	// IMP=0x001000000005320f
- (_Bool)_cacheLegacyTransactions:(id)arg1 inDataStore:(id)arg2;	// IMP=0x0010000000052dd6
- (id)_cachedLegacyTransactionsFromDataStore:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000529b3
- (void)_fromDataStore:(id)arg1 getCachedAccountToken:(id *)arg2 lastUpdated:(id *)arg3;	// IMP=0x00100000000526ec
- (id)_pendingTransactionsResponseWithParameters:(id)arg1 requestEncoder:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000523e6
- (long long)_pendingTransactionsCountWithParameters:(id)arg1 requestEncoder:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000052088
- (id)_transactionsFromQueueCheckWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000518b7
- (id)_checkServerQueueAndCacheTransactionsWithDataStore:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000515e5
- (_Bool)_ignoreHasEverHadIAPsWithBag:(id)arg1;	// IMP=0x001000000005124d
- (_Bool)_shouldCheckServerQueueWithDataStore:(id)arg1 bag:(id)arg2;	// IMP=0x0010000000050b23
- (void)main;	// IMP=0x00100000000502c7
- (id)initWithClient:(id)arg1;	// IMP=0x001000000005021d

@end

