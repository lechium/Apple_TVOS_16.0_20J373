//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAdBlockerAssetMetaUpdateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000dde4c
- (void)_notifyObserver:(id)arg1;	// IMP=0x00200000000de192
- (void)_didReceiveNewAdBlockerAssetMetaData;	// IMP=0x00100000000de0b2
- (void)_stopMonitoring;	// IMP=0x00100000000de00f
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000ddef0
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x00100000000ddee3
- (id)init;	// IMP=0x00100000000ddea1

@end

