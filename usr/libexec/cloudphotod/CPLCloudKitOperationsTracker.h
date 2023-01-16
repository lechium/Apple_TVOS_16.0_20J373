//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCloudKitOperationCounter, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLCloudKitOperationsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_tasks;	// 16 = 0x10
    CPLCloudKitOperationCounter *_operationCounter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000cbbf9
- (id)statusDictionary;	// IMP=0x00100000000cb890
- (id)status;	// IMP=0x00100000000cb6a9
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x00100000000cb343
- (void)cancelAllOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cafdc
- (void)taskDidFinish:(id)arg1;	// IMP=0x00100000000cadc9
- (void)taskHasBeenCancelled:(id)arg1;	// IMP=0x00100000000cac49
- (void)operationHasBeenCancelled:(id)arg1;	// IMP=0x00100000000caac1
- (void)operationDidFinish:(id)arg1;	// IMP=0x00100000000ca7ff
- (void)operation:(id)arg1 updateContextWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ca74d
- (void)operation:(id)arg1 updateProgress:(double)arg2;	// IMP=0x00100000000ca5c5
- (_Bool)isOperationBlocked:(id)arg1;	// IMP=0x00100000000ca486
- (void)operationDidProgressOneBatch:(id)arg1;	// IMP=0x00100000000ca2db
- (id)_contextForOperation:(id)arg1;	// IMP=0x00100000000ca224
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3 bundleIdentifiers:(id)arg4;	// IMP=0x00100000000c9e2e
- (void)operationWillStart:(id)arg1 forTask:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000c9d2e
- (id)_bundleIdentifierFromCKOperation:(id)arg1;	// IMP=0x00100000000c9aee
- (void)taskWillStart:(id)arg1;	// IMP=0x00100000000c98d8
- (void)_emitLogForCurrentTasks;	// IMP=0x00100000000c97de
- (id)_pendingTaskStatus;	// IMP=0x00100000000c93b3
- (id)init;	// IMP=0x00100000000c930a

@end
