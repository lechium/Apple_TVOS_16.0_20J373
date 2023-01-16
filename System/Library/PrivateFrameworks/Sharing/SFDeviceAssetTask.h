//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSError, NSMutableArray, SFDeviceAssetQuery, SFDeviceAssetRequestConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFDeviceAssetTask : NSObject
{
    _Bool _useProcessLocalCache;	// 8 = 0x8
    _Bool _queryResultCalled;	// 9 = 0x9
    _Bool _downloadCompletionCalled;	// 10 = 0xa
    SFDeviceAssetQuery *_deviceAssetQuery;	// 16 = 0x10
    SFDeviceAssetRequestConfiguration *_configuration;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSMutableArray *_deviceQueryParameters;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timer;	// 48 = 0x30
    NSBundle *_matchBundle;	// 56 = 0x38
    NSBundle *_imperfectMatchBundle;	// 64 = 0x40
    NSBundle *_fallbackBundle;	// 72 = 0x48
    NSBundle *_cachedBundle;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000067425
@property(nonatomic) _Bool downloadCompletionCalled; // @synthesize downloadCompletionCalled=_downloadCompletionCalled;
@property(nonatomic) _Bool queryResultCalled; // @synthesize queryResultCalled=_queryResultCalled;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSBundle *cachedBundle; // @synthesize cachedBundle=_cachedBundle;
@property(readonly, nonatomic) NSBundle *fallbackBundle; // @synthesize fallbackBundle=_fallbackBundle;
@property(readonly, nonatomic) NSBundle *imperfectMatchBundle; // @synthesize imperfectMatchBundle=_imperfectMatchBundle;
@property(readonly, nonatomic) NSBundle *matchBundle; // @synthesize matchBundle=_matchBundle;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMutableArray *deviceQueryParameters; // @synthesize deviceQueryParameters=_deviceQueryParameters;
@property(readonly, nonatomic) _Bool useProcessLocalCache; // @synthesize useProcessLocalCache=_useProcessLocalCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) SFDeviceAssetRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery; // @synthesize deviceAssetQuery=_deviceAssetQuery;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000066f10
- (id)bundleURLFromAssetURL:(id)arg1;	// IMP=0x0000000000066c51
- (void)completeWithBundle:(id)arg1 isFallback:(_Bool)arg2 isCached:(_Bool)arg3;	// IMP=0x00000000000664c2
- (_Bool)completeIfPossible;	// IMP=0x0000000000065f45
- (void)cancelTimeout;	// IMP=0x0000000000065efb
- (_Bool)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isImperfectMatch:(_Bool)arg4 isCached:(_Bool)arg5;	// IMP=0x0000000000065d04
- (_Bool)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isImperfectMatch:(_Bool)arg4 isCached:(_Bool)arg5;	// IMP=0x0000000000065c4e
- (_Bool)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isImperfectMatch:(_Bool)arg4 isCached:(_Bool)arg5;	// IMP=0x0000000000065bbb
- (void)createQueryParameters;	// IMP=0x0000000000065893
- (id)initWithDeviceQuery:(id)arg1 requestConfiguration:(id)arg2 dispatchQueue:(id)arg3 useProcessLocalCache:(_Bool)arg4;	// IMP=0x000000000006554e

@end
