//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MCMTestLocks : NSObject
{
    long long _lockCount[13];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockQueue[13];	// 112 = 0x70
    NSObject<OS_dispatch_semaphore> *_lockSemaphore[13];	// 216 = 0xd8
    _Bool _enabled;	// 320 = 0x140
    NSObject<OS_dispatch_queue> *_stateQueue;	// 328 = 0x148
}

+ (id)sharedInstance;	// IMP=0x00600000000021be
- (void).cxx_destruct;	// IMP=0x0000000000001aab
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)_stateQueue_releaseLock:(unsigned long long)arg1;	// IMP=0x00000000000019f7
- (void)_stateQueue_acquireLock:(unsigned long long)arg1;	// IMP=0x0000000000001932
- (void)_stateQueue_updateCountForLock:(unsigned long long)arg1 byCount:(long long)arg2;	// IMP=0x00000000000017d8
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)waitOnLock:(unsigned long long)arg1;	// IMP=0x00000000000013a5
- (void)releaseAllLocks;	// IMP=0x0000000000001311
- (void)releaseLock:(unsigned long long)arg1;	// IMP=0x0000000000001272
- (void)acquireLock:(unsigned long long)arg1;	// IMP=0x00000000000011d3
- (id)init;	// IMP=0x00000000000010d9

@end
