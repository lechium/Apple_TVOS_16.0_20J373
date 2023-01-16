//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDevice.h>

@class MRAVOutputContext, MRAVOutputDevice, MRDOriginForwarder, MRDeviceInfo, MROrigin, MROutputContextController, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDAVOutputContextExternalDevice : MRExternalDevice
{
    unsigned int _connectionState;	// 8 = 0x8
    MRDeviceInfo *_deviceInfo;	// 16 = 0x10
    MRDOriginForwarder *_originForwarder;	// 24 = 0x18
    NSMutableArray *_pendingCommitRequests;	// 32 = 0x20
    MROutputContextController *_outputContextController;	// 40 = 0x28
    NSMutableSet *_clientBundleIDs;	// 48 = 0x30
    NSArray *subscribedPlayerPaths;	// 56 = 0x38
    MRAVOutputDevice *_designatedGroupLeader;	// 64 = 0x40
    MRAVOutputContext *_outputContext;	// 72 = 0x48
    MROrigin *_origin;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_serialQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workerQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 104 = 0x68
    CDUnknownBlockType _connectionStateCallback;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;	// 120 = 0x78
    CDUnknownBlockType _outputDevicesUpdatedCallback;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;	// 136 = 0x88
    CDUnknownBlockType _outputDevicesRemovedCallback;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;	// 152 = 0x98
    CDUnknownBlockType _volumeCallback;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;	// 168 = 0xa8
    CDUnknownBlockType _volumeControlCapabilitiesCallback;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;	// 184 = 0xb8
}

