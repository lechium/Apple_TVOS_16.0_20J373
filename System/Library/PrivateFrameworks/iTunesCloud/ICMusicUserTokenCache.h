//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICMusicUserTokenCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSMutableDictionary *_cachedUserTokens;	// 24 = 0x18
}

+ (void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x004000000016c447
+ (id)_decodeDeveloperTokenPart:(id)arg1;	// IMP=0x004000000016c0c7
+ (id)sharedCache;	// IMP=0x004000000016c097
- (void).cxx_destruct;	// IMP=0x000000000016b831
- (void)_postLocalChangeNotification;	// IMP=0x000000000016b7ce
- (void)_persistCache;	// IMP=0x000000000016b764
- (void)_loadPersistedCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000016b5c7
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1;	// IMP=0x000000000016b4f3
- (void)setCachedUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000016b3f0
- (void)getCachedUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016b31e
- (void)dealloc;	// IMP=0x000000000016b29f
- (id)_init;	// IMP=0x000000000016b17b

@end

