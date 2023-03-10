//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface BMRMapReduceService : NSObject
{
    APSConnection *_apsConn;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_apsQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_taskQueue;	// 24 = 0x18
}

+ (void)cleanupTaskResultDir;	// IMP=0x00200000000091e1
+ (_Bool)_isMapReduceEnabled;	// IMP=0x0010000000009137
+ (id)sharedInstance;	// IMP=0x0010000000009107
- (void).cxx_destruct;	// IMP=0x0020000000007f2e
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000007e99
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000077ff
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000007681
- (void)_sendHeartbeatAsyncWithToken:(id)arg1;	// IMP=0x0010000000007139
- (void)sendHeartbeat;	// IMP=0x001000000000711a
- (void)_sendLogFile:(id)arg1 data:(id)arg2 jobId:(id)arg3 taskId:(unsigned long long)arg4;	// IMP=0x001000000000704c
- (void)_sendTaskError:(id)arg1 jobId:(id)arg2 taskId:(unsigned long long)arg3;	// IMP=0x0010000000006d25
- (void)_sendTaskResultForjobId:(id)arg1 taskId:(unsigned long long)arg2;	// IMP=0x0010000000006910
- (_Bool)_writeOSAWithDSL:(id)arg1 result:(id)arg2;	// IMP=0x0010000000006908
- (void)_sendTaskStatus:(unsigned long long)arg1 jobId:(id)arg2 taskId:(unsigned long long)arg3;	// IMP=0x001000000000664b
- (id)_fetchAndValidateDSLPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006283
- (id)_fetchTaskInfo:(unsigned long long)arg1 jobId:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000005f46
- (_Bool)_saveTaskResult:(id)arg1 dsl:(id)arg2 jobId:(id)arg3 taskId:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00100000000057d0
- (void)_runTask:(unsigned long long)arg1 jobId:(id)arg2;	// IMP=0x0010000000004feb
- (id)_runDSL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000004f1b
- (id)init;	// IMP=0x0010000000004dcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

