//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVPlayerInterstitialEventController, AVPlayerInterstitialEventMonitor, AVTimeRange, AVTimeRangeCollection;
@protocol AVInterstitialControllerDelegateManager, NSObject;

__attribute__((visibility("hidden")))
@interface AVInterstitialController : NSObject
{
    id <NSObject> _playerItemTimeJumpedObserver;	// 8 = 0x8
    id <NSObject> _playerInterstitialEventsChangedObserver;	// 16 = 0x10
    id <NSObject> _playerInterstitialCurrentEventChangedObserver;	// 24 = 0x18
    AVPlayer *_player;	// 32 = 0x20
    AVPlayer *_interstitialPlayer;	// 40 = 0x28
    id <AVInterstitialControllerDelegateManager> _delegateManager;	// 48 = 0x30
    AVTimeRangeCollection *_interstitialTimeRangeCollection;	// 56 = 0x38
    double _continuationTimeAfterInterstitial;	// 64 = 0x40
    CDUnknownBlockType _didEnterInterstitialTimeRangeBlock;	// 72 = 0x48
    CDUnknownBlockType _didLeaveInterstitialTimeRangeBlock;	// 80 = 0x50
    CDUnknownBlockType _didLeaveRequiredInterstitialTimeRangeBlock;	// 88 = 0x58
    CDUnknownBlockType _skipInterstitialTimeRangeBlock;	// 96 = 0x60
    AVPlayerInterstitialEventMonitor *_eventMonitor;	// 104 = 0x68
    AVPlayerInterstitialEventController *_eventController;	// 112 = 0x70
    AVObservationController *_kvo;	// 120 = 0x78
    AVObservationController *_kvoPlayerItem;	// 128 = 0x80
    AVTimeRange *_interstitialTimeRangeInProgress;	// 136 = 0x88
    id _interstitialBoundaryTimeObserver;	// 144 = 0x90
}

+ (id)interstitialQueue;	// IMP=0x0060000000059017
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1 reversePlaybackEndTime:(CDStruct_1b6d18a9)arg2 forwardPlaybackEndTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x0060000000058b37
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1;	// IMP=0x0060000000117577
- (void).cxx_destruct;	// IMP=0x0000000000056ae3
@property(retain, nonatomic) id interstitialBoundaryTimeObserver; // @synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver;
@property(retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // @synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress;
@property(retain, nonatomic) AVObservationController *kvoPlayerItem; // @synthesize kvoPlayerItem=_kvoPlayerItem;
@property(retain, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(retain, nonatomic) AVPlayerInterstitialEventController *eventController; // @synthesize eventController=_eventController;
@property(retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(copy, nonatomic) CDUnknownBlockType skipInterstitialTimeRangeBlock; // @synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveRequiredInterstitialTimeRangeBlock; // @synthesize didLeaveRequiredInterstitialTimeRangeBlock=_didLeaveRequiredInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveInterstitialTimeRangeBlock; // @synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterInterstitialTimeRangeBlock; // @synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock;
@property(readonly, nonatomic) double continuationTimeAfterInterstitial; // @synthesize continuationTimeAfterInterstitial=_continuationTimeAfterInterstitial;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(nonatomic) __weak id <AVInterstitialControllerDelegateManager> delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayer *interstitialPlayer; // @synthesize interstitialPlayer=_interstitialPlayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (double)_pendingTimeBoundary;	// IMP=0x00000000000568cd
- (void)_setPendingTimeBoundary:(double)arg1;	// IMP=0x0000000000056829
- (void)didPresentInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000565a8
- (void)willPresentInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000563d1
- (void)skipInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000056189
- (void)didBeginOrResumePlayback;	// IMP=0x000000000005612b
- (_Bool)_shouldSkipInterstitialTimeRange:(id)arg1;	// IMP=0x000000000005608a
- (id)nextInterstitialTimeRange;	// IMP=0x0000000000056021
@property(readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
- (void)_stopObservingInterstitialTimeRanges;	// IMP=0x0000000000055e20
- (void)_startObservingInterstitialTimeRanges;	// IMP=0x0000000000055d95
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;	// IMP=0x0000000000055d28
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;	// IMP=0x0000000000055cfa
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1;	// IMP=0x0000000000055c50
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)arg1;	// IMP=0x0000000000055c04
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000055aad
- (double)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x0000000000055713
@property(readonly, nonatomic) _Bool requiresLinearPlayback;
@property(readonly, nonatomic) _Bool shouldEnforceInterstitialPolicy;
- (void)_updateInterstitialTimeRangeCollection;	// IMP=0x00000000000552de
- (void)cancelCurrentPlayerInterstitialEvent;	// IMP=0x00000000000551d1
@property(readonly, nonatomic) double timeRemainingInCurrentInterstitial;
- (double)elapsedTimeWithinCurrentInterstitial;	// IMP=0x0000000000054ff4
- (double)elapsedTimeForInterstitialPlayer;	// IMP=0x0000000000054ef1
- (_Bool)isLive;	// IMP=0x0000000000054e4f
- (id)currentOrEstimatedDate;	// IMP=0x0000000000054dc7
@property(readonly, nonatomic) double currentDisplayTime;
- (double)currentTime;	// IMP=0x0000000000054c5c
- (id)currentItem;	// IMP=0x0000000000054c0c
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x0000000000054bb5
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x0000000000054b5e
- (void)invalidate;	// IMP=0x00000000000548b7
- (void)dealloc;	// IMP=0x0000000000054879
- (id)init;	// IMP=0x0000000000054433
- (_Bool)loadDurationOfCurrentOrNextInterstitialEvent:(CDUnknownBlockType)arg1;	// IMP=0x00000000000581f2
- (id)timeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x0000000000057fa5
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x0000000000057d9a
- (void)updateSynthesizedInterstitialTimeRanges;	// IMP=0x0000000000057c3f
- (id)_copySynthesizedInterstitialTimeRanges;	// IMP=0x0000000000057844

@end

