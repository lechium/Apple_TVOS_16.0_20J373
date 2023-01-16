//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRDHostedExternalDeviceManager, MRDRemoteControlDiscoverySession, MRDeviceInfo, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRDHostedRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    NSHashTable *_weakObservers;	// 24 = 0x18
    NSDictionary *_hostsByGroupID;	// 32 = 0x20
    NSDictionary *_availableOutputDevices;	// 40 = 0x28
    NSArray *_endpoints;	// 48 = 0x30
    NSArray *_distantOutputDevices;	// 56 = 0x38
    MRAVEndpoint *_localEndpoint;	// 64 = 0x40
    id _discoverySessionOutputDevicesToken;	// 72 = 0x48
    id _discoverySessionEndpointsToken;	// 80 = 0x50
    MRDHostedExternalDeviceManager *_externalDeviceManager;	// 88 = 0x58
    MRDRemoteControlDiscoverySession *_discoverySession;	// 96 = 0x60
    NSMutableDictionary *_virtualOutputDeviceDictionary;	// 104 = 0x68
    MRDeviceInfo *_deviceInfo;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000009e8d5
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSMutableDictionary *virtualOutputDeviceDictionary; // @synthesize virtualOutputDeviceDictionary=_virtualOutputDeviceDictionary;
@property(retain, nonatomic) MRDRemoteControlDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)filterOutputDevices:(id)arg1 remoteControllableOnly:(_Bool)arg2;	// IMP=0x001000000009e0d2
- (id)resolveOutputDevices:(id)arg1;	// IMP=0x001000000009ddad
- (id)computeHostsByGroupIDForOutputDevices:(id)arg1 unclusteredDevices:(id)arg2;	// IMP=0x001000000009d62d
- (void)hostedExternalDeviceManagerDidUpdateExternalDeviceMapping:(id)arg1;	// IMP=0x001000000009d5af
- (void)_processDiscoveryObserverChanges;	// IMP=0x001000000009d1e0
- (void)_handleOutputContextManagerDidReset:(id)arg1;	// IMP=0x001000000009cf51
- (void)_handleEndpointOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x001000000009cef0
- (void)_handleObserverDiscoveryModeDidChangeNotification:(id)arg1;	// IMP=0x001000000009cede
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x001000000009ce01
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x001000000009c660
- (id)_onQueue_determineGroupLeaderForOutputDevices:(id)arg1 availableOutputDevices:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x001000000009b59b
- (void)_onQueue_reloadOutputDevices;	// IMP=0x001000000009b4e6
- (void)removeVirtualOutputDevicesForClient:(id)arg1;	// IMP=0x001000000009b3ce
- (void)addVirtualOutputDevice:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000009b1d5
@property(readonly, nonatomic) NSArray *virtualOutputDevices;
- (id)determineGroupLeaderForOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000009ae63
- (id)_onQueue_makeHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2;	// IMP=0x001000000009aa85
- (id)externalDeviceForOutputDeviceUID:(id)arg1;	// IMP=0x001000000009aa78
- (id)externalDeviceForEndpoint:(id)arg1;	// IMP=0x001000000009a84a
- (void)removeObserver:(id)arg1;	// IMP=0x001000000009a78f
- (void)addObserver:(id)arg1;	// IMP=0x001000000009a6d4
@property(readonly, nonatomic) NSArray *availableDistantAudioOutputDevices;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(readonly, nonatomic) NSArray *availableDistantOutputDevices;
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
@property(readonly, nonatomic) NSArray *availableEndpoints;
@property(readonly, nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000009a245
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x001000000009a1a6
- (void)_onQueue_reloadEndpoints;	// IMP=0x001000000009a11d
- (id)createDiscoverySession;	// IMP=0x001000000009a094
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0010000000099f78
- (id)init;	// IMP=0x0010000000099f64
- (id)initWithDiscoverySession:(id)arg1;	// IMP=0x00100000000999df

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
