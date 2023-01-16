//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ADCompanionRoutingService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_pendingCallResultBlocks;	// 16 = 0x10
    _Bool _isInCall;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000982e3
- (void)_processPendingCallResultBlocks;	// IMP=0x001000000009811a
- (void)_callStateDidChange:(id)arg1;	// IMP=0x001000000009803e
- (void)preheatDomain:(id)arg1;	// IMP=0x0010000000097b1a
- (void)_handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000973c3
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000009727d
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000097275
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000096e48
- (id)domains;	// IMP=0x0010000000096d6e
- (id)handle;	// IMP=0x0010000000096d65
- (id)init;	// IMP=0x0010000000096c53

@end
