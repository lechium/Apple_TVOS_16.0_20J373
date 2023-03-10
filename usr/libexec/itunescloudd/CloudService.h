//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;
@protocol ICDHandlerProviding;

@interface CloudService : NSObject
{
    NSString *_requestingBundleID;	// 8 = 0x8
    id <ICDHandlerProviding> _handlerProvider;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007adf9
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak id <ICDHandlerProviding> handlerProvider; // @synthesize handlerProvider=_handlerProvider;
@property(copy, nonatomic) NSString *requestingBundleID; // @synthesize requestingBundleID=_requestingBundleID;
- (void)_updateSagaLibraryWithReason:(long long)arg1 allowNoisyAuthPrompt:(_Bool)arg2 forConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007ab68
- (void)listCloudServerOperations;	// IMP=0x001000000007ab24
- (void)fetchEnhancedAudioOfflineKeys;	// IMP=0x001000000007aae0
- (void)refreshEnhancedAudioSharedKeys;	// IMP=0x001000000007aa9c
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007a8a4
- (void)updatePinnedSubscribedPlaylistsWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a6d8
- (void)disableCloudLibraryWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a55f
- (void)authenticateForConfiguration:(id)arg1 startInitialImport:(_Bool)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007a44d
- (void)loadMissingArtworkForConfiguration:(id)arg1;	// IMP=0x001000000007a18a
- (void)loadUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079fb6
- (void)loadIsUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079ddc
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079bb0
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079984
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079750
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x00100000000795e9
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000079482
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x001000000007931b
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079123
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078f2b
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078c19
- (void)importArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078907
- (void)updateArtistHeroImagesForConfiguration:(id)arg1;	// IMP=0x00100000000786d8
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000078571
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x001000000007840a
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000781ff
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007801a
- (void)loadBooksForStoreIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000077c25
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000779e6
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000777a7
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000077647
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x00100000000774e7
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007731d
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000077153
- (void)loadJaliscoUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076f71
- (void)loadIsJaliscoUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076d97
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000076b7d
- (void)removeJaliscoLibraryForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076973
- (void)setupInitialJaliscoPoolingForConfiguration:(id)arg1;	// IMP=0x0010000000076657
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007654d
- (void)sdk_addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007633c
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000760c1
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000075e46
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000075c3b
- (void)uploadCloudPlaylistPropertiesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075a88
- (void)uploadCloudItemPropertiesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000758d5
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000756ca
- (void)loadLastKnownEnableICMLErrorStatusForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000754f7
- (void)removeItemsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000075312
- (void)addStorePlaylistWithGlobalID:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000750cf
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000074e7c
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000074c69
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000074a9f
- (void)removePlaylistsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000748ba
- (void)publishPlaylistWithSagaID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007468f
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000744b0
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000074277
- (void)sdk_setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000074000
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000073dba
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000073b1c
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 configuration:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000007388e
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073665
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073426
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000731e7
- (void)loadArtworkInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000072fa8
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000072e48
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000072ce8
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000072b88
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000729be
- (void)importScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000727f4
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007262a
- (void)loadSagaUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072445
- (void)loadIsSagaUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007226b
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000720a1
- (void)deauthenticateForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071ee7
- (void)updateJaliscoLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000071d1d
- (void)isSagaAuthenticatedForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071c30
- (void)setPreferredVideoQuality:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000071b88
- (void)updateSagaLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000719b7
- (void)setupInitialSagaPoolingForConfiguration:(id)arg1;	// IMP=0x00100000000717a8
- (id)initWithHandlerProvider:(id)arg1;	// IMP=0x00100000000716e4

@end

