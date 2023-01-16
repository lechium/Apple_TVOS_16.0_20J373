//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDAVAssetDownloadSessionWrapper, NDApplication, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NDAVThroughputMonitor : NSObject
{
    NDAVAssetDownloadSessionWrapper *_wrapper;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_throughputTimer;	// 24 = 0x18
    NSMutableArray *_progressTimestamps;	// 32 = 0x20
    NSMutableArray *_progressValues;	// 40 = 0x28
    unsigned long long _throughputInterval;	// 48 = 0x30
    double _throughputMonitoringStartTime;	// 56 = 0x38
    _Bool _hasTransferredData;	// 64 = 0x40
    _Bool _discretionary;	// 65 = 0x41
    _Bool _explicitlyDiscretionary;	// 66 = 0x42
    _Bool _performsNonDiscretionaryThroughputMonitoring;	// 67 = 0x43
    NDApplication *_monitoredApplication;	// 72 = 0x48
    long long _basePriority;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000048183
@property long long basePriority; // @synthesize basePriority=_basePriority;
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000048124
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x00100000000480d9
- (void)setThroughputTimerForCurrentInterval;	// IMP=0x001000000004804b
- (double)currentIntervalThroughputThreshold;	// IMP=0x001000000004802d
- (long long)currentIntervalDuration;	// IMP=0x0010000000047feb
- (void)calculateThroughput;	// IMP=0x0010000000047c4e
- (void)stopThroughputMonitoring;	// IMP=0x0010000000047bf9
- (void)startThroughputMonitoring;	// IMP=0x0010000000047b41
- (void)startThroughputMonitoringIfAppropriate;	// IMP=0x0010000000047aeb
- (void)wrapperTransferredData:(unsigned long long)arg1;	// IMP=0x001000000004785f
- (void)cancel;	// IMP=0x001000000004782d
- (void)wrapperWillSuspend;	// IMP=0x001000000004781b
- (id)initWithWrapper:(id)arg1 monitoredApplication:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 queue:(id)arg5;	// IMP=0x00100000000476e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

@end
