//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface AppInstallsDatabaseChangeset : NSObject
{
    NSMutableDictionary *_appUpdatesToFinish;	// 8 = 0x8
    NSMutableArray *_asyncTasks;	// 16 = 0x10
    NSMutableSet *_backgroundAssetInstalls;	// 24 = 0x18
    NSMutableSet *_cancelProgress;	// 32 = 0x20
    NSMutableSet *_coordinatorPause;	// 40 = 0x28
    NSMutableDictionary *_coordinatorReasons;	// 48 = 0x30
    NSMutableSet *_coordinatorResume;	// 56 = 0x38
    NSMutableSet *_failedTestFlightInstalls;	// 64 = 0x40
    NSMutableSet *_finishProgress;	// 72 = 0x48
    NSMutableSet *_legacyNotifications;	// 80 = 0x50
    NSMutableSet *_metricsToPost;	// 88 = 0x58
    NSMutableSet *_restoresToHydrate;	// 96 = 0x60
    NSMutableSet *_restoresToPrioritize;	// 104 = 0x68
    unsigned long long _schedulerPollReason;	// 112 = 0x70
    _Bool _restoresCompleted;	// 120 = 0x78
    _Bool _shouldPostAppsDone;	// 121 = 0x79
    _Bool _shouldPostUpdatesDone;	// 122 = 0x7a
    _Bool _shouldRefreshApplicationBadge;	// 123 = 0x7b
    _Bool _shouldPostProcessAutomaticUpdatesCompleted;	// 124 = 0x7c
}

- (void).cxx_destruct;	// IMP=0x00200000000876e2
- (id)init;	// IMP=0x001000000008694e

@end

