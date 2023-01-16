//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSMutableArray, NSMutableDictionary;
@protocol MRDNowPlayingStateObserverDelegate, OS_dispatch_queue;

@interface MRDNowPlayingStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_observedNowPlayingNotifications;	// 16 = 0x10
    id _observedVolumeControlNotificationToken;	// 24 = 0x18
    unsigned int _registeredForNowPlayingCount;	// 32 = 0x20
    unsigned int _registeredForVolumeAvailabilityCount;	// 36 = 0x24
    _Bool _wantsCoalescedStateChanged;	// 40 = 0x28
    id <MRDNowPlayingStateObserverDelegate> _delegate;	// 48 = 0x30
    NSMutableDictionary *_coalescingStates;	// 56 = 0x38
    MRDNowPlayingServer *_npServer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000007369c
@property(readonly, nonatomic) MRDNowPlayingServer *npServer; // @synthesize npServer=_npServer;
@property(retain, nonatomic) NSMutableDictionary *coalescingStates; // @synthesize coalescingStates=_coalescingStates;
@property(readonly, nonatomic) _Bool wantsCoalescedStateChanged; // @synthesize wantsCoalescedStateChanged=_wantsCoalescedStateChanged;
@property(nonatomic) __weak id <MRDNowPlayingStateObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onQueue_notifyCoalescedPlayerPath:(id)arg1;	// IMP=0x001000000007344b
- (id)_onQueue_stateForPlayerPath:(id)arg1;	// IMP=0x00100000000731f1
- (void)_removeNowPlayingNotifications;	// IMP=0x001000000007306b
- (void)_addNowPlayingNotification:(id)arg1 selector:(SEL)arg2;	// IMP=0x0010000000072fc6
- (void)_onQueue_setReceiveVolumeControlUpdates:(_Bool)arg1;	// IMP=0x0010000000072d4c
- (void)_onQueue_setReceiveNowPlayingUpdates:(_Bool)arg1;	// IMP=0x0010000000072aef
- (void)_setReceiveUpdates:(_Bool)arg1 forSource:(long long)arg2;	// IMP=0x0010000000072a62
- (void)_handleRemovePlayer:(id)arg1;	// IMP=0x00100000000728c5
- (void)_handlePlayerStateChanged:(id)arg1;	// IMP=0x001000000007270b
- (void)_handleContentItemArtworkChanged:(id)arg1;	// IMP=0x0010000000072512
- (void)_handleContentItemsChanged:(id)arg1;	// IMP=0x0010000000072319
- (void)_handlePlaybackQueueCapabilitiesChanged:(id)arg1;	// IMP=0x0010000000072133
- (void)_handlePlaybackQueueChanged:(id)arg1;	// IMP=0x0010000000071f3f
- (void)_handleNowPlayingPlaybackStateChanged:(id)arg1;	// IMP=0x0010000000071cd1
- (void)_handleSupportedCommandsDidChange:(id)arg1;	// IMP=0x0010000000071add
- (void)_handleDefaultSupportedCommandsChanged:(id)arg1;	// IMP=0x0010000000071915
- (void)_handleVolumeAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x0010000000071797
- (void)_handleRemoveClient:(id)arg1;	// IMP=0x00100000000716e0
- (void)_handleApplicationClientStateChanged:(id)arg1;	// IMP=0x0010000000071539
- (void)_handleNowPlayingPlayerDidChange:(id)arg1;	// IMP=0x0010000000071485
- (void)_handleNowPlayingClientDidChange:(id)arg1;	// IMP=0x00100000000713d1
- (_Bool)_shouldNotifyChange:(id)arg1;	// IMP=0x00100000000713c9
- (void)stopReceivingUpdatesForSource:(long long)arg1;	// IMP=0x00100000000713b2
- (void)beginReceivingUpdatesForSource:(long long)arg1;	// IMP=0x0010000000071398
- (id)debugDescription;	// IMP=0x00100000000711e5
- (void)dealloc;	// IMP=0x0010000000071185
- (id)init;	// IMP=0x0010000000071075

@end

