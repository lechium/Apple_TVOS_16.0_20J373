//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSThread;
@protocol OS_dispatch_queue;

@interface PBDataReportingService : NSObject
{
    NSMutableSet *_seenEDIDs;	// 8 = 0x8
    NSMutableDictionary *_toReportEDIDData;	// 16 = 0x10
    NSDate *_lastSentEDIDTimestamp;	// 24 = 0x18
    NSMutableDictionary *_keyTimingStarts;	// 32 = 0x20
    NSMutableDictionary *_keyTimingTotals;	// 40 = 0x28
    NSMutableDictionary *_buttonPressTotals;	// 48 = 0x30
    NSThread *_NANDReportingThread;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_serialQueue;	// 64 = 0x40
    NSDictionary *_cachedCoreControlUsage;	// 72 = 0x48
    long long _persistentDisplayModeValue;	// 80 = 0x50
    NSString *_persistentDisplayModeString;	// 88 = 0x58
}

+ (unsigned long long)_roundDiskUsageInBytesToMB:(unsigned long long)arg1;	// IMP=0x002000000009ff1b
+ (unsigned long long)_averageDiskUsageInMB:(unsigned long long)arg1 numberOfApps:(unsigned long long)arg2;	// IMP=0x001000000009fe66
+ (id)_userAppsMetricsDictionaryWithSortedApplicationRecords:(id)arg1;	// IMP=0x001000000009fa05
+ (unsigned long long)_totalDiskUsageInBytesWithLSApplicationRecord:(id)arg1;	// IMP=0x001000000009f924
+ (id)_userAppsMetricsDictionary;	// IMP=0x001000000009ee8e
+ (id)serviceLog;	// IMP=0x001000000009b105
+ (id)_sharedInstance;	// IMP=0x001000000009aea7
+ (void)noteGuideEventResultForAction:(unsigned long long)arg1;	// IMP=0x001000000009ad88
+ (void)incrementEventCountForRemoteButtonWithType:(long long)arg1;	// IMP=0x001000000009abd6
+ (void)stopTimingForAction:(unsigned long long)arg1;	// IMP=0x001000000009a811
+ (void)startTimingForAction:(unsigned long long)arg1;	// IMP=0x001000000009a631
+ (void)incrementLongTVButtonPresses:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000009a51d
+ (void)incrementLongMenuButtonPresses:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000009a409
+ (void)incrementEventCountForRemoteApp;	// IMP=0x001000000009a3fc
+ (void)incrementEventCountForGameController;	// IMP=0x001000000009a3ef
+ (void)incrementEventCountForBluetoothKeyboard;	// IMP=0x001000000009a3e2
+ (void)incrementEventCountForCEC;	// IMP=0x001000000009a3d5
+ (void)incrementEventCountForIRRemote;	// IMP=0x001000000009a3c8
+ (void);	// IMP=0x001000000009a3bb
+ (void)incrementB239TVButtonPresses;	// IMP=0x001000000009a3ae
+ (void)incrementB239ButtonPresses;	// IMP=0x001000000009a3a1
+ (void)incrementOccurrenceCountForAction:(unsigned long long)arg1;	// IMP=0x001000000009a234
+ (void)noteApplicationExit;	// IMP=0x001000000009a1ef
+ (void)reportNow;	// IMP=0x001000000009a100
+ (void)startService;	// IMP=0x001000000009a094
- (void).cxx_destruct;	// IMP=0x00200000000a1e30
@property(copy, nonatomic) NSString *persistentDisplayModeString; // @synthesize persistentDisplayModeString=_persistentDisplayModeString;
@property(nonatomic) long long persistentDisplayModeValue; // @synthesize persistentDisplayModeValue=_persistentDisplayModeValue;
@property(copy, nonatomic) NSDictionary *cachedCoreControlUsage; // @synthesize cachedCoreControlUsage=_cachedCoreControlUsage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSThread *NANDReportingThread; // @synthesize NANDReportingThread=_NANDReportingThread;
@property(retain, nonatomic) NSMutableDictionary *buttonPressTotals; // @synthesize buttonPressTotals=_buttonPressTotals;
@property(retain, nonatomic) NSMutableDictionary *keyTimingTotals; // @synthesize keyTimingTotals=_keyTimingTotals;
@property(retain, nonatomic) NSMutableDictionary *keyTimingStarts; // @synthesize keyTimingStarts=_keyTimingStarts;
@property(retain, nonatomic) NSDate *lastSentEDIDTimestamp; // @synthesize lastSentEDIDTimestamp=_lastSentEDIDTimestamp;
@property(retain, nonatomic) NSMutableDictionary *toReportEDIDData; // @synthesize toReportEDIDData=_toReportEDIDData;
@property(retain, nonatomic) NSMutableSet *seenEDIDs; // @synthesize seenEDIDs=_seenEDIDs;
- (unsigned long long)_integer:(unsigned long long)arg1 quantizedBy:(unsigned long long)arg2;	// IMP=0x00100000000a1cdc
- (unsigned long long)_quantizedTimeForKey:(id)arg1;	// IMP=0x00100000000a1b9f
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1aa8
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1927
- (void)_reportCurrentAudioOutputConfiguration;	// IMP=0x00100000000a1583
- (void)_reportCurrentSystemSettingsMetrics;	// IMP=0x00100000000a140f
- (void)_reportCurrentVideoSettingsMetrics;	// IMP=0x00100000000a11df
- (void)_reportCurrentAudioSettingsMetrics;	// IMP=0x00100000000a108b
- (void)_reportRecoveryActions;	// IMP=0x00100000000a0e69
- (void)_threadReportNANDStatistics;	// IMP=0x00100000000a0e63
- (void)_reportNANDStatistics;	// IMP=0x00100000000a0e5d
- (void)_reportButtonEventMetrics;	// IMP=0x00100000000a0c27
- (void)_reportButtonPressMetrics;	// IMP=0x001000000009ff76
- (void)_reportUserAppMetrics;	// IMP=0x001000000009edad
- (void)_reportBluetoothDeviceMetrics;	// IMP=0x001000000009e2f0
- (void)_sendToURL:(id)arg1 withSubtopic:(id)arg2 andParameters:(id)arg3;	// IMP=0x001000000009df74
- (id)_reportingURLForTopic:(id)arg1;	// IMP=0x001000000009db84
- (void)_sendCoreControlUsage;	// IMP=0x001000000009d8be
- (void)_sendEDIDURLRequest:(id)arg1;	// IMP=0x001000000009d49e
- (void)_sendEDIDLogs;	// IMP=0x001000000009d223
- (void)_recordEDID;	// IMP=0x001000000009d21d
- (void)_cacheCoreControlUsageNow;	// IMP=0x001000000009ce5e
- (id)_coreControlCapabilityDataForDisplay:(id)arg1;	// IMP=0x001000000009c983
- (id)_arcPreferenceData;	// IMP=0x001000000009c39c
- (id)_coreControlDisplayAttributesForCurrentDisplay:(id)arg1;	// IMP=0x001000000009c07b
- (id)_dataReportingGUID;	// IMP=0x001000000009bfe8
- (void)_handleDisplayModeDidChange;	// IMP=0x001000000009bf70
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x001000000009be7d
- (id)DisplayModeBinding;	// IMP=0x001000000009be2b
- (void)_reportOptInConditionalMetrics;	// IMP=0x001000000009bdf1
- (void)_reportOptInUnconditionalMetrics;	// IMP=0x001000000009bdeb
- (void)_computeDisplayMetrics;	// IMP=0x001000000009b9ff
- (void)_reportDailyDataNow;	// IMP=0x001000000009b94b
- (void)_reportFrequentDataNow;	// IMP=0x001000000009b8c6
- (void)_configureSleepWakeReporting;	// IMP=0x001000000009b872
- (void)_schedulePeriodicTrigger;	// IMP=0x001000000009b4a0
- (void)_configureEDIDReporting;	// IMP=0x001000000009b43b
- (void)_configureMemoryPressureReporting;	// IMP=0x001000000009b3b9
- (void)_configureAggregateDataReporting;	// IMP=0x001000000009b2ff
- (_Bool)_isDiagnosticsSubmissionAllowed;	// IMP=0x001000000009b279
- (void)_incrementButtonEventCount:(id)arg1;	// IMP=0x001000000009b163
- (id)init;	// IMP=0x001000000009aefe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

