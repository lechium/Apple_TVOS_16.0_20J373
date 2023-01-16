//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, AVAudioSessionMediaPlayerOnly, AVOutputContext, AVPixelBufferAttributeMediator, AVPlayerItem, AVPlayerMediaSelectionCriteria, AVPlayerPlaybackCoordinator, AVPlayerRateState, AVQueuePlayer, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol AVBlockScheduler, AVLoggingIdentifier, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerInternal : NSObject
{
    _Bool fullyInitializedAndNotDeallocating;	// 8 = 0x8
    AVWeakReference *weakReference;	// 16 = 0x10
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *stateDispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *figConfigurationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *layerInteractionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *currentItemPropertyUpdateQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *layersQ;	// 72 = 0x48
    struct OpaqueCMTimebase *proxyTimebase;	// 80 = 0x50
    _Bool logPerformanceData;	// 88 = 0x58
    id didFinishSuspensionNotificationToken;	// 96 = 0x60
    id didEnterBackgroundNotificationToken;	// 104 = 0x68
    id willEnterForegroundNotificationToken;	// 112 = 0x70
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;	// 120 = 0x78
    void *IAPDCallbackToken;	// 128 = 0x80
    struct OpaqueFigSimpleMutex *prerollIDMutex;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *configurationQueue;	// 144 = 0x90
    id layerForegroundingChangeToken;	// 152 = 0x98
    id <AVBlockScheduler> KVOChangeSerializer;	// 160 = 0xa0
    long long status;	// 168 = 0xa8
    NSError *error;	// 176 = 0xb0
    AVPlayerItem *currentItem;	// 184 = 0xb8
    AVPlayerItem *lastItem;	// 192 = 0xc0
    NSMutableSet *items;	// 200 = 0xc8
    NSArray *queueModifications;	// 208 = 0xd0
    NSMutableDictionary *pendingFigPlayerProperties;	// 216 = 0xd8
    AVAudioSession *audioSession;	// 224 = 0xe0
    NSDictionary *vibrationPattern;	// 232 = 0xe8
    AVOutputContext *outputContext;	// 240 = 0xf0
    _Bool IOwnTheFigPlayer;	// 248 = 0xf8
    _Bool allowsVideoPlaybackWhileInBackground;	// 249 = 0xf9
    long long audiovisualBackgroundPlaybackPolicy;	// 256 = 0x100
    NSMutableArray *handlersToCallWhenReadyToPlay;	// 264 = 0x108
    _Bool shouldReduceResourceUsage;	// 272 = 0x110
    long long resourceConservationLevelWhilePaused;	// 280 = 0x118
    NSString *playerRole;	// 288 = 0x120
    NSString *externalPlaybackVideoGravity;	// 296 = 0x128
    long long actionAtItemEnd;	// 304 = 0x130
    float volume;	// 312 = 0x138
    float userVolume;	// 316 = 0x13c
    float minRateForAudioPlayback;	// 320 = 0x140
    float maxRateForAudioPlayback;	// 324 = 0x144
    _Bool autoSwitchStreamVariants;	// 328 = 0x148
    _Bool preparesItemsForPlaybackAsynchronously;	// 329 = 0x149
    _Bool allowsOutOfBandTextTrackRendering;	// 330 = 0x14a
    _Bool muted;	// 331 = 0x14b
    _Bool closedCaptionDisplayEnabled;	// 332 = 0x14c
    _Bool appliesMediaSelectionCriteriaAutomatically;	// 333 = 0x14d
    _Bool dynamicallyChoosesInitialVariant;	// 334 = 0x14e
    _Bool limitsBandwidthForCellularAccess;	// 335 = 0x14f
    _Bool usesAudioOnlyModeForExternalPlayback;	// 336 = 0x150
    _Bool allowsPixelBufferPoolSharing;	// 337 = 0x151
    _Bool disallowsAMRAudio;	// 338 = 0x152
    _Bool disallowsHardwareAcceleratedVideoDecoder;	// 339 = 0x153
    _Bool layerDestinationIsTVOut;	// 340 = 0x154
    _Bool preventsDisplaySleepDuringVideoPlayback;	// 341 = 0x155
    _Bool preventsAutomaticBackgroundingDuringVideoPlayback;	// 342 = 0x156
    _Bool disallowsVideoLayerDisplayCompositing;	// 343 = 0x157
    _Bool allowsExternalPlayback;	// 344 = 0x158
    _Bool usesExternalPlaybackWhileExternalScreenIsActive;	// 345 = 0x159
    NSString *captionPipelineStrategy;	// 352 = 0x160
    NSString *audioOutputDeviceUniqueID;	// 360 = 0x168
    NSString *clientName;	// 368 = 0x170
    NSString *STSLabel;	// 376 = 0x178
    NSString *multichannelAudioStrategy;	// 384 = 0x180
    long long clientPriority;	// 392 = 0x188
    _Bool PIPModePossible;	// 400 = 0x190
    _Bool isDisplayingClosedCaptions;	// 401 = 0x191
    _Bool externalPlaybackActive;	// 402 = 0x192
    _Bool airPlayVideoActive;	// 403 = 0x193
    _Bool isConnectedToPhysicalSecondScreen;	// 404 = 0x194
    _Bool outputObscuredDueToInsufficientExternalProtection;	// 405 = 0x195
    long long externalProtectionStatus;	// 408 = 0x198
    NSString *ancillaryPerformanceInformationForDisplay;	// 416 = 0x1a0
    AVPlayerRateState *rateState;	// 424 = 0x1a8
    int rateChangeIdentifier;	// 432 = 0x1b0
    float defaultRate;	// 436 = 0x1b4
    struct CGSize currentItemPresentationSize;	// 440 = 0x1b8
    _Bool currentItemNonForcedSubtitlesEnabled;	// 456 = 0x1c8
    unsigned long long preferredVideoDecoderGPURegistryID;	// 464 = 0x1d0
    _Bool disallowsAutoPauseOnRouteRemovalIfNoAudio;	// 472 = 0x1d8
    _Bool ensuresActiveAudioSessionWhenStartingPlayback;	// 473 = 0x1d9
    _Bool hostApplicationInForeground;	// 474 = 0x1da
    _Bool preservesAudioSessionSampleRate;	// 475 = 0x1db
    _Bool silencesOtherPlaybackDuringPIP;	// 476 = 0x1dc
    _Bool prefersPlayingSilentlyWhenConflictingWithOtherPlayback;	// 477 = 0x1dd
    _Bool suppressesAudioRendering;	// 478 = 0x1de
    _Bool isInterstitialPlayer;	// 479 = 0x1df
    _Bool isSilencedDueToConflictWithOtherPlayback;	// 480 = 0x1e0
    NSNumber *mxSessionID;	// 488 = 0x1e8
    NSArray *videoTargets;	// 496 = 0x1f0
    _Bool shouldWaitForVideoTarget;	// 504 = 0x1f8
    AVPlayerPlaybackCoordinator *playbackCoordinator;	// 512 = 0x200
    _Bool clientRequestedPlaybackCoordinator;	// 520 = 0x208
    NSString *backgroundPIPAuthorizationToken;	// 528 = 0x210
    _Bool rateDidChangeNotificationIncludesExtendedDiagnosticPayload;	// 536 = 0x218
    id <AVLoggingIdentifier> loggingIdentifier;	// 544 = 0x220
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;	// 552 = 0x228
    AVQueuePlayer *interstitialPlayer;	// 560 = 0x230
    struct OpaqueFigPlayerInterstitialCoordinator *interstitialEventCoordinator;	// 568 = 0x238
    NSMutableArray *videoLayers;	// 576 = 0x240
    NSMutableArray *subtitleLayers;	// 584 = 0x248
    NSMutableArray *closedCaptionLayers;	// 592 = 0x250
    NSHashTable *avPlayerLayers;	// 600 = 0x258
    int nextPrerollIDToGenerate;	// 608 = 0x260
    int pendingPrerollID;	// 612 = 0x264
    CDUnknownBlockType prerollCompletionHandler;	// 616 = 0x268
    id currentItemSuppressesVideoLayersNotificationToken;	// 624 = 0x270
    id currentItemPreferredPixelBufferAttributesNotificationToken;	// 632 = 0x278
    struct OpaqueFigPlayer *figPlayer;	// 640 = 0x280
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;	// 648 = 0x288
    _Bool needsToCreateFigPlayer;	// 656 = 0x290
    _Bool allowsLegibleFallbackForAllAudibleMediaSelections;	// 657 = 0x291
    AVPlayerMediaSelectionCriteria *cachedFigLegibleFallbackMediaSelectionCriteriaProperty;	// 664 = 0x298
    NSArray *itemsInFigPlayQueue;	// 672 = 0x2a0
    NSArray *expectedAssetTypes;	// 680 = 0x2a8
    _Bool reevaluateBackgroundPlayback;	// 688 = 0x2b0
    _Bool hadAssociatedOnscreenPlayerLayerWhenSuspended;	// 689 = 0x2b1
    _Bool suspensionExpected;	// 690 = 0x2b2
    _Bool rateUpdateDuringTransitionDecided;	// 691 = 0x2b3
    _Bool videoLayersAreAttached;	// 692 = 0x2b4
    struct OpaqueCMClock *figSourceClock;	// 696 = 0x2b8
    NSString *captionRenderingStrategy;	// 704 = 0x2c0
    NSArray *displaysUsedForPlayback;	// 712 = 0x2c8
    long long overlappedPlaybackID;	// 720 = 0x2d0
    AVPlayerItem *overlappedPlaybackItem;	// 728 = 0x2d8
}

- (void).cxx_destruct;	// IMP=0x000000000003359e

@end

