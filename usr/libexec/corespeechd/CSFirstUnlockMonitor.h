//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSFirstUnlockMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x004000000008b325
- (_Bool)_checkFirstUnlocked;	// IMP=0x002000000008b64f
- (_Bool)isFirstUnlocked;	// IMP=0x001000000008b63f
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;	// IMP=0x001000000008b5d5
- (void)_didReceiveFirstUnlock:(_Bool)arg1;	// IMP=0x001000000008b563
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;	// IMP=0x001000000008b4f1
- (void)_stopMonitoring;	// IMP=0x001000000008b44e
- (void)_firstUnlockNotified;	// IMP=0x001000000008b413
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000008b3ec
- (id)init;	// IMP=0x001000000008b39f

@end

