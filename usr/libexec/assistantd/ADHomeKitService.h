//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMClientConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ADHomeKitService
{
    HMClientConnection *_hmConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002641e0
- (id)_hmConnection;	// IMP=0x001000000026418f
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000263e85
- (void)resetExternalResources;	// IMP=0x0010000000263e11
- (void)preheatDomain:(id)arg1;	// IMP=0x0010000000263da0
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000263d98
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000263d0c
- (id)domains;	// IMP=0x0010000000263ca2
- (id)handle;	// IMP=0x0010000000263c99
- (id)init;	// IMP=0x0010000000263bd5

@end
