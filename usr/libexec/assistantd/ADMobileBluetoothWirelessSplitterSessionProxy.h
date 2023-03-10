//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource, AFBluetoothWirelessSplitterSessionInfo, AFBluetoothWirelessSplitterSessionStateObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface ADMobileBluetoothWirelessSplitterSessionProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    AFBluetoothWirelessSplitterSessionInfo *_wirelessSplitterSessionInfo;	// 32 = 0x20
    AFBluetoothWirelessSplitterSessionStateObserver *_observer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d78ad
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d77df
- (void)_invalidate;	// IMP=0x00100000000d7678
- (void)_accessBTLocalDeviceUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d73ce
- (void)_fetchWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d6eba
- (void)_updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000d6c55
- (void)_getWirelessSplitterSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d6b64
- (void)_reload:(_Bool)arg1;	// IMP=0x00100000000d69aa
- (void)invalidate;	// IMP=0x00100000000d6949
- (void);	// IMP=0x00100000000d689b
- (void)addObserver:(id)arg1;	// IMP=0x00100000000d67aa
- (void)getSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d66fd
- (void)bluetoothWirelessSplitterSessionStateObserver:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000000d654c
- (void)reload;	// IMP=0x00100000000d64e6
- (void)updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000d643e
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000d60c9
- (void)dealloc;	// IMP=0x00100000000d6014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

