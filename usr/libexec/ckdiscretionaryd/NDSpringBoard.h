//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
    NSMutableDictionary *_appStates;	// 24 = 0x18
    NSMutableSet *_monitoredBundleIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedSpringBoard;	// IMP=0x00400000000061ee
- (void).cxx_destruct;	// IMP=0x002000000000726d
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x001000000000717b
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x001000000000715a
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0010000000006f2a
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0010000000006e1b
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0010000000006ca1
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000006b89
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x00100000000069fc
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x001000000000644c
- (void)setupMonitor;	// IMP=0x001000000000636c
- (id)init;	// IMP=0x0010000000006257

@end

