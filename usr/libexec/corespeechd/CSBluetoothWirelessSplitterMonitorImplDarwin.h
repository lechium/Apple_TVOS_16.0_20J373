//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSBluetoothWirelessSplitterMonitorImplDarwin
{
    unsigned long long _splitterState;	// 8 = 0x8
    _Bool _shouldDisableSpeakerVerificationInSplitterMode;	// 16 = 0x10
}

- (void)_notifyObserver:(id)arg1 splitterState:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;	// IMP=0x00200000000bdc8b
- (void)_didReceiveWirelessSplitterStateChange;	// IMP=0x00100000000bdbc0
- (void)_stopMonitoring;	// IMP=0x00100000000bdb41
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000bdab5
- (unsigned long long)splitterState;	// IMP=0x00100000000bda81
- (void)splitterState:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bda55
- (void)updateSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg2;	// IMP=0x00100000000bd970
- (id)init;	// IMP=0x00100000000bd8e4

@end

