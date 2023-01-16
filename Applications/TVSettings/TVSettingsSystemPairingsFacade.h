//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUPairingManager, NSArray, NSMutableDictionary, SFService;

@interface TVSettingsSystemPairingsFacade : NSObject
{
    NSArray *_pairedDevicesInDisplayOrder;	// 8 = 0x8
    NSMutableDictionary *_identifierToDeviceMap;	// 16 = 0x10
    CUPairingManager *_pairingManager;	// 24 = 0x18
    SFService *_pairingAdvertisingService;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000009a8e
- (void).cxx_destruct;	// IMP=0x002000000000ab9d
@property(retain, nonatomic) SFService *pairingAdvertisingService; // @synthesize pairingAdvertisingService=_pairingAdvertisingService;
@property(retain, nonatomic) CUPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) NSMutableDictionary *identifierToDeviceMap; // @synthesize identifierToDeviceMap=_identifierToDeviceMap;
@property(copy, nonatomic) NSArray *pairedDevicesInDisplayOrder; // @synthesize pairedDevicesInDisplayOrder=_pairedDevicesInDisplayOrder;
- (_Bool)removeDeviceWithPairedPeer:(id)arg1;	// IMP=0x001000000000aa5a
- (id)deviceWithPairedPeer:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x001000000000a95b
- (void)_clearDevices:(_Bool)arg1;	// IMP=0x001000000000a909
- (void)_peerChanged:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000a870
- (void)_peerRemoved:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000a842
- (void)_peerAdded:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000a7e2
- (void)_updateDeviceDisplayFromDeviceMap;	// IMP=0x001000000000a6d7
- (void)_updatePairedPeers:(id)arg1 isDevice:(_Bool)arg2;	// IMP=0x001000000000a535
- (void)unpairDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a36e
- (_Bool)deviceStillPaired:(id)arg1;	// IMP=0x001000000000a301
- (void)_queryPairedPeers;	// IMP=0x001000000000a085
- (void)_configurePairingManager;	// IMP=0x0010000000009c9c
- (void)_destroyPairingManager;	// IMP=0x0010000000009c6a
- (void)stopAdvertising;	// IMP=0x0010000000009c38
- (void)startAdvertising;	// IMP=0x0010000000009bae
- (void)startScanningIfNeeded;	// IMP=0x0010000000009b93
- (id)init;	// IMP=0x0010000000009b13

@end

