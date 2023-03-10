//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVURLAsset, NSError, NSNotification, NSString, NSTimer, TVPContentKeySession, TVPMediaItemTimingData, TVPStateMachine, TVSCacheDeletePurgeID;
@protocol OS_dispatch_queue, TVPMediaItem;

__attribute__((visibility("hidden")))
@interface TVPMediaItemLoader : NSObject
{
    _Bool _allowsCellularUsage;	// 8 = 0x8
    _Bool _allowsConstrainedNetworkUsage;	// 9 = 0x9
    _Bool _cleanedUp;	// 10 = 0xa
    _Bool _AVAudioSessionConfiguredAfterMediaServicesReset;	// 11 = 0xb
    NSObject<TVPMediaItem> *_mediaItem;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    TVPMediaItemTimingData *_timingData;	// 40 = 0x28
    AVURLAsset *_existingAVAsset;	// 48 = 0x30
    id _reportingHierarchyToken;	// 56 = 0x38
    AVURLAsset *_AVAsset;	// 64 = 0x40
    TVPStateMachine *_stateMachine;	// 72 = 0x48
    AVURLAsset *_AVAssetInternal;	// 80 = 0x50
    TVPContentKeySession *_contentKeySession;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_assetInternalAccessQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_assetLoadContextAccessQueue;	// 104 = 0x68
    unsigned long long _assetLoadContext;	// 112 = 0x70
    unsigned long long _refCount;	// 120 = 0x78
    NSString *_mediaItemLoaderGUID;	// 128 = 0x80
    TVSCacheDeletePurgeID *_cacheDeletePurgeID;	// 136 = 0x88
    NSTimer *_diskSpaceMonitorTimer;	// 144 = 0x90
    NSNotification *_savedMediaServerResetUserNotification;	// 152 = 0x98
}

