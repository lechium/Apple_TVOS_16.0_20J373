//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CFXPreferences, __CFPrefsWeakObservers;

__attribute__((visibility("hidden")))
@interface CFPrefsSource : NSObject
{
    _CFXPreferences *_containingPreferences;	// 8 = 0x8
    struct __CFDictionary *_dict;	// 16 = 0x10
    __CFPrefsWeakObservers *_observers;	// 24 = 0x18
    _Atomic long long _generationCount;	// 32 = 0x20
    _Atomic _Atomic unsigned int *shmemEntry;	// 40 = 0x28
    _Atomic unsigned int lastKnownShmemState;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 52 = 0x34
    _Bool _isSearchList;	// 56 = 0x38
}

- (void)dealloc;	// IMP=0x00000000000e3535
- (struct __CFString *)copyOSLogDescription;	// IMP=0x00000000000e3450
- (id)description;	// IMP=0x00000000000e32b0
- (struct __CFString *)container;	// IMP=0x00000000000e32a8
- (_Bool)isByHost;	// IMP=0x00000000000e32a5
- (struct __CFString *)domainIdentifier;	// IMP=0x00000000000e329d
- (struct __CFString *)userIdentifier;	// IMP=0x00000000000e3295
- (void)setFileProtectionClass:(int)arg1;	// IMP=0x00000000000e3294
- (void)setBackupDisabled:(_Bool)arg1;	// IMP=0x00000000000e3293
- (void)setAccessRestricted:(_Bool)arg1;	// IMP=0x00000000000e3292
- (void)setDaemonCacheEnabled:(_Bool)arg1;	// IMP=0x00000000000e3291
- (void)alreadylocked_clearCache;	// IMP=0x00000000000e3290
- (_Bool)isDirectModeEnabled;	// IMP=0x00000000000e328d
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e328c
- (_Bool)isVolatile;	// IMP=0x00000000000e3289
- (_Bool)managed;	// IMP=0x00000000000e3286
- (void)unlock;	// IMP=0x00000000000e327d
- (void)lock;	// IMP=0x00000000000e3274
- (long long)generationCount;	// IMP=0x00000000000e326f
- (long long)alreadylocked_generationCount;	// IMP=0x00000000000e326a
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x00000000000e3269
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x00000000000e3258
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e324f
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1 sourceDictionary:(struct __CFDictionary *)arg2 cloudKeyEvaluator:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e315a
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x00000000000e30d2
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x00000000000e2f34
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000e2f33
- (void)setStoreName:(struct __CFString *)arg1;	// IMP=0x00000000000e2f32
- (void)setConfigurationPath:(struct __CFString *)arg1;	// IMP=0x00000000000e2f31
- (_Bool)synchronize;	// IMP=0x00000000000e2f2e
- (void *)copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000000e2ee6
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x00000000000e2cea
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;	// IMP=0x00000000000e2827
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x00000000000e2120
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;	// IMP=0x00000000000e1fff
- (int)alreadylocked_updateObservingRemoteChanges;	// IMP=0x00000000000e1ffc
- (id)copyVolatileSourceWithContainingPreferences:(id)arg1;	// IMP=0x00000000000e1cc0
- (id)initWithContainingPreferences:(id)arg1;	// IMP=0x00000000000e1c4a

@end

