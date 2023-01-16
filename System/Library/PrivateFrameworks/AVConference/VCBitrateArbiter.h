//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCBitrateArbiter : NSObject
{
    unsigned int _maxAllowedBitrate;	// 8 = 0x8
    unsigned int _maxAllowedBitrate2G;	// 12 = 0xc
    unsigned int _maxAllowedBitrate3G;	// 16 = 0x10
    unsigned int _maxAllowedBitrateLTE;	// 20 = 0x14
    unsigned int _maxAllowedBitrateHighRat;	// 24 = 0x18
    unsigned int _maxAllowedBitrateWifi;	// 28 = 0x1c
    unsigned int _maxAllowedBitrateTCPRelay;	// 32 = 0x20
    unsigned int _maxAllowedScreenShareBitrate2G;	// 36 = 0x24
    unsigned int _maxAllowedScreenShareBitrate3G;	// 40 = 0x28
    unsigned int _maxAllowedScreenShareBitrateLTE;	// 44 = 0x2c
    unsigned int _maxAllowedScreenShareBitrateWifi;	// 48 = 0x30
    unsigned int _maxAllowedAudioOnlyBitrate2G;	// 52 = 0x34
    unsigned int _maxAllowedAudioOnlyBitrate3G;	// 56 = 0x38
    unsigned int _maxAllowedAudioOnlyBitrateLTE;	// 60 = 0x3c
    unsigned int _maxAllowedAudioOnlyBitrateWifi;	// 64 = 0x40
    unsigned int _maxiBitrateIPadCompanionP2P;	// 68 = 0x44
    unsigned int _maxAllowedBitrateIPadCompanionUSB;	// 72 = 0x48
    NSMutableArray *supportedBitrateRules;	// 80 = 0x50
    unsigned int _maxAllowedBitrateP2P;	// 88 = 0x58
    unsigned int _maxAllowedBitrateUSB;	// 92 = 0x5c
}

+ (void)updateMaxAllowedBitratePerConnection:(unsigned int *)arg1 connectionType:(int)arg2 negotiatedSettings:(id)arg3;	// IMP=0x00600000003a2bc4
@property(readonly) unsigned int maxAllowedBitrateUSB; // @synthesize maxAllowedBitrateUSB=_maxAllowedBitrateUSB;
@property(readonly) unsigned int maxAllowedBitrateP2P; // @synthesize maxAllowedBitrateP2P=_maxAllowedBitrateP2P;
@property(readonly) unsigned int maxAllowedBitrateTCPRelay; // @synthesize maxAllowedBitrateTCPRelay=_maxAllowedBitrateTCPRelay;
@property(readonly) unsigned int maxAllowedBitrateWifi; // @synthesize maxAllowedBitrateWifi=_maxAllowedBitrateWifi;
@property(readonly) unsigned int maxAllowedBitrateHighRat; // @synthesize maxAllowedBitrateHighRat=_maxAllowedBitrateHighRat;
@property(readonly) unsigned int maxAllowedBitrateLTE; // @synthesize maxAllowedBitrateLTE=_maxAllowedBitrateLTE;
@property(readonly) unsigned int maxAllowedBitrate3G; // @synthesize maxAllowedBitrate3G=_maxAllowedBitrate3G;
@property(readonly) unsigned int maxAllowedBitrate2G; // @synthesize maxAllowedBitrate2G=_maxAllowedBitrate2G;
@property(readonly) unsigned int maxAllowedBitrate; // @synthesize maxAllowedBitrate=_maxAllowedBitrate;
- (void)updateNegotiatedSettings:(id)arg1;	// IMP=0x00000000003a2bef
- (unsigned int)maxAllowedBitrateForConnectionType:(int)arg1 operatingMode:(int)arg2;	// IMP=0x00000000003a2b58
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(_Bool)arg2 operatingMode:(int)arg3 encodeRule:(id)arg4;	// IMP=0x00000000003a2a74
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;	// IMP=0x00000000003a28b2
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;	// IMP=0x00000000003a27b9
- (unsigned int)maxAllowedScreenShareBitrateForConnection:(int)arg1;	// IMP=0x00000000003a26c0
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(_Bool)arg2 encodeRule:(id)arg3;	// IMP=0x00000000003a2431
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x00000000003a241c
- (unsigned int)maxAllowedBitrateForConnectionType:(int)arg1;	// IMP=0x00000000003a22ed
- (unsigned int)maxAllowedScreenShareCellularBitrate;	// IMP=0x00000000003a22d4
- (unsigned int)maxAllowedCellularBitrate;	// IMP=0x00000000003a22b3
- (void)readCarrierBundleValues;	// IMP=0x00000000003a22ad
- (void)updateMaxAllowedBitrate:(unsigned int *)arg1 key:(struct __CFString *)arg2 type:(id)arg3 isAudio:(_Bool)arg4 carrierBundleBitrates:(struct __CFDictionary *)arg5;	// IMP=0x00000000003a22a7
- (void)readStoreBagValues:(void *)arg1;	// IMP=0x00000000003a2168
- (int)storeBagBitrateForKey:(id)arg1;	// IMP=0x00000000003a20cb
- (void)readHardwareValues;	// IMP=0x00000000003a20c5
- (void)addRuleForBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;	// IMP=0x00000000003a2058
- (void)createSupportedBitrateRuleSets;	// IMP=0x00000000003a2022
- (void)dealloc;	// IMP=0x00000000003a1fc4
- (id)initWithDeviceRole:(int)arg1 callLogFile:(void *)arg2;	// IMP=0x00000000003a1e2d

@end