+ (id)tempDirURL;	// IMP=0x0010000000079f84
+ (void)removeTemporaryDownloadDirectory;	// IMP=0x0010000000079eb3
+ (id)loaderForMediaItem:(id)arg1;	// IMP=0x0010000000079c13
+ (void)initialize;	// IMP=0x0010000000079adc
- (void).cxx_destruct;	// IMP=0x0000000000088d43
@property(retain, nonatomic) NSNotification *savedMediaServerResetUserNotification; // @synthesize savedMediaServerResetUserNotification=_savedMediaServerResetUserNotification;
@property(nonatomic) _Bool AVAudioSessionConfiguredAfterMediaServicesReset; // @synthesize AVAudioSessionConfiguredAfterMediaServicesReset=_AVAudioSessionConfiguredAfterMediaServicesReset;
@property(nonatomic) _Bool cleanedUp; // @synthesize cleanedUp=_cleanedUp;
@property(retain, nonatomic) NSTimer *diskSpaceMonitorTimer; // @synthesize diskSpaceMonitorTimer=_diskSpaceMonitorTimer;
@property(retain, nonatomic) TVSCacheDeletePurgeID *cacheDeletePurgeID; // @synthesize cacheDeletePurgeID=_cacheDeletePurgeID;
@property(copy, nonatomic) NSString *mediaItemLoaderGUID; // @synthesize mediaItemLoaderGUID=_mediaItemLoaderGUID;
@property(nonatomic) unsigned long long refCount; // @synthesize refCount=_refCount;
@property(nonatomic) unsigned long long assetLoadContext; // @synthesize assetLoadContext=_assetLoadContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadContextAccessQueue; // @synthesize assetLoadContextAccessQueue=_assetLoadContextAccessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetInternalAccessQueue; // @synthesize assetInternalAccessQueue=_assetInternalAccessQueue;
@property(retain, nonatomic) TVPContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
@property(retain, nonatomic) AVURLAsset *AVAssetInternal; // @synthesize AVAssetInternal=_AVAssetInternal;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) AVURLAsset *AVAsset; // @synthesize AVAsset=_AVAsset;
@property(nonatomic) _Bool allowsConstrainedNetworkUsage; // @synthesize allowsConstrainedNetworkUsage=_allowsConstrainedNetworkUsage;
@property(nonatomic) _Bool allowsCellularUsage; // @synthesize allowsCellularUsage=_allowsCellularUsage;
@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(retain, nonatomic) AVURLAsset *existingAVAsset; // @synthesize existingAVAsset=_existingAVAsset;
@property(retain, nonatomic) TVPMediaItemTimingData *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;	// IMP=0x0000000000088b12
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x0000000000088869
- (void)_cleanUp;	// IMP=0x00000000000883f9
- (void)_diskSpaceMonitorTimerFired:(id)arg1;	// IMP=0x00000000000881c4
- (void)_mediaItemStopPlayback:(id)arg1;	// IMP=0x0000000000087fef
- (void)_mediaItemPlaybackErrorDidOccur:(id)arg1;	// IMP=0x0000000000087d3f
- (void)_stopBackgroundCaching:(id)arg1;	// IMP=0x0000000000087b3a
- (id)_skipKeyNameFromType:(unsigned long long)arg1;	// IMP=0x0000000000087b23
- (id)_rollKeyNameFromType:(unsigned long long)arg1;	// IMP=0x0000000000087b04
- (unsigned long long)_skipTypeFromMetadataItemKey:(id)arg1;	// IMP=0x0000000000087ae4
- (unsigned long long)_rollTypeFromMetadataItemKey:(id)arg1;	// IMP=0x0000000000087a5e
- (id)_stringValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;	// IMP=0x000000000008795b
- (id)_numberValueForKey:(id)arg1 fromMetadata:(id)arg2 andKeyIdentifierMap:(id)arg3;	// IMP=0x0000000000087858
- (id)_productPlacementInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2;	// IMP=0x000000000008774a
- (id)_advisoryInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 withTotalCount:(unsigned long long)arg3;	// IMP=0x0000000000087321
- (id)_skipInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4;	// IMP=0x0000000000086a9a
- (id)_rollInfoFromMetadata:(id)arg1 keyIdentifierMap:(id)arg2 forType:(unsigned long long)arg3 withTotalCount:(unsigned long long)arg4;	// IMP=0x000000000008633f
- (void)_loadMediaItemMetadataAsynchronously;	// IMP=0x00000000000833b2
- (id)_contentKeyRequestParamsFromBase64String:(id)arg1;	// IMP=0x0000000000082cf1
- (id)_tomatoFreshnessFromString:(id)arg1;	// IMP=0x0000000000082c4a
- (id)_advisoryKeyNamesWithCount:(unsigned long long)arg1;	// IMP=0x0000000000082b28
- (id)_skipKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;	// IMP=0x00000000000828f0
- (id)_rollKeyNamesForType:(unsigned long long)arg1 withCount:(unsigned long long)arg2;	// IMP=0x00000000000826d5
- (_Bool)_needToLoadBlockingMetadataKeys;	// IMP=0x0000000000082345
- (id)_metadataKeysToLoad;	// IMP=0x0000000000082237
- (void)_postMediaServicesResetFailureWithNotification:(id)arg1;	// IMP=0x0000000000082119
- (void)_avAudioSessionConfiguredAfterMediaServicesReset;	// IMP=0x000000000008200e
- (void)_avAudioSessionMediaServicesReset:(id)arg1;	// IMP=0x0000000000081f99
- (void)_avAssetMediaServicesReset:(id)arg1;	// IMP=0x0000000000081e23
- (id)_avAssetOptions;	// IMP=0x0000000000081372
- (void)_registerStateMachineHandlers;	// IMP=0x000000000007b803
- (void)loadSHA1DigestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b465
- (id)newPlayerItem;	// IMP=0x000000000007ad03
@property(readonly, nonatomic) _Bool containsStreamingAVAsset;
@property(readonly, copy) NSString *description;
- (void)prepareForPlaybackInitiation;	// IMP=0x000000000007a710
- (void)cleanupIfNecessary;	// IMP=0x000000000007a675
- (void)loadIfNecessary;	// IMP=0x000000000007a5f4
- (void)dealloc;	// IMP=0x000000000007a527
- (id)initWithMediaItem:(id)arg1;	// IMP=0x000000000007a042

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