+ (id)_resolveReason:(id)arg1 uid:(id)arg2 name:(id)arg3 requestID:(id)arg4;	// IMP=0x00200000000dad1d
+ (void)_createPlayerForClient:(id)arg1 playerPath:(id)arg2 deviceInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d29d5
+ (void)_createPlayerAndWaitForCanBeNowPlaying:(id)arg1 deviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d1a2a
+ (void)_createPlayerAndWaitForConnection:(id)arg1 command:(id)arg2 deviceInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d0ab2
+ (void)_sendCommandPreview:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000d02f1
+ (void)prewarmApp:(id)arg1 origin:(id)arg2 deviceInfo:(id)arg3;	// IMP=0x00100000000cd202
+ (void)initialPrewarm;	// IMP=0x00100000000ccd55
+ (void)initialize;	// IMP=0x00100000000ccac5
- (void).cxx_destruct;	// IMP=0x00200000000db325
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) MRAVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
@property(retain, nonatomic) MRAVOutputDevice *designatedGroupLeader; // @synthesize designatedGroupLeader=_designatedGroupLeader;
- (void)setSubscribedPlayerPaths:(id)arg1;	// IMP=0x00100000000db0fb
- (id)subscribedPlayerPaths;	// IMP=0x00100000000db0ea
- (void)_onQueue_destroyPlayerPathsForOrigin:(id)arg1;	// IMP=0x00100000000dadd8
- (id)_resolveReason:(id)arg1;	// IMP=0x00100000000dac6b
- (void)_maybeForwardOriginToLocalOrigin:(id)arg1;	// IMP=0x00100000000da9b6
- (void)commitOutputDeviceToContextIfNeededWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d9b8b
- (id)outputDeviceForUID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d994e
- (_Bool)verifyGroupLeader:(id)arg1;	// IMP=0x00100000000d94f7
- (void)verifyGroupLeaderForReason:(id)arg1;	// IMP=0x00100000000d92e1
- (void)cleanUp;	// IMP=0x00100000000d92cd
- (void)_reevaluateDeviceInfo;	// IMP=0x00100000000d9233
- (void)clusterController:(id)arg1 clusterTypeDidChange:(unsigned int)arg2;	// IMP=0x00100000000d8ea0
- (void)localClusterTypeDidChangeNotification:(id)arg1;	// IMP=0x00100000000d8df3
- (void)anyDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000d8d78
- (void)_notifyActiveSessionMaybeWillBeHijackedByNativePlaybackFromOutputContextModification:(id)arg1;	// IMP=0x00100000000d8bf9
- (void)outputContextDidAddLocalDeviceNotification:(id)arg1;	// IMP=0x00100000000d8be7
- (void)outputContextRequestToAddLocalOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000d8bd5
- (void)anyOutputContextDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000d8ad0
- (void)outputContextDataSourceVolumeDidChangeNotification:(id)arg1;	// IMP=0x00100000000d8822
- (void);	// IMP=0x00100000000d85a2
- (void)outputContextDataSourceDidRemoveOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000d770d
- (void)outputContextDataSourceDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000d7575
- (void)outputContextDataSourceOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x00100000000d7417
- (void)registerForNotifications;	// IMP=0x00100000000d711d
- (void)sendClientUpdatesConfigMessage;	// IMP=0x00100000000d7117
- (id)currentClientUpdatesConfigMessage;	// IMP=0x00100000000d710f
- (id)errorForCurrentState;	// IMP=0x00100000000d7107
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x00100000000d7101
- (void)setWantsSystemEndpointNotifications:(_Bool)arg1;	// IMP=0x00100000000d70fb
- (_Bool)wantsSystemEndpointNotifications;	// IMP=0x00100000000d70f3
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;	// IMP=0x00100000000d70ed
- (_Bool)wantsOutputDeviceNotifications;	// IMP=0x00100000000d70e5
- (void)setWantsVolumeNotifications:(_Bool)arg1;	// IMP=0x00100000000d70df
- (_Bool)wantsVolumeNotifications;	// IMP=0x00100000000d70d7
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;	// IMP=0x00100000000d70d1
- (_Bool)wantsNowPlayingArtworkNotifications;	// IMP=0x00100000000d70c9
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;	// IMP=0x00100000000d70c3
- (_Bool)wantsNowPlayingNotifications;	// IMP=0x00100000000d70bb
- (_Bool)isUsingSystemPairing;	// IMP=0x00100000000d70b3
- (_Bool)isPaired;	// IMP=0x00100000000d70ab
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000d70a5
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d709f
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d7099
- (id)supportedMessages;	// IMP=0x00100000000d706b
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d7003
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d6ffd
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d6ff7
- (void)unpair;	// IMP=0x00100000000d6ff1
- (void)disconnect:(id)arg1;	// IMP=0x00100000000d6d74
- (id)_generateDeviceInfoWithDesignatedGroupLeader:(id)arg1 outputContext:(id)arg2;	// IMP=0x00100000000d688e
- (void)connectWithOptions:(unsigned int)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000000d61a1
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;	// IMP=0x00100000000d610f
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000d5157
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d503c
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d4cea
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d4bc5
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d4a88
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d494b
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d480e
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d46d1
- (void)setVolumeChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000d4594
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d439e
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d41cd
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d3d38
- (void)_handlePlaybackSessionRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d3b18
- (void)_handlePlaybackQueueRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d373d
- (void)_sendMessageForPlayerPath:(id)arg1 timeout:(double)arg2 reason:(id)arg3 factory:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d341f
- (void)sendMessageWithType:(unsigned long long)arg1 playerPath:(id)arg2 timeout:(double)arg3 reason:(id)arg4 factory:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000d31ef
- (void)_createPlayerAndWaitForCanBeNowPlaying:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d1994
- (void)_createPlayerAndWaitForConnection:(id)arg1 command:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d0894
- (id)_createResolvedPlayerPathFromPlayerPath:(id)arg1;	// IMP=0x00100000000d05a7
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cf6de
- (void)setDeviceInfo:(id)arg1;	// IMP=0x00100000000ce9ad
- (id)uid;	// IMP=0x00100000000ce4de
- (void)setConnectionState:(unsigned int)arg1;	// IMP=0x00100000000ce2c2
- (unsigned int)connectionState;	// IMP=0x00100000000ce1fb
- (id)deviceInfo;	// IMP=0x00100000000ce0dd
- (id)customOrigin;	// IMP=0x00100000000cdfbf
- (_Bool)supportsIdleDisconnection;	// IMP=0x00100000000cdfb7
- (long long)port;	// IMP=0x00100000000cdfaf
- (id)hostName;	// IMP=0x00100000000cdfa7
- (id)name;	// IMP=0x00100000000cde81
@property(readonly, nonatomic) _Bool containsLocalDevice;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;	// IMP=0x00100000000cd97d
- (void)dealloc;	// IMP=0x00100000000cca3d
- (id)initWithOutputContext:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x00100000000cc7b3

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

