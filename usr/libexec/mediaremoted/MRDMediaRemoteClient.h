//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDMediaRemoteUIService, MRDPairingHandler, MRDTaskAssertion, MRPlaybackQueueClient, MRXPCConnection, MRXPCConnectionMonitor, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, OS_dispatch_queue, OS_dispatch_source;

@interface MRDMediaRemoteClient : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSArray *_applicationPickedRoutes;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSMutableArray *_assertions;	// 40 = 0x28
    NSOperationQueue *_relayingMessages;	// 48 = 0x30
    unsigned long long _entitlements;	// 56 = 0x38
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 64 = 0x40
    NSMutableArray *_subscribedWakingPlayerPaths;	// 72 = 0x48
    MRXPCConnectionMonitor *_connectionMonitor;	// 80 = 0x50
    _Bool _isActive;	// 88 = 0x58
    _Bool _keepAlive;	// 89 = 0x59
    _Bool _hasRequestedLegacyNowPlayingInfo;	// 90 = 0x5a
    _Bool _hasRequestedSupportedCommands;	// 91 = 0x5b
    unsigned int _hardwareRemoteBehavior;	// 92 = 0x5c
    unsigned int _routeDiscoveryMode;	// 96 = 0x60
    unsigned int _outputDeviceDiscoveryMode;	// 100 = 0x64
    id <MRDXPCMessageHandling> _messageHandler;	// 104 = 0x68
    id <MRDMediaRemoteClientDelegate> _delegate;	// 112 = 0x70
    MRXPCConnection *_connection;	// 120 = 0x78
    MRDTaskAssertion *_currentTaskAssertion;	// 128 = 0x80
    NSString *_processName;	// 136 = 0x88
    unsigned long long _routeDiscoveryCount;	// 144 = 0x90
    MRDMediaRemoteUIService *_remoteUIService;	// 152 = 0x98
    MRDPairingHandler *_pairingHandler;	// 160 = 0xa0
    MRPlaybackQueueClient *_playbackQueueRequests;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000000fa5e4
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) _Bool hasRequestedSupportedCommands; // @synthesize hasRequestedSupportedCommands=_hasRequestedSupportedCommands;
@property(nonatomic) _Bool hasRequestedLegacyNowPlayingInfo; // @synthesize hasRequestedLegacyNowPlayingInfo=_hasRequestedLegacyNowPlayingInfo;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) MRDPairingHandler *pairingHandler; // @synthesize pairingHandler=_pairingHandler;
@property(retain, nonatomic) MRDMediaRemoteUIService *remoteUIService; // @synthesize remoteUIService=_remoteUIService;
@property(nonatomic) unsigned int outputDeviceDiscoveryMode; // @synthesize outputDeviceDiscoveryMode=_outputDeviceDiscoveryMode;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) unsigned long long routeDiscoveryCount; // @synthesize routeDiscoveryCount=_routeDiscoveryCount;
@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) MRDTaskAssertion *currentTaskAssertion; // @synthesize currentTaskAssertion=_currentTaskAssertion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) MRXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <MRDMediaRemoteClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MRDXPCMessageHandling> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void)_postNotification:(id)arg1;	// IMP=0x00100000000fa31d
- (void)_resumeConnection;	// IMP=0x00100000000f9e62
- (void)_wakeDevice:(_Bool)arg1 dismissScreenSaver:(_Bool)arg2 reason:(id)arg3;	// IMP=0x00100000000f9c89
- (id)_runAssertionName;	// IMP=0x00100000000f9c4f
- (void)_invalidate;	// IMP=0x00100000000f9ba9
- (void)_handleXPCMessage:(id)arg1;	// IMP=0x00100000000f9b37
- (void)connectionDidResume:(id)arg1;	// IMP=0x00100000000f9b25
- (id)createNowPlayingClient;	// IMP=0x00100000000f9aaa
- (void)_relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f9534
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2 resultCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f9335
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2;	// IMP=0x00100000000f9320
- (void)sendRemoteControlCommandWithoutRedirection:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f7f2e
- (void)sendRemoteControlCommand:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f6e8d
- (_Bool)takeAssertionAndBlessForReason:(id)arg1;	// IMP=0x00100000000f6db3
- (_Bool)takeAssertion:(long long)arg1 forReason:(id)arg2 duration:(double)arg3;	// IMP=0x00100000000f668d
- (void)setWantsAssertionsForNotificationsWithPlayerPath:(id)arg1;	// IMP=0x00100000000f65ce
- (_Bool)notificationRequiresTaskAssertionForPlayerPath:(id)arg1;	// IMP=0x00100000000f6501
- (void)postNotification:(id)arg1;	// IMP=0x00100000000f63b1
- (_Bool)isAllowedAccessToDataFromPlayerPath:(id)arg1;	// IMP=0x00100000000f63a9
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f60c6
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x00100000000f5f32
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x00100000000f5dc7
- (_Bool)isEntitledFor:(unsigned long long)arg1;	// IMP=0x00100000000f5da5
@property(readonly, nonatomic) _Bool isMediaRemoteDaemon;
@property(readonly, nonatomic) _Bool canBeNowPlaying;
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f560c
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSData *auditToken;
@property(readonly, nonatomic) unsigned int euid;
@property(readonly, nonatomic) int pid;
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000f463c

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

