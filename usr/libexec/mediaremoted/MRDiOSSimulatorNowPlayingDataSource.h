//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSApplicationStateMonitor, MRContentItem, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface MRDiOSSimulatorNowPlayingDataSource
{
    BKSApplicationStateMonitor *_appStateMonitor;	// 8 = 0x8
    NSSet *_cachedNowPlayingClients;	// 16 = 0x10
    MRContentItem *_cachedNowPlayingContentItem;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000edfcb
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MRContentItem *cachedNowPlayingContentItem; // @synthesize cachedNowPlayingContentItem=_cachedNowPlayingContentItem;
- (void);	// IMP=0x00100000000edf6d
@property(retain, nonatomic) NSSet *cachedNowPlayingClients; // @synthesize cachedNowPlayingClients=_cachedNowPlayingClients;
@property(retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
- (id)_mostRecentlyUpdatedClient;	// IMP=0x00100000000edad9
- (void)_notifyDelegateNowPlayingPlaybackStateDidChange;	// IMP=0x00100000000ed941
- (void)_notifyDelegateNowPlayingApplicationDidChange;	// IMP=0x00100000000ed7a9
- (void)_reloadCachedNowPlayingItem;	// IMP=0x00100000000ed619
- (void)_reloadCachedNowPlayingClients;	// IMP=0x00100000000ed4f4
- (void)_frontmostApplicationDidChange:(id)arg1;	// IMP=0x00100000000ed4e2
- (void)_unregisterNotifications;	// IMP=0x00100000000ed449
- (void)_registerNotifications;	// IMP=0x00100000000ed389
- (void)_activeNowPlayingClientDidChangeNotification:(id)arg1;	// IMP=0x00100000000ed377
- (void)_nowPlayingClientDidUnregisterNotification:(id)arg1;	// IMP=0x00100000000ed365
- (void)_nowPlayingClientDidRegisterNotification:(id)arg1;	// IMP=0x00100000000ed353
- (_Bool)shouldSendCommand:(id)arg1;	// IMP=0x00100000000ed34b
- (_Bool)nowPlayingApplicationIsInterrupted;	// IMP=0x00100000000ed343
- (_Bool)nowPlayingApplicationIsPlaying;	// IMP=0x00100000000ed21b
- (id)nowPlayingApplicationDisplayID;	// IMP=0x00100000000ed0dd
- (int)nowPlayingApplicationPID;	// IMP=0x00100000000ed06f
- (void)dealloc;	// IMP=0x00100000000ed014
- (id)init;	// IMP=0x00100000000ecdc9

@end
