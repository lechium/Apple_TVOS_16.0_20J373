//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TRDeviceSetupBrowser;
@protocol OS_dispatch_source, OS_os_transaction;

@interface DeviceSetupBrowser : NSObject
{
    _Bool _buddySetupDone;	// 8 = 0x8
    int _buddySetupDoneToken;	// 12 = 0xc
    _Bool _buddySetupDoneTokenIsValid;	// 16 = 0x10
    NSMutableSet *_discoveredPeripherals;	// 24 = 0x18
    double _lastTapTimeInterval;	// 32 = 0x20
    _Bool _scanning;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_scanningDurationTimer;	// 48 = 0x30
    TRDeviceSetupBrowser *_setupBrowser;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_setupTimeoutTimer;	// 64 = 0x40
    NSObject<OS_os_transaction> *_setupTransaction;	// 72 = 0x48
    double _scanningStartTimeInterval;	// 80 = 0x50
}

+ (id)sharedSetupBrowser;	// IMP=0x0020000000001b32
- (void).cxx_destruct;	// IMP=0x0020000000002d03
- (void)_startSetupTimeoutTimer;	// IMP=0x0010000000002b96
- (void)_endScanIfNecessary;	// IMP=0x0010000000002b7c
- (void)_endActualScan;	// IMP=0x0010000000002a47
- (void)_cancelScanningDurationTimer;	// IMP=0x0010000000002a11
- (void)_beginActualScan;	// IMP=0x0010000000002926
- (void)endScan;	// IMP=0x0010000000002851
- (void)beginScan;	// IMP=0x00100000000027e8
- (void)deviceSetupPeripheralSetupDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000002669
- (void)deviceSetupPeripheralSetupDidComplete:(id)arg1;	// IMP=0x001000000000256f
- (void)deviceSetupPeripheralDidTap:(id)arg1;	// IMP=0x00100000000021e2
- (void)deviceSetupBrowser:(id)arg1 didRemovePeripheral:(id)arg2;	// IMP=0x001000000000205a
- (void)deviceSetupBrowser:(id)arg1 didFindPeripheral:(id)arg2;	// IMP=0x0010000000001eca
- (void)deviceSetupBrowserDidChangeState:(id)arg1;	// IMP=0x0010000000001de9
- (void)dealloc;	// IMP=0x0010000000001d7b
- (id)init;	// IMP=0x0010000000001b87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
