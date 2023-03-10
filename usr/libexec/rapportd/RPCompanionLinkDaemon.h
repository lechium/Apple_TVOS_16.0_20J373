//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUWiFiManager, MISSING_TYPE, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPHomeKitManager, RPMediaControlDaemon, RPNearbyActionV2Advertiser, RPNearbyActionV2Discovery, RPSiriDaemon, RPTextInputDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSUserDefaults *_airplayPrefs;	// 32 = 0x20
    NSMutableDictionary *_bleDevices;	// 40 = 0x28
    SFDeviceDiscovery *_bleActionDiscovery;	// 48 = 0x30
    unsigned int _bleActionDiscoveryID;	// 56 = 0x38
    NSMutableDictionary *_bleClientConnections;	// 64 = 0x40
    SFDeviceDiscovery *_bleDiscovery;	// 72 = 0x48
    unsigned long long _bleDiscoveryControlFlags;	// 80 = 0x50
    _Bool _bleDiscoveryForce;	// 88 = 0x58
    unsigned int _bleDiscoveryID;	// 92 = 0x5c
    _Bool _bleDiscoveryScreenOff;	// 96 = 0x60
    RPNearbyActionV2Advertiser *_bleNearbyActionV2Advertiser;	// 104 = 0x68
    RPNearbyActionV2Discovery *_bleNearbyActionV2Discovery;	// 112 = 0x70
    RPCompanionLinkDevice *_bleNearbyActionV2Device;	// 120 = 0x78
    SFService *_bleNeedsCLinkAdvertiser;	// 128 = 0x80
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 136 = 0x88
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 144 = 0x90
    unsigned int _bleNeedsCLinkScannerID;	// 152 = 0x98
    _Bool _bleProximityDetection;	// 156 = 0x9c
    long long _bleRSSIThreshold;	// 160 = 0xa0
    CUBLEServer *_bleServer;	// 168 = 0xa8
    NSMutableSet *_bleServerConnections;	// 176 = 0xb0
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 184 = 0xb8
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 192 = 0xc0
    _Bool _bonjourAWDLAdvertiserForce;	// 200 = 0xc8
    NSMutableDictionary *_bonjourAWDLDevices;	// 208 = 0xd0
    CUBonjourBrowser *_bonjourBrowser;	// 216 = 0xd8
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 224 = 0xe0
    _Bool _bonjourBrowserAWDLForce;	// 232 = 0xe8
    unsigned long long _bonjourReevaluateNextTicks;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 248 = 0xf8
    NSData *_btAdvAddrData;	// 256 = 0x100
    NSString *_btAdvAddrStr;	// 264 = 0x108
    CUSystemMonitor *_btAdvAddrMonitor;	// 272 = 0x110
    _Bool _prefBTPipeEnabled;	// 280 = 0x118
    CUBluetoothScalablePipe *_btPipe;	// 288 = 0x120
    RPConnection *_btPipeConnection;	// 296 = 0x128
    CUBluetoothScalablePipe *_btPipeHighPriority;	// 304 = 0x130
    unsigned int _cnxIDLast;	// 312 = 0x138
    int _coreDeviceChangedNotifier;	// 316 = 0x13c
    NSString *_deviceAuthTagStr;	// 320 = 0x140
    NSData *_deviceAWDLRandomID;	// 328 = 0x148
    _Bool _discoverPairedDevices;	// 336 = 0x150
    NSData *_discoveryNonceData;	// 344 = 0x158
    SFClient *_duetSyncClient;	// 352 = 0x160
    _Bool _disabled;	// 360 = 0x168
    NSMutableDictionary *_interestEvents;	// 368 = 0x170
    NSMutableDictionary *_interestPeers;	// 376 = 0x178
    MISSING_TYPE *_invalidateCalled;	// 384 = 0x180
    _Bool _invalidateDone;	// 385 = 0x181
    _Bool _fixedSoundBoardNameIssue;	// 386 = 0x182
    NSMutableDictionary *_homeHubDevices;	// 392 = 0x188
    NSData *_homeKitAuthTag;	// 400 = 0x190
    _Bool _homeKitForceGetIdentity;	// 408 = 0x198
    _Bool _homeKitGettingIdentity;	// 409 = 0x199
    NSData *_homeKitIRK;	// 416 = 0x1a0
    NSData *_homeKitLTPK;	// 424 = 0x1a8
    CUHomeKitManager *_homeKitManager;	// 432 = 0x1b0
    NSData *_homeKitRotatingID;	// 440 = 0x1b8
    _Bool _homeKitWaiting;	// 448 = 0x1c0
    NSMutableDictionary *_loopbackRequests;	// 456 = 0x1c8
    unsigned int _loopbackXid;	// 464 = 0x1d0
    CUNetLinkManager *_netLinkManager;	// 472 = 0x1d8
    _Bool _mediaAccessControlKVO;	// 480 = 0x1e0
    _Bool _mediaRemoteIDGetting;	// 481 = 0x1e1
    _Bool _mediaRouteIDGetting;	// 482 = 0x1e2
    _Bool _miscStarted;	// 483 = 0x1e3
    NSMutableSet *_needsAWDLNewPeers;	// 488 = 0x1e8
    NSMutableSet *_needsAWDLRequestIdentifiers;	// 496 = 0x1f0
    NSMutableSet *_needsAWDLSentToPeers;	// 504 = 0x1f8
    NSObject<OS_dispatch_source> *_needsAWDLRequestTimer;	// 512 = 0x200
    _Bool _needsAWDLTransaction;	// 520 = 0x208
    NSObject<OS_os_transaction> *_osTransaction;	// 528 = 0x210
    NSMutableDictionary *_pairedDevices;	// 536 = 0x218
    NSObject<OS_dispatch_source> *_pendingLostBLEDevicesTimer;	// 544 = 0x220
    NSObject<OS_dispatch_source> *_pendingLostNeedsCLinkDevicesTimer;	// 552 = 0x228
    RPConnection *_personalCnx;	// 560 = 0x230
    _Bool _receiveHomeKitPairingUpdated;	// 568 = 0x238
    NSMutableDictionary *_registeredEvents;	// 576 = 0x240
    NSMutableSet *_registeredProfileIDs;	// 584 = 0x248
    NSMutableDictionary *_registeredRequests;	// 592 = 0x250
    RPHomeKitManager *_rpHomeKitManager;	// 600 = 0x258
    NSString *_serviceType;	// 608 = 0x260
    unsigned int _sessionIDLast;	// 616 = 0x268
    _Bool _serverBonjourInfraPairing;	// 620 = 0x26c
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 624 = 0x270
    NSUserDefaults *_soundBoardPrefs;	// 632 = 0x278
    _Bool _soundBoardUserLeader;	// 640 = 0x280
    _Bool _soundBoardUserLeaderKVO;	// 641 = 0x281
    unsigned long long _startTicks;	// 648 = 0x288
    unsigned long long _startTicksFull;	// 656 = 0x290
    RPConnection *_stereoCnx;	// 664 = 0x298
    CUSystemMonitor *_systemMonitor;	// 672 = 0x2a0
    NSMutableDictionary *_tcpClientConnections;	// 680 = 0x2a8
    NSMutableDictionary *_tcpOnDemandClientConnections;	// 688 = 0x2b0
    NSMutableSet *_tcpServerConnections;	// 696 = 0x2b8
    CUTCPServer *_tcpServer;	// 704 = 0x2c0
    NSMutableDictionary *_unauthDevices;	// 712 = 0x2c8
    NSData *_uniqueIDData;	// 720 = 0x2d0
    NSString *_uniqueIDStr;	// 728 = 0x2d8
    CUWiFiManager *_wifiManager;	// 736 = 0x2e0
    unsigned int _xidLast;	// 744 = 0x2e8
    NSMutableSet *_xpcConnections;	// 752 = 0x2f0
    NSXPCInterface *_xpcClientInterface;	// 760 = 0x2f8
    NSXPCInterface *_xpcServerInterface;	// 768 = 0x300
    NSXPCListener *_xpcListener;	// 776 = 0x308
    unsigned int _xpcLastID;	// 784 = 0x310
    NSMutableDictionary *_xpcMatchingMap;	// 792 = 0x318
    _Bool _prefApplyNoiWiFiToUSB;	// 800 = 0x320
    _Bool _prefAppSignIn;	// 801 = 0x321
    _Bool _prefBLEClient;	// 802 = 0x322
    _Bool _prefClientEnabled;	// 803 = 0x323
    _Bool _prefCommunal;	// 804 = 0x324
    _Bool _prefCoreDeviceEnabled;	// 805 = 0x325
    _Bool _prefCoreDevicePaired;	// 806 = 0x326
    _Bool _prefHomeKitConfigured;	// 807 = 0x327
    _Bool _prefHomeKitEnabled;	// 808 = 0x328
    _Bool _prefIgnoreCompanionLinkChecks;	// 809 = 0x329
    _Bool _prefIPEnabled;	// 810 = 0x32a
    unsigned int _prefMaxConnectionCount;	// 812 = 0x32c
    _Bool _prefServerBonjourAlways;	// 816 = 0x330
    _Bool _prefServerBonjourOpportunitistic;	// 817 = 0x331
    _Bool _prefServerEnabled;	// 818 = 0x332
    _Bool _prefServerShouldRun;	// 819 = 0x333
    _Bool _prefUseTargetAuthTag;	// 820 = 0x334
    RPHIDDaemon *_hidDaemon;	// 824 = 0x338
    _Bool _prefHIDEnabled;	// 832 = 0x340
    RPMediaControlDaemon *_mediaControlDaemon;	// 840 = 0x348
    _Bool _prefMediaControlEnabled;	// 848 = 0x350
    RPSiriDaemon *_siriDaemon;	// 856 = 0x358
    _Bool _prefSiriEnabled;	// 864 = 0x360
    RPTextInputDaemon *_textInputDaemon;	// 872 = 0x368
    _Bool _prefTextInputEnabled;	// 880 = 0x370
    _Bool _prefTouchEnabled;	// 881 = 0x371
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 888 = 0x378
    RPCompanionLinkDevice *_localDeviceInfo;	// 896 = 0x380
    NSMutableSet *_activeServers;	// 904 = 0x388
    NSMutableDictionary *_activeSessions;	// 912 = 0x390
    NSDictionary *_destinationIdentifierModelMap;	// 920 = 0x398
    NSDictionary *_destinationIdentifierRelMap;	// 928 = 0x3a0
}

