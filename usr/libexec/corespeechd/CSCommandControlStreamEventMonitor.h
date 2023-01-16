//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSCommandControlStreamEventMonitor
{
    _Bool _isCommandControlStreaming;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00200000000dac76
- (void)_notifyStopCommandControl;	// IMP=0x00200000000daf0e
- (void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;	// IMP=0x00100000000daefc
- (void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x00100000000daeea
- (void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;	// IMP=0x00100000000dae75
- (void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000dae6f
- (_Bool)isStreaming;	// IMP=0x00100000000dadca
- (void)_stopMonitoring;	// IMP=0x00100000000dad6a
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000dad0a
- (id)init;	// IMP=0x00100000000daccb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
