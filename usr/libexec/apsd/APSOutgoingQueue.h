//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface APSOutgoingQueue : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    double _lastReceivedAckOrReconnect;	// 24 = 0x18
    void *_powerAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000898ef
- (void)_timerFired:(id)arg1;	// IMP=0x00100000000894bb
- (void)_recalculatePowerAssertion;	// IMP=0x0010000000089240
- (void)_recalculateTimer;	// IMP=0x0010000000088dd5
- (void)_queueChanged;	// IMP=0x0010000000088b84
- (void)handleConnectionClosedOnInterface:(long long)arg1;	// IMP=0x0010000000088990
- (void)handleConnectionOpened;	// IMP=0x0010000000088956
- (void)handleResponseForPendingItem:(id)arg1 error:(id)arg2 onInterface:(long long)arg3;	// IMP=0x001000000008866e
- (void)enqueueSendBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000884b9
- (void)dealloc;	// IMP=0x001000000008847a

@end

