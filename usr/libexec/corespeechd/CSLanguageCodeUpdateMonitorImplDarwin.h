//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin
{
    NSString *_currentLanguageCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d73ed
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00100000000d736b
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;	// IMP=0x00100000000d7189
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00100000000d7100
- (void)_stopMonitoring;	// IMP=0x00100000000d7081
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000d7002
- (id)init;	// IMP=0x00100000000d6f55

@end

