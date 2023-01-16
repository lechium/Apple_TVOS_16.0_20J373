//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, JaliscoArtworkImporter, JaliscoLibrary, JaliscoMediaUpdateOperation, ML3MusicLibrary, NSMutableArray;
@protocol ICDCloudMusicLibraryJaliscoUpdateTaskHelper, OS_dispatch_queue;

@interface JaliscoRequestHandler : NSObject
{
    ICConnectionConfiguration *_configuration;	// 8 = 0x8
    ML3MusicLibrary *_musicLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateLibraryQueue;	// 32 = 0x20
    id <ICDCloudMusicLibraryJaliscoUpdateTaskHelper> _updateTaskHelper;	// 40 = 0x28
    JaliscoLibrary *_jaliscoLibrary;	// 48 = 0x30
    JaliscoArtworkImporter *_artworkImporter;	// 56 = 0x38
    JaliscoMediaUpdateOperation *_updateLibraryOperation;	// 64 = 0x40
    NSMutableArray *_updateLibraryCompletionHandlers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000086f2a
@property(readonly, copy, nonatomic) NSMutableArray *updateLibraryCompletionHandlers; // @synthesize updateLibraryCompletionHandlers=_updateLibraryCompletionHandlers;
@property(retain, nonatomic) JaliscoMediaUpdateOperation *updateLibraryOperation; // @synthesize updateLibraryOperation=_updateLibraryOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateLibraryQueue; // @synthesize updateLibraryQueue=_updateLibraryQueue;
@property(readonly, nonatomic) JaliscoArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (id)_DAAPMediaKindFromJaliscoSupportedMediaKind:(long long)arg1;	// IMP=0x0010000000086ed2
- (void)_updateJaliscoLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086e10
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086d43
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086b7b
- (void)cancelAllOperationsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x0010000000086a48
- (void)cancelAllOperations;	// IMP=0x0010000000086a34
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086916
- (void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000867f8
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000866da
- (void)increasePriorityForAllOperations;	// IMP=0x001000000008655e
- (void)decreasePriorityForAllOperations;	// IMP=0x00100000000863e2
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000862ce
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086152
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x001000000008613c
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000085b5f
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000857b1
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000085760
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x001000000008570f
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000855f0
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000854d1
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000852c5
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008507d
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008474b
- (float)updateProgress;	// IMP=0x0010000000084674
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x0010000000084554
- (id)jaliscoLibraryWithReason:(long long)arg1;	// IMP=0x00100000000842b1
@property(readonly, nonatomic) JaliscoLibrary *jaliscoLibrary; // @synthesize jaliscoLibrary=_jaliscoLibrary;
- (void)cancelPendingChanges;	// IMP=0x0010000000084289
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000084121
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x00100000000840a3
- (void)dealloc;	// IMP=0x0010000000083f04
- (id)initWithConfiguration:(id)arg1 updateTaskHelper:(id)arg2;	// IMP=0x0010000000083d95

@end
