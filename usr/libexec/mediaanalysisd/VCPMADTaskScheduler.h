//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADScopedWatchdog, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADTaskScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_runningGroup;	// 16 = 0x10
    NSMutableArray *_runningTasks;	// 24 = 0x18
    NSMutableDictionary *_pendingTasks;	// 32 = 0x20
    unsigned long long _nextTaskID;	// 40 = 0x28
    float _resourceBudget;	// 48 = 0x30
    int _cpuMonitorID;	// 52 = 0x34
    MADScopedWatchdog *_scopedWatchdog;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x004000000000ebeb
+ (id)qosArray;	// IMP=0x001000000000e873
- (void).cxx_destruct;	// IMP=0x00200000000121b8
- (unsigned long long)currentOutstandingTasks;	// IMP=0x0010000000011f45
- (void)cancelAllTasks;	// IMP=0x0010000000011a11
- (void)cancelTaskWithID:(unsigned long long)arg1;	// IMP=0x00100000000113df
- (unsigned long long)addBackgroundTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x0010000000011068
- (unsigned long long)addForegroundTask:(id)arg1 withQoS:(unsigned int)arg2;	// IMP=0x0010000000010cf1
- (unsigned int)validateQoS:(unsigned int)arg1;	// IMP=0x0010000000010aa9
- (_Bool)validateTask:(id)arg1;	// IMP=0x001000000001093e
- (void)cancelBackgroundTasks;	// IMP=0x0010000000010733
- (void)_runTask:(id)arg1;	// IMP=0x001000000000feea
- (void)_schedule;	// IMP=0x001000000000fa4f
- (void)_tryFreeingResourcesForQOS:(id)arg1 resourceRequirement:(float)arg2;	// IMP=0x001000000000ec40
- (void)dealloc;	// IMP=0x001000000000eb5f
- (id)init;	// IMP=0x001000000000e880

@end

