//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CLAvengerReconciler, CLAvengerScannerClientController, NSString;
@protocol CLAvengerScannerClientDelegateProtocol, OS_dispatch_queue;

@interface CLAvengerScannerClient : NSObject
{
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertion;	// 8 = 0x8
    id <CLAvengerScannerClientDelegateProtocol> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CBCentralManager *_centralManager;	// 32 = 0x20
    CLAvengerScannerClientController *_controller;	// 40 = 0x28
    CLAvengerReconciler *_reconciler;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x0020000000a7fa41
- (void).cxx_destruct;	// IMP=0x0010000000a7fa20
@property(nonatomic) CLAvengerReconciler *reconciler; // @synthesize reconciler=_reconciler;
@property(nonatomic) CLAvengerScannerClientController *controller; // @synthesize controller=_controller;
@property(nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) id <CLAvengerScannerClientDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)releasePowerAssertion;	// IMP=0x0010000000a7f97e
- (void)takePowerAssertion;	// IMP=0x0010000000a7f899
- (_Bool)hasPowerAssertion;	// IMP=0x0010000000a7f88b
- (id)getPowerAssertionIdentifier;	// IMP=0x0010000000a7f84d
- (void)onUpdatedPowerState;	// IMP=0x0010000000a7f7ed
- (void)onAdvertisementBufferEmptied;	// IMP=0x0010000000a7f78d
- (void)onAggressiveScanEnded;	// IMP=0x0010000000a7f72d
- (void)onAggressiveScanStarted;	// IMP=0x0010000000a7f6cd
- (id)clientIdentifier;	// IMP=0x0010000000a7f6a2
- (void)onAvengerAdvertisement:(id)arg1 address:(id)arg2 advertisementData:(id)arg3 status:(unsigned char)arg4 rssi:(long long)arg5 reserved:(id)arg6 channel:(id)arg7 reconciledInformation:(id)arg8;	// IMP=0x0010000000a7f64e
- (void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2;	// IMP=0x0010000000a7f60e
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000a7f5dd
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;	// IMP=0x0010000000a7f59d
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0010000000a7f537
- (_Bool)poweredOn;	// IMP=0x0010000000a7f50c
- (void)setOptedIn:(_Bool)arg1;	// IMP=0x0010000000a7f4dd
- (_Bool)getOptedIn;	// IMP=0x0010000000a7f4b2
- (_Bool)isScanning;	// IMP=0x0010000000a7f487
- (_Bool)stopBTFindingScan;	// IMP=0x0010000000a7f45c
- (_Bool)startBTFindingScan;	// IMP=0x0010000000a7f431
- (_Bool)performTemporaryHawkeyeLowEnergyScan;	// IMP=0x0010000000a7f406
- (_Bool)stopTemporaryLongAggressiveScan;	// IMP=0x0010000000a7f3db
- (_Bool)performTemporaryLongAggressiveScan;	// IMP=0x0010000000a7f3b0
- (_Bool)performTemporaryAggressiveScan;	// IMP=0x0010000000a7f385
- (void)dealloc;	// IMP=0x0010000000a7f321
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 optedIn:(_Bool)arg3;	// IMP=0x0010000000a7f1b9
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000a7f1a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
