//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSLockStateTracker, OctagonStateMachine;
@protocol OS_dispatch_queue;

@interface EscrowRequestController : NSObject
{
    _Bool _forceIgnoreCloudServicesRateLimiting;	// 8 = 0x8
    _Bool _haveRecordedDate;	// 9 = 0x9
    OctagonStateMachine *_stateMachine;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CKKSLockStateTracker *_lockStateTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000033e2b
@property _Bool haveRecordedDate; // @synthesize haveRecordedDate=_haveRecordedDate;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool forceIgnoreCloudServicesRateLimiting; // @synthesize forceIgnoreCloudServicesRateLimiting=_forceIgnoreCloudServicesRateLimiting;
@property(retain) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)storePrerecordsInEscrowRPC:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033c04
- (void)triggerEscrowUpdateRPC:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000331da
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x0010000000032745
- (id)initWithLockStateTracker:(id)arg1;	// IMP=0x0010000000032524

@end

