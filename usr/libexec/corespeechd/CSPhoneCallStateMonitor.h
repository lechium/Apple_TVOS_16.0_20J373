//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSPhoneCallStateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00400000000e0ada
- (unsigned long long)phoneCallState;	// IMP=0x00400000000e0bb0
- (_Bool)firstPartyCall;	// IMP=0x00100000000e0ba8
- (void)_stopMonitoring;	// IMP=0x00100000000e0ba2
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000e0b9c
- (id)init;	// IMP=0x00100000000e0b2f

@end

