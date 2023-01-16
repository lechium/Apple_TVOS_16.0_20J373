//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPairingManager, NSString;

@interface IDSDXPCPairedDeviceManager : NSObject
{
    IDSPairingManager *_pairingManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000004d4200
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
- (void)getPairedDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004d3e50
- (void)getLocalDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004d39d0
- (id)initWithPairingManager:(id)arg1;	// IMP=0x00100000004d3910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

