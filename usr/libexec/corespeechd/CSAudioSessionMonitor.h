//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSAudioSessionMonitor
{
    unsigned long long _audioSessionState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00200000000c500e
@property(nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState; // @synthesize audioSessionState=_audioSessionState;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(_Bool)arg1;	// IMP=0x00100000000c509c
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(_Bool)arg1;	// IMP=0x00100000000c5096
- (void)_stopMonitoring;	// IMP=0x00100000000c5090
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000c508a
- (id)initWithCrashMonitor:(id)arg1;	// IMP=0x00100000000c5050
- (id)init;	// IMP=0x00100000000c5016

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