+ (MISSING_TYPE *)sharedCompanionLinkDaemon;	// IMP=0x0020000000008e83
- (void).cxx_destruct;	// IMP=0x0020000000039a2d
@property(readonly, nonatomic) NSDictionary *destinationIdentifierRelMap; // @synthesize destinationIdentifierRelMap=_destinationIdentifierRelMap;
@property(readonly, nonatomic) NSDictionary *destinationIdentifierModelMap; // @synthesize destinationIdentifierModelMap=_destinationIdentifierModelMap;
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x001000000003998f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x0010000000039910
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000003935f
- (long long)_sessionsActiveOnConnection:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x001000000003915f
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x0010000000038dc0
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000388ff
- (void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037c36
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000377bb
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000370de
- (id)_checkForProxyOrLocalDestinations:(id)arg1 eventID:(id)arg2 event:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000036ec0
- (void)_proxyDevice:(id)arg1 loopbackRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000036427
- (void)_createRequestEntryForXid:(id)arg1 requestID:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000360cb
- (void)_existingProxyDeviceUpdated:(id)arg1 event:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x0010000000035b0d
- (id)homeHubDeviceForLaunchInstanceID:(id)arg1;	// IMP=0x0010000000035936
- (void)_proxyLocalDeviceUpdateOnConnection:(id)arg1 launchInstanceID:(id)arg2;	// IMP=0x001000000003578b
- (void)_sendProxyDeviceUpdateToPeer:(id)arg1;	// IMP=0x0010000000035436
- (id)_addProxyIdentifier:(id)arg1 toDictionary:(id)arg2;	// IMP=0x001000000003537c
- (_Bool)_destinationID:(id)arg1 matchesProxyDeviceOnCnx:(id)arg2;	// IMP=0x00100000000351c7
- (_Bool)_proxyDevice:(id)arg1 isEqualTo:(id)arg2;	// IMP=0x00100000000350b2
- (_Bool)_proxyDevice:(id)arg1 receivedRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 cnx:(id)arg6;	// IMP=0x0010000000034cca
- (void)_proxyDeviceRemove:(id)arg1 options:(id)arg2 cnx:(id)arg3;	// IMP=0x00100000000348d8
- (void)_proxyDeviceAdd:(id)arg1 options:(id)arg2 eventID:(id)arg3 deviceInfo:(id)arg4 cnx:(id)arg5;	// IMP=0x00100000000345fc
- (void)_proxyDeviceListUpdated:(id)arg1 content:(id)arg2 options:(id)arg3 cnx:(id)arg4;	// IMP=0x0010000000033f64
- (_Bool)_allowStreamRequest:(id)arg1 xpcCnx:(id)arg2 rpCnx:(id)arg3;	// IMP=0x0010000000033a81
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x00100000000339e5
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x00100000000334e7
- (_Bool)_receivedRequestID:(id)arg1 onXPCCnx:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 unauth:(_Bool)arg6 rpCnx:(id)arg7;	// IMP=0x001000000003334e
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000032f59
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000032f38
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000032f0b
- (void)deregisterRequestID:(id)arg1;	// IMP=0x0010000000032e84
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032cba
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032af0
- (void)_deliverEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5 outError:(id *)arg6;	// IMP=0x00100000000325ee
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x0010000000032361
- (void)_receivedEventID:(id)arg1 onXPCCnx:(id)arg2 event:(id)arg3 options:(id)arg4 unauth:(_Bool)arg5 rpCnx:(id)arg6;	// IMP=0x00100000000321b8
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003163d
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003160e
- (void)deregisterEventID:(id)arg1;	// IMP=0x0010000000031587
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000313bd
- (void)_updatePersonalRequestsStateForHomeHubDevices;	// IMP=0x00100000000313b7
- (void)_updateRoomInfoForHomeHubDevice:(id)arg1 roomName:(id)arg2;	// IMP=0x00100000000313b1
- (void)_updateHomeHubDevices:(id)arg1;	// IMP=0x0010000000030eaa
- (void)_homeHubDeviceRemoved:(id)arg1;	// IMP=0x0010000000030c42
- (void)_homeHubDeviceAdded:(id)arg1;	// IMP=0x00100000000307cc
- (id)_eventForHomeHubDevice:(id)arg1;	// IMP=0x0010000000030527
- (id)_filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x001000000003050e
- (void)_homeKitUpdateUserIdentifiers;	// IMP=0x00100000000302a6
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x001000000002fd21
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x001000000002f78e
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x001000000002ebf2
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x001000000002e8d4
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x001000000002e44d
- (void)_homeKitGetUserInfo:(id)arg1;	// IMP=0x001000000002e2ef
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x001000000002e108
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x001000000002dfc2
- (void)_homeKitGetPairingIdentities;	// IMP=0x001000000002debd
- (void)_homeKitPairingUpdated:(id)arg1;	// IMP=0x001000000002ddf6
- (void)_homeKitEnsureStopped;	// IMP=0x001000000002dc8f
- (void)_homeKitEnsureStarted;	// IMP=0x001000000002d6cc
- (void)_textInputEnsureStopped;	// IMP=0x001000000002d638
- (void)_textInputEnsureStarted;	// IMP=0x001000000002d50a
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x001000000002c7c6
- (void)_siriEnsureStopped;	// IMP=0x001000000002c732
- (void)_siriEnsureStarted;	// IMP=0x001000000002c604
- (void)_reachabilityEnsureStopped;	// IMP=0x001000000002c577
- (void)_reachabilityEnsureStarted;	// IMP=0x001000000002c4a8
- (void)_personalDeviceUpdate;	// IMP=0x001000000002c1a2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000002bf5b
- (unsigned long long)_nearbyActionDeviceActionTypes;	// IMP=0x001000000002bf50
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bd73
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b933
- (void)_miscEnsureStopped;	// IMP=0x001000000002b8bd
- (void)_miscEnsureStarted;	// IMP=0x001000000002b632
- (void)_mediaRouteIDGet;	// IMP=0x001000000002b308
- (void)_mediaRemoteIDGet;	// IMP=0x001000000002afdf
- (void)_mediaControlEnsureStopped;	// IMP=0x001000000002af4b
- (void)_mediaControlEnsureStarted;	// IMP=0x001000000002adbc
- (int)_localMediaAccessControlSetting;	// IMP=0x001000000002ad2e
- (void)_localDeviceCleanup;	// IMP=0x001000000002ac4f
- (void)_localDeviceUpdate;	// IMP=0x0010000000028da9
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x0010000000028bfe
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x0010000000028881
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000002817c
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x0010000000027f4d
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x0010000000027cbf
- (void)_hidEnsureStopped;	// IMP=0x0010000000027c2b
- (void)_hidEnsureStarted;	// IMP=0x0010000000027afd
- (_Bool)_haveActiveServerConnectionsOnAWDL;	// IMP=0x00100000000279c4
- (_Bool)_haveActiveClientConnectionsOnAWDL;	// IMP=0x001000000002783a
- (id)_getAppleID;	// IMP=0x00000000000277fa
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000276a3
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000027133
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x0010000000026f3e
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x0010000000026dd1
- (id)_findMatchingAWDLBonjourDevice:(id)arg1;	// IMP=0x0010000000026c95
- (id)_findWiFiConnectionByID:(id)arg1;	// IMP=0x0010000000026aa5
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x00100000000264a7
- (void)_duetSyncEnsureStopped;	// IMP=0x0010000000026413
- (void)_duetSyncEnsureStarted;	// IMP=0x0010000000026353
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x0010000000026297
- (void)_disconnectUnpairedDevices;	// IMP=0x0010000000025f3f
- (void)_disconnectUnauthConnections;	// IMP=0x0010000000025d94
- (void)_disconnectRemovedSharedHomeDevices;	// IMP=0x0010000000025a3c
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x00100000000254f6
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x00100000000250b1
- (id)_findExistingActiveDevice:(id)arg1;	// IMP=0x0010000000024f33
- (unsigned char)_controlFlagsToNearbyActionType:(unsigned long long)arg1;	// IMP=0x0010000000024f1e
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x0010000000024a12
- (int)_airPlayLeaderStateUncached;	// IMP=0x001000000002470e
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00100000000245a1
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x001000000002431b
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x0010000000023eba
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x0010000000023b89
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x001000000002394a
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x00100000000238ff
- (void)_btPipeConnectionStart;	// IMP=0x00100000000232fb
- (void)_btPipeHandleStateChanged:(id)arg1;	// IMP=0x0010000000023134
- (void)_btPipeEnsureStopped;	// IMP=0x00100000000230b6
- (void)_btPipeTearDown:(id)arg1;	// IMP=0x0010000000022fd7
- (void)_btPipeEnsureStarted;	// IMP=0x0010000000022d6b
- (void)_btPipeSetup:(id)arg1 withPriority:(int)arg2;	// IMP=0x0010000000022b3e
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x0010000000022ac8
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x00100000000224ad
- (void)_bleServerEnsureStopped;	// IMP=0x00100000000222d3
- (void)_bleServerEnsureStarted;	// IMP=0x0010000000022045
- (_Bool)_serverTCPHasActiveConnections;	// IMP=0x001000000002200e
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x0010000000021d1d
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x0010000000021a77
- (id)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x001000000002135e
- (void)_serverTCPEnsureStopped;	// IMP=0x001000000002117c
- (void)_serverTCPEnsureStarted;	// IMP=0x0010000000020f0a
- (_Bool)_serverShouldAdvertiseIdentifiableInfoWhenUnpairedForAirPlayWithLinkType:(int)arg1;	// IMP=0x0010000000020d50
- (void)_serverBTAddressChanged;	// IMP=0x0010000000020bc5
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x0010000000020b31
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x00100000000209db
- (void)_serverReceivedNeedsAWDLEvent:(id)arg1 event:(id)arg2;	// IMP=0x00100000000205c2
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x00100000000202c4
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x00100000000201df
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x001000000001ff1e
- (_Bool)_serverBonjourAWDLAdvertiserShouldRun;	// IMP=0x001000000001f615
- (void)_serverBonjourUpdateTXT;	// IMP=0x001000000001f0e1
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x001000000001ef91
- (id)_serverBonjourAuthTagString;	// IMP=0x001000000001eecc
- (void)_serverBonjourEnsureStopped;	// IMP=0x001000000001ee38
- (void)_serverBonjourEnsureStarted;	// IMP=0x001000000001ec10
- (_Bool)_serverBonjourAWDLShouldRun;	// IMP=0x001000000001eb74
- (_Bool)_serverBonjourShouldRun;	// IMP=0x001000000001eb11
- (void)_processPendingLostNeedsCLinkDevices;	// IMP=0x001000000001e885
- (void)_schedulePendingLostNeedsCLinkDeviceTimer;	// IMP=0x001000000001e73d
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x001000000001e529
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x001000000001df35
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x001000000001dea1
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x001000000001ddc1
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x001000000001d9dd
- (void)_serverNearbyActionV2DiscoveryEnsureStopped;	// IMP=0x001000000001d99f
- (void)_serverNearbyActionV2DiscoveryEnsureStarted;	// IMP=0x001000000001d848
- (_Bool)_serverNearbyActionV2DiscoveryShouldRun;	// IMP=0x001000000001d7c2
- (void)_serverEnsureStopped;	// IMP=0x001000000001d760
- (void)_serverEnsureStarted;	// IMP=0x001000000001d645
- (_Bool)createDeviceToEndpointMappingForDeviceID:(id)arg1 endpointUUID:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000001d63d
- (_Bool)triggerEnhancedDiscoveryForReason:(id)arg1 useCase:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x001000000001d58a
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x001000000001d41d
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x001000000001d2c6
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x001000000001cd7b
- (id)logDictionaryOfStringArrays:(id)arg1 withPrefix:(id)arg2;	// IMP=0x001000000001c9aa
- (void)_clientPurgeUnauthAWDLDevices;	// IMP=0x001000000001c6de
- (void)_clientOnDemandAWDLDiscoveryStartForXPC:(id)arg1;	// IMP=0x001000000001c3f5
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x001000000001bfd9
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x001000000001bee7
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x001000000001b26a
- (void)_clientOnDemandConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x001000000001b0f9
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x001000000001af9e
- (id)_clientCreateConnection:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000198a0
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000019851
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x0010000000018f4f
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x0010000000018b03
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x0010000000017d25
- (id)_clientShouldConnectOverBonjour:(id)arg1 device:(id)arg2 identities:(id)arg3;	// IMP=0x0010000000017941
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x001000000001773e
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x0010000000017676
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x001000000001741d
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x00100000000171b0
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x0010000000016df4
- (_Bool)_clientBonjourCheckLostPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x0010000000016c42
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x001000000001697c
- (_Bool)_clientBonjourCheckFoundPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x00100000000165a3
- (void)_clientBonjourFoundUnauthDevice:(id)arg1 isAWDLDevice:(_Bool)arg2;	// IMP=0x001000000001606d
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x0010000000015d4c
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x0010000000014dba
- (void)_clientBonjourEnsureStopped;	// IMP=0x0010000000014ce5
- (void)_clientBonjourEnsureStarted;	// IMP=0x0010000000014a0e
- (void)_clientSendNeedsAWDLOverWiFi:(_Bool)arg1;	// IMP=0x001000000001444a
- (void)_clientBLENearbyActionV2AdvertiserEnsureStopped;	// IMP=0x0010000000014398
- (void)_clientBLENearbyActionV2AdvertiserRestart;	// IMP=0x00100000000142d8
- (void)_clientBLENearbyActionV2AdvertiserUpdate;	// IMP=0x0010000000014163
- (void)_clientBLENearbyActionV2AdvertiserEnsureStarted;	// IMP=0x0010000000013dc8
- (_Bool)_clientBLENearbyActionV2AdvertiserShouldRun;	// IMP=0x0010000000013bd2
- (id)_clientBLENeedsCLinkTargetAuthTag;	// IMP=0x0010000000013130
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x0010000000012f82
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x0010000000012ecf
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x0010000000012c19
- (void)_clientBLEFamilyDeviceReportChanges;	// IMP=0x0010000000012834
- (void)_processPendingLostBLEDevices;	// IMP=0x00100000000125b1
- (void)_schedulePendingLostBLEDeviceTimer;	// IMP=0x0010000000012469
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2 deviceFlags:(unsigned char)arg3;	// IMP=0x0010000000011b57
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1 deviceFlags:(unsigned char)arg2;	// IMP=0x00100000000111b0
- (_Bool)_clientBLETriggerEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0010000000011008
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x0010000000010d63
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x00100000000106e0
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x00100000000106d5
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x001000000001045c
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x001000000000ffcf
- (void)_clientEnsureStopped;	// IMP=0x001000000000fee5
- (void)_clientEnsureStarted;	// IMP=0x001000000000fdd3
- (_Bool)isNearbyActionV2AdvertiserActive;	// IMP=0x001000000000fdaf
- (void)_updateForXPCServerChange;	// IMP=0x001000000000fb45
- (void)_updateForXPCClientChange;	// IMP=0x001000000000f3f7
- (void)_updateAssertions;	// IMP=0x001000000000f0dd
- (void)_update;	// IMP=0x001000000000ead1
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x001000000000e6b0
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x001000000000e54c
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e1f3
- (void)prefsChanged;	// IMP=0x001000000000d4d4
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000000cf70
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000000cb6c
- (void)_invalidated;	// IMP=0x001000000000c9d0
- (void)_invalidate;	// IMP=0x001000000000c5ab
- (void)invalidate;	// IMP=0x001000000000c547
- (void)_activate;	// IMP=0x001000000000c2a6
- (void)activate;	// IMP=0x001000000000c232
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000009959
- (id)findDeviceFromID:(id)arg1;	// IMP=0x0010000000009737
- (id)findServerClientFromID:(id)arg1 senderIDS:(id)arg2;	// IMP=0x0010000000009299
- (void)_createDestinationIdentifierMaps;	// IMP=0x0010000000008f87
- (id)init;	// IMP=0x0010000000008ed8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

