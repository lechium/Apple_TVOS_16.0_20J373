//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSJarvisTriggerModeMonitor
{
}

+ (id)triggerModeStringDescription:(long long)arg1;	// IMP=0x00400000000620ec
+ (id)sharedInstance;	// IMP=0x001000000006208b
- (long long)getTriggerMode;	// IMP=0x00400000000620df
- (void)setTriggerMode:(long long)arg1;	// IMP=0x00100000000620d9
- (void)_stopMonitoring;	// IMP=0x00100000000620d3
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000620cd
- (id)init;	// IMP=0x0010000000062093

@end

