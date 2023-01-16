//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionLegacy
{
    unsigned int _type;	// 12 = 0xc
    int _priority;	// 16 = 0x10
    _Bool _waitToBeNominated;	// 20 = 0x14
    struct tagCONNRESULT *_connectionResult;	// 24 = 0x18
    _Bool isLocalConstrained;	// 32 = 0x20
    _Bool isLocalExpensive;	// 33 = 0x21
    _Bool isRemoteConstrained;	// 34 = 0x22
    _Bool isRemoteExpensive;	// 35 = 0x23
    _Bool isLocalDelegated;	// 36 = 0x24
    _Bool isRemoteDelegated;	// 37 = 0x25
    _Bool isVirtualRelayLink;	// 38 = 0x26
    _Bool isLocalOn5G;	// 39 = 0x27
    _Bool isRemoteOn5G;	// 40 = 0x28
    int maxConnectionMTU;	// 44 = 0x2c
}

@property(readonly) _Bool isRemoteOn5G; // @synthesize isRemoteOn5G;
@property(readonly) _Bool isLocalOn5G; // @synthesize isLocalOn5G;
@property int maxConnectionMTU; // @synthesize maxConnectionMTU;
@property(readonly) _Bool isVirtualRelayLink; // @synthesize isVirtualRelayLink;
@property(readonly) _Bool isRemoteDelegated; // @synthesize isRemoteDelegated;
@property(readonly) _Bool isLocalDelegated; // @synthesize isLocalDelegated;
@property(readonly) _Bool isRemoteExpensive; // @synthesize isRemoteExpensive;
@property(readonly) _Bool isRemoteConstrained; // @synthesize isRemoteConstrained;
@property(readonly) _Bool isLocalExpensive; // @synthesize isLocalExpensive;
@property(readonly) _Bool isLocalConstrained; // @synthesize isLocalConstrained;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property(readonly) struct tagCONNRESULT *connectionResult; // @synthesize connectionResult=_connectionResult;
@property _Bool waitToBeNominated; // @synthesize waitToBeNominated=_waitToBeNominated;
@property int priority; // @synthesize priority=_priority;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
- (_Bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000000eba6b
- (struct tagIPPORT)IPPortForNWConnection:(id)arg1;	// IMP=0x00000000000eb9fc
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000000eb8fc
@property unsigned int uplinkBitrateCapOneToOne;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;
@property(readonly) NSString *localInterfaceName;
@property(readonly) NSUUID *connectionUUID;
@property int connectionMTU;
- (int)cellularMTU;	// IMP=0x00000000000eb60c
@property int remoteCellTech;
@property int localCellTech;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) unsigned short relayChannelNumber;
@property(readonly) _Bool isReplaceOnly;
@property(readonly) _Bool isUpgraded;
@property(readonly) _Bool serverIsDegraded;
@property(readonly) _Bool isEndToEndLink;
@property(readonly) _Bool isVPN;
@property(readonly) int connectionId;
@property(readonly) _Bool isRelay;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isRemoteOnCellular;
@property(readonly) _Bool isLocalOnCellular;
@property(readonly) _Bool isRemoteOnWiFi;
@property(readonly) _Bool isLocalOnWiFi;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;	// IMP=0x00000000000eb345
- (_Bool)isSameAsConnection:(id)arg1;	// IMP=0x00000000000eb0f5
@property(readonly, copy) NSString *description;
- (id)ipportToString:(struct tagIPPORT *)arg1;	// IMP=0x00000000000eae88
- (_Bool)isOnSameInterfacesWithConnection:(id)arg1;	// IMP=0x00000000000eac5b
@property(readonly) _Bool isWifiToWifi;
- (_Bool)isOnSameIPPortWithConnection:(id)arg1;	// IMP=0x00000000000ea8e0
- (_Bool)isRemoteIPPort:(struct tagIPPORT *)arg1;	// IMP=0x00000000000ea78e
- (_Bool)isLocalIPPort:(struct tagIPPORT *)arg1;	// IMP=0x00000000000ea68d
- (void)dealloc;	// IMP=0x00000000000ea624
- (id)copy;	// IMP=0x00000000000ea58b
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR *)arg1;	// IMP=0x00000000000ea474
- (id)initWithConnectionResult:(struct tagCONNRESULT *)arg1 type:(unsigned int)arg2;	// IMP=0x00000000000ea308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
