//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAVVCRecordingClientMonitor
{
    unsigned long long _numOfAVVCRecordingClients;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000c2836
@property(readonly, nonatomic) unsigned long long numOfAVVCRecordingClients; // @synthesize numOfAVVCRecordingClients=_numOfAVVCRecordingClients;
- (void)_stopMonitoring;	// IMP=0x00100000000c287e
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000c2878
- (id)init;	// IMP=0x00100000000c283e

@end

