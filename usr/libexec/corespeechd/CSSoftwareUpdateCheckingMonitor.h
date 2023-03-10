//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSoftwareUpdateCheckingMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSoftwareUpdateCheckingRunning;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000000e0592
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;	// IMP=0x00200000000e0a70
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;	// IMP=0x00100000000e09fe
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;	// IMP=0x00100000000e098c
- (_Bool)isSoftwareUpdateCheckingRunning;	// IMP=0x00100000000e097c
- (unsigned char)_softwareUpdateCheckingState;	// IMP=0x00100000000e0922
- (_Bool)_checkSoftwareUpdateCheckingState;	// IMP=0x00100000000e0867
- (void)_stopMonitoring;	// IMP=0x00100000000e07c4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e0634
- (id)init;	// IMP=0x00100000000e05e7

@end

