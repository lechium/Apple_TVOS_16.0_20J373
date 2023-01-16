//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface IDSNRDevicePairingProperties
{
    _Bool _wasInitiallySetupUsingIDSPairing;	// 16 = 0x10
    _Bool _pairWithSPPLink;	// 17 = 0x11
    _Bool _isAltAccountPairing;	// 18 = 0x12
    NSData *_outOfBandKey;	// 24 = 0x18
    NSData *_bluetoothMACAddress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000068c0
@property(nonatomic) _Bool isAltAccountPairing; // @synthesize isAltAccountPairing=_isAltAccountPairing;
@property(nonatomic) _Bool pairWithSPPLink; // @synthesize pairWithSPPLink=_pairWithSPPLink;
@property(retain, nonatomic) NSData *bluetoothMACAddress; // @synthesize bluetoothMACAddress=_bluetoothMACAddress;
@property(nonatomic) _Bool wasInitiallySetupUsingIDSPairing; // @synthesize wasInitiallySetupUsingIDSPairing=_wasInitiallySetupUsingIDSPairing;
@property(retain, nonatomic) NSData *outOfBandKey; // @synthesize outOfBandKey=_outOfBandKey;
- (id)init;	// IMP=0x00100000000066b0

@end

