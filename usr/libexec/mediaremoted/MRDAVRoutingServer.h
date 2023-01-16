//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVHostedRoutingService, MRDAVLocalDeviceCommitManager, MRDAVRoutingDataSource, MRDAVSystemEndpointController, MRDAutoConnectionController, MRDExternalDeviceHomeServer, MRDIdleTopologySimplifier, MROSTransaction, MSVSystemDialog, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MRDAVRoutingServer : NSObject
{
    MRDAutoConnectionController *_autoConnectionController;	// 8 = 0x8
    NSMutableSet *_routeUIDsToIgnorePortStatusFailures;	// 16 = 0x10
    NSDate *_lastClusterConnectionFailureDate;	// 24 = 0x18
    NSMutableSet *_reconnaissanceSessions;	// 32 = 0x20
    NSMutableArray *_mostRecentlyPickedDevices;	// 40 = 0x28
    int _mostRecentStatus;	// 48 = 0x30
    MRDExternalDeviceHomeServer *_homeServer;	// 56 = 0x38
    NSOperationQueue *_workerOperationQueue;	// 64 = 0x40
    MRDAVLocalDeviceCommitManager *_localDeviceCommitManager;	// 72 = 0x48
    MRDIdleTopologySimplifier *_topologySimplifier;	// 80 = 0x50
    _Bool _airplayActive;	// 88 = 0x58
    MRDAVRoutingDataSource *_routingDataSource;	// 96 = 0x60
    MRDAVHostedRoutingService *_hostedRoutingService;	// 104 = 0x68
    MRDAVSystemEndpointController *_systemEndpointController;	// 112 = 0x70
    MSVSystemDialog *_activePasswordDialog;	// 120 = 0x78
    MROSTransaction *_discoveryTransaction;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000ec724
@property(retain, nonatomic) MROSTransaction *discoveryTransaction; // @synthesize discoveryTransaction=_discoveryTransaction;
@property(retain, nonatomic) MSVSystemDialog *activePasswordDialog; // @synthesize activePasswordDialog=_activePasswordDialog;
@property(nonatomic) _Bool airplayActive; // @synthesize airplayActive=_airplayActive;
@property(readonly, nonatomic) MRDAVSystemEndpointController *systemEndpointController; // @synthesize systemEndpointController=_systemEndpointController;
@property(readonly, nonatomic) MRDAVHostedRoutingService *hostedRoutingService; // @synthesize hostedRoutingService=_hostedRoutingService;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_predictGroupLeaderForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec3cb
- (void)_createEndpointForOutputDeviceIDsLegacy:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ebb23
- (void)createHostedEndpointForOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9cbc
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e9caa
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9c93
- (id)_createAirPlaySecuritySettings;	// IMP=0x00100000000e9b6f
- (void)_setApplicationPickedRoutes:(id)arg1 updateRoutes:(_Bool)arg2 forClient:(id)arg3;	// IMP=0x00100000000e9b69
- (id)_preferredIdentifierForMACAddress:(id)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x00100000000e9a67
- (void)_storePassword:(id)arg1 forOutputDevice:(id)arg2;	// IMP=0x00100000000e996b
- (void)_storePassword:(id)arg1 forRoute:(id)arg2;	// IMP=0x00100000000e986f
- (void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00100000000e95c5
- (void)_postExternalScreenDidChange;	// IMP=0x00100000000e94bd
- (_Bool)_setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x00100000000e93b8
- (void)_loadMostRecentlyPicked;	// IMP=0x00100000000e9368
- (void)_saveMostRecentlyPicked;	// IMP=0x00100000000e933a
- (void)_clearPasswordForOutputDevice:(id)arg1;	// IMP=0x00100000000e92f5
- (id)_savedPasswordForOutputDevice:(id)arg1;	// IMP=0x00100000000e92b5
- (id)_existingKeychainAccountForOutputDevice:(id)arg1 password:(id *)arg2;	// IMP=0x00100000000e90b5
- (void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00100000000e9035
- (id)_presentDialogWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e8e9e
- (void)_handleErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x00100000000e8a64
- (void)_launchTVClusterSettings;	// IMP=0x00100000000e88de
- (void)_handleClusterErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x00100000000e83e5
- (_Bool)_shouldIgnorePortStatusFailureForRouteWithUID:(id)arg1 previouslyCachedRouteUID:(id *)arg2;	// IMP=0x00100000000e8158
- (void)_updateSystemRouteDiscoveryMode;	// IMP=0x00100000000e7d7a
- (id)_passwordDialogForRouteWithName:(id)arg1 usingInputType:(long long)arg2;	// IMP=0x00100000000e7b49
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;	// IMP=0x00100000000e7b27
- (void)_unregisterNotifications;	// IMP=0x00100000000e7ad4
- (void)_registerNotifications;	// IMP=0x00100000000e79a0
- (void)_handleAuthorizationRequest:(id)arg1;	// IMP=0x00100000000e718c
- (void)_postRouteStatusDidChangeNotificationForRoute:(id)arg1 newStatus:(int)arg2;	// IMP=0x00100000000e7029
- (void)_failedToConnectToOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000e6c62
- (void)_routingDataSourceRouteStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000000e6a81
- (void)_routingDataSourceExternalScreenDidChangeNotification:(id)arg1;	// IMP=0x00100000000e6a6f
- (void)_routingDataSourcePickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x00100000000e6a21
- (void)_clientInvalidatedNotification:(id)arg1;	// IMP=0x00100000000e69be
- (void)postSystemEndpointDeviceChange:(id)arg1 type:(long long)arg2 originClient:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e6664
- (void)systemEndpointController:(id)arg1 activeSystemEndpointDidChangeForRequest:(id)arg2 type:(long long)arg3;	// IMP=0x00100000000e65bc
- (void)_handleWillStartPlayingInterruptMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e64af
- (void)_handleModifyOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e5bb2
- (void)_handleGetExternalDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e5816
- (void)_handleRemoveFromParentGroup:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e5083
- (void)_handlePredictGroupLeader:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e4ee6
- (void)_handleCreateHostedEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e4a88
- (void)_handleGroupDevicesAndSendCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e43a4
- (void)_handleCreateDirectEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e4122
- (void)_handleCreateEndpointWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e4110
- (void)_handleMigrateFromEndpointToEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e3ae1
- (void)_handleMigrateFromEndpointToOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e3517
- (void)_handleGetOutputContextUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e32fb
- (void)_handleStopNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e31d3
- (void)_handleStartNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1319
- (void)_handleCreateGroupWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1109
- (void)_handleGetVirtualOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e1067
- (void)_handleAddVirtualOutputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0fc5
- (void)_handleResetOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0dbe
- (void)_handleSetNearbyDevice:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0d33
- (void)_handleGetAirplayStatus:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0c4f
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0b7d
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e08ce
- (void)_handleGetHostedEndpointForDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0729
- (void)_handleGetActiveSystemEndpointUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e05cf
- (void)_handleUpdateActiveSystemEndpointUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e0407
- (void)_handleGetRecentAVOutputDeviceUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e037f
- (void)_handleSetRecentAVOutputDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e024a
- (void)_handleGetHostedRoutingXPCEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000e00b6
- (void)_handleGetAirPlaySecuritySettingsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000dffb9
- (void)_handleSetApplicationPickedRoutes:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000dfd23
- (void)_handleUnpickAirPlayRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000dfc75
- (void)_handleClearAllAVRoutePasswordsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df8b3
- (void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df81d
- (void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df77e
- (void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df725
- (void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df5a6
- (void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000df45c
- (void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000ded2c
- (void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000dec47
- (void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000deaf4
- (_Bool)outputDeviceAuthorizationSession:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;	// IMP=0x00100000000deae6
- (void)outputDeviceAuthorizationSession:(id)arg1 didProvideAuthorizationRequest:(id)arg2;	// IMP=0x00100000000de1f8
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000000de0a8
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000dddb9
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ddc7b
- (id)clientsWithApplicationPickedRoutes;	// IMP=0x00100000000dda31
- (id)clientsForApplicationPickedRoute:(id)arg1;	// IMP=0x00100000000dd69c
- (id)applicationPickedRoutes;	// IMP=0x00100000000dd49a
- (_Bool)routeIsActiveWithUID:(id)arg1;	// IMP=0x00100000000dd404
- (void)pickCachedRouteWithUID:(id)arg1;	// IMP=0x00100000000dcfd0
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x00100000000dcf34
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x00100000000dcd5a
@property(readonly, nonatomic, getter=isSilentPrimary) _Bool silentPrimary;
- (void)dealloc;	// IMP=0x00100000000dcb86
- (id)initWithRoutingDataSource:(id)arg1 hostedRoutingService:(id)arg2 systemEndpointController:(id)arg3 autoConnectionController:(id)arg4 homeServer:(id)arg5 avOutputDeviceAuthorizationSession:(id)arg6;	// IMP=0x00100000000dc845
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000dc70c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
