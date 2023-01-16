//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudUpdateLibraryOperation, ICConnectionConfiguration, ML3MusicLibrary, NSMutableArray, NSString, SagaArtworkImporter, SagaLibrary;
@protocol ICDCloudMusicLibrarySagaUpdateTaskHelper, OS_dispatch_queue, OS_dispatch_source;

@interface SagaRequestHandler : NSObject
{
    SagaLibrary *_library;	// 8 = 0x8
    SagaArtworkImporter *_artworkImporter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_uploadItemPropertiesQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uploadPlaylistPropertiesQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateCloudLibraryQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    CloudUpdateLibraryOperation *_updateCloudLibraryOperation;	// 56 = 0x38
    NSMutableArray *_updateLibraryCompletionHandlers;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_itemPropertiesCoalescingTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_playlistPropertiesCoalescingTimer;	// 80 = 0x50
    id <ICDCloudMusicLibrarySagaUpdateTaskHelper> _updateTaskHelper;	// 88 = 0x58
    ICConnectionConfiguration *_configuration;	// 96 = 0x60
    ML3MusicLibrary *_musicLibrary;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000006d3cc
- (void)_handleCloudLibraryUpdateOperationFinishedWithError:(id)arg1;	// IMP=0x001000000006d243
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 allowNoisyAuthPrompt:(_Bool)arg3 isExplicitUserAction:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000006c8d7
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c80a
- (id)_library;	// IMP=0x001000000006c7aa
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x001000000006c617
- (float)updateProgress;	// IMP=0x001000000006c582
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006c1d0
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006bf8b
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b9b4
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b65c
- (void)loadArtworkInfoForSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b2ee
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x001000000006b2d3
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x001000000006b2b8
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x001000000006b29d
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b17e
- (void)importScreenshotForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006b05f
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006af40
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x001000000006ae74
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006ac16
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006a9bc
- (void)addStorePlaylistWithGlobalID:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006a771
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006a53d
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006a0e4
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000069e56
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069c11
- (void)removePlaylistsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000699c9
- (void)removeItemsWithSagaIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069781
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069542
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 requestingBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000069229
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000068f49
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000068ce0
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000068aad
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000068857
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000006839d
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000680c8
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 clientIdentity:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000067dc1
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000067ae9
- (void)uploadPlaylistPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x0010000000067a4f
- (void)uploadItemPropertiesWithClientIdentity:(id)arg1 minimumTimeInterval:(double)arg2;	// IMP=0x00100000000679b5
- (void)updatePlaylistPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000677f9
- (void)updateItemPlayDataWithClientIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006763d
- (void)increasePriorityForAllOperations;	// IMP=0x00100000000674d2
- (void)decreasePriorityForAllOperations;	// IMP=0x0010000000067367
- (void)cancelOperations;	// IMP=0x0010000000067292
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006717e
- (void)cancelPendingChanges;	// IMP=0x001000000006716a
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000067002
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0010000000066f84
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0010000000066f06
- (id)initWithConfiguration:(id)arg1 progressObserver:(id)arg2;	// IMP=0x0010000000066bf8
- (id)init;	// IMP=0x0000000000066bb6
- (void)dealloc;	// IMP=0x0010000000066a17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
