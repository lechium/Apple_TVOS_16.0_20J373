//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, NSString;

@interface TaskQueue : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
}

+ (id)networkQueue;	// IMP=0x004000000000e89f
- (void).cxx_destruct;	// IMP=0x002000000000eab6
- (void)waitUntilAllTasksAreFinished;	// IMP=0x001000000000eaa0
- (void)cancelAllTasks;	// IMP=0x001000000000ea8a
- (void)addTaskWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ea74
- (void)addTasks:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x001000000000ea5e
- (void)addTask:(id)arg1;	// IMP=0x001000000000ea48
@property long long qualityOfService;
@property(readonly, copy) NSArray *tasks;
@property(copy) NSString *name;
- (void)setUnderlyingQueue:(id)arg1;	// IMP=0x001000000000e9c4
@property long long maxConcurrentOperationCount;
- (id)init;	// IMP=0x001000000000e90f

@end

