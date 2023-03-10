//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLEngineLibrary, CPLEnginePushRepository, CPLEngineScheduler, CPLEngineStore, NSMutableSet, NSString;

@interface CPLDirectPushChangeSession
{
    _Bool _didPushSomeChange;	// 8 = 0x8
    _Bool _pushedBatchesCanLowerQuota;	// 9 = 0x9
    NSString *_lastSeenLibraryVersion;	// 16 = 0x10
    CPLEngineLibrary *_engineLibrary;	// 24 = 0x18
    CPLEngineStore *_store;	// 32 = 0x20
    CPLEnginePushRepository *_pushRepository;	// 40 = 0x28
    CPLEngineScheduler *_scheduler;	// 48 = 0x30
    NSMutableSet *_scopeIdentifiersInThisSession;	// 56 = 0x38
}

+ (id)selfCrashResetReason;	// IMP=0x002000000009ccc1
- (void).cxx_destruct;	// IMP=0x002000000009cd8d
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b814
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009af18
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a7bb
- (id)clientWorkDescription;	// IMP=0x001000000009a7ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

