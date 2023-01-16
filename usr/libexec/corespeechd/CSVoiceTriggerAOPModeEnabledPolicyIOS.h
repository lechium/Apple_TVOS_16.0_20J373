//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy
{
    NSObject<OS_dispatch_queue> *_recordStateQueue;	// 8 = 0x8
    _Bool _isSiriClientConsideredAsRecord;	// 16 = 0x10
    NSString *_pendingRecordingStopUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000e4c1c
@property(retain, nonatomic) NSString *pendingRecordingStopUUID; // @synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID;
@property(nonatomic) _Bool isSiriClientConsideredAsRecord; // @synthesize isSiriClientConsideredAsRecord=_isSiriClientConsideredAsRecord;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000e4bd1
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000e4bcb
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000e4bc5
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000e4bbf
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(_Bool)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;	// IMP=0x00100000000e470b
- (_Bool)_isHearstRoutedAndWithNoPhoneCall;	// IMP=0x00100000000e4673
- (_Bool)_isSpeechDetectionDevicePresent;	// IMP=0x00100000000e45a8
- (void)_addConditionsForIOSAOP;	// IMP=0x00100000000e4016
- (void)_addConditionsForIOSBargeIn;	// IMP=0x00100000000e344a
- (void)_addVoiceTriggerAOPModeEnabledConditions;	// IMP=0x00100000000e3363
- (void)_subscribeEventMonitors;	// IMP=0x00100000000e3182
- (id)init;	// IMP=0x00100000000e30b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
