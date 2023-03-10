//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVSettingsBluetoothFacade, UIAlertController;

@interface TVSettingsBluetoothViewController : TSKViewController
{
    TVSettingsBluetoothFacade *_bluetoothFacade;	// 8 = 0x8
    _Bool _startedScanning;	// 16 = 0x10
    UIAlertController *_errorAlert;	// 24 = 0x18
}

+ (id)_unsupportedDeviceErrorStringWithDevice:(id)arg1;	// IMP=0x00200000000d50c9
+ (id)_linkErrorStringWithDevice:(id)arg1;	// IMP=0x00100000000d4fbe
+ (id)_genericPairingErrorStringWithDevice:(id)arg1;	// IMP=0x00100000000d4eb3
+ (id)_genericErrorStringWithDevice:(id)arg1;	// IMP=0x00100000000d4da8
- (void).cxx_destruct;	// IMP=0x00200000000d52c2
@property(retain, nonatomic) UIAlertController *errorAlert; // @synthesize errorAlert=_errorAlert;
- (id)_devicePairingAction:(id)arg1;	// IMP=0x00100000000d51d4
- (void)_postAlertWithErrorCode:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00100000000d47e9
- (void)_connectDevice:(id)arg1;	// IMP=0x00100000000d46ad
- (void)deviceInfoDidUpdate:(id)arg1;	// IMP=0x00100000000d469b
- (void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;	// IMP=0x00100000000d4594
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x00100000000d448d
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00100000000d4420
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00100000000d43c7
- (void)bluetoothManager:(id)arg1 requestPairingPIN:(id)arg2;	// IMP=0x00100000000d4167
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00100000000d3e8a
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000d3d65
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00100000000d3cd5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000d3afb
- (id)loadSettingGroups;	// IMP=0x00100000000d2e70
- (void)viewDidLoad;	// IMP=0x00100000000d2d9b
- (void)dealloc;	// IMP=0x00100000000d2d01
- (id)initWithFacade:(id)arg1;	// IMP=0x00100000000d2bf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

