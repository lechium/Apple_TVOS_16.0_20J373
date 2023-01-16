//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class ICPlayActivityController, ICStoreRequestContext, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCModelRadioPlaybackContext, MPCModelRadioPlaybackQueue, MPCPlaybackRequestEnvironment, NSDictionary, NSString;
@protocol MPMutableIdentifierListSection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioQueueFeeder : MPQueueFeeder
{
    id <MPMutableIdentifierListSection> _section;	// 8 = 0x8
    MPCModelRadioPlaybackQueue *_playbackQueue;	// 16 = 0x10
    MPCModelRadioPlaybackContext *_playbackContext;	// 24 = 0x18
    _Bool _needsSectionUpdate;	// 32 = 0x20
    unsigned long long _backgroundTaskIdentifier;	// 40 = 0x28
    unsigned long long _backgroundTasks;	// 48 = 0x30
    MPAVItem *_currentItem;	// 56 = 0x38
    _Bool _hasReachedTracklistEnd;	// 64 = 0x40
    _Bool _supportsLoadingAdditionalItems;	// 65 = 0x41
    NSString *_lastCleanPlayedIdentifier;	// 72 = 0x48
    NSString *_lastPlayedIdentifier;	// 80 = 0x50
    MPCModelRadioPersonalizationResponse *_lastResponse;	// 88 = 0x58
    _Bool _mayHaveRestrictedContent;	// 96 = 0x60
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 104 = 0x68
    long long _queueGeneration;	// 112 = 0x70
    NSString *_siriAssetInfo;	// 120 = 0x78
    ICUserIdentityStore *_observedIdentityStore;	// 128 = 0x80
    ICStoreRequestContext *_storeRequestContext;	// 136 = 0x88
    ICPlayActivityController *_playActivityController;	// 144 = 0x90
    CDUnknownBlockType _finalTracklistLoadingCompletionHandler;	// 152 = 0x98
    _Bool _hasSignedOut;	// 160 = 0xa0
}

+ (id)sharedQueue;	// IMP=0x00100000001b7c7a
- (void).cxx_destruct;	// IMP=0x00000000001b473e
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;	// IMP=0x00000000001b46e4
- (void)_repersonalizeCurrentTracks;	// IMP=0x00000000001b4541
- (void)_responseDidInvalidate;	// IMP=0x00000000001b44e2
- (void)_removeRestrictedTracks;	// IMP=0x00000000001b3ef2
- (void)_removeAllTracks;	// IMP=0x00000000001b3c16
- (void)_observePersonalizationResponse:(id)arg1;	// IMP=0x00000000001b3a97
- (void)_loadTracksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b37fd
- (_Bool)_isTransientLoadingError:(id)arg1;	// IMP=0x00000000001b3762
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b2a65
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b24d9
- (id)_errorForRequest:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001b1bbe
- (void)_endObservingIdentityStoreForSignOut;	// IMP=0x00000000001b1b33
- (void)_endBackgroundTaskAssertion;	// IMP=0x00000000001b1a92
- (void)_detectSignOutForIdentityStore:(id)arg1;	// IMP=0x00000000001b18cf
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;	// IMP=0x00000000001b1364
- (void)_beginObservingIdentityStoreForSignOut;	// IMP=0x00000000001b126d
- (void)_beginBackgroundTaskAssertion;	// IMP=0x00000000001b1083
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x00000000001b1024
- (void)_responseDidInvalidateNotification:(id)arg1;	// IMP=0x00000000001b0f87
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;	// IMP=0x00000000001b0eea
- (void)_allowCellularStreamingDidChangeNotification:(id)arg1;	// IMP=0x00000000001b0e8b
- (void)_updateAdditionalLoadingSupport;	// IMP=0x00000000001b0d23
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000001b0be5
- (id)firstModelPlayEvent;	// IMP=0x00000000001b0b50
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b070a
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;	// IMP=0x00000000001b06fe
- (id)updatedPlaybackContext;	// IMP=0x00000000001b06e9
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;	// IMP=0x00000000001b05cb
- (void)loadAdditionalItemsWithRequest:(id)arg1 forSection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b02ce
- (long long)prefetchThresholdForSection:(id)arg1;	// IMP=0x00000000001b027c
- (_Bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;	// IMP=0x00000000001b0223
- (id)itemForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000001afe97
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000001afdf7
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001af84b
- (_Bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000001af843
@property(readonly, nonatomic) _Bool containsTransportableContent;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (void)didSignificantlyChangeItem:(id)arg1;	// IMP=0x00000000001af30f
- (id)supplementalPlaybackContextWithReason:(long long)arg1;	// IMP=0x00000000001aee3b
- (long long)supplementalPlaybackContextBehavior;	// IMP=0x00000000001aee30
- (_Bool)canSkipItem:(id)arg1 reason:(id *)arg2;	// IMP=0x00000000001aec64
- (_Bool)canJumpToItem:(id)arg1 reason:(id *)arg2;	// IMP=0x00000000001aec0f
- (void)itemDidBeginPlayback:(id)arg1;	// IMP=0x00000000001ae974
- (long long)itemCount;	// IMP=0x00000000001ae957
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ae8bb
- (void)dealloc;	// IMP=0x00000000001ae75a
- (id)init;	// IMP=0x00000000001ae5cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
