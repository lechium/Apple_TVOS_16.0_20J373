//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;
@protocol OS_xpc_object;

@interface BMSyncSessionMetricsAggregator : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
    NSObject<OS_xpc_object> *_activity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005cb9
- (void)compactAndDeleteSessionLogs;	// IMP=0x0010000000005ca3
- (id)computeAggregatedSessionLogs;	// IMP=0x0010000000005c8d
- (void)computeAndSendAggregatedMetrics;	// IMP=0x0010000000005b5a
- (id)initWithDatabase:(id)arg1 activity:(id)arg2;	// IMP=0x0010000000005ac1

@end

