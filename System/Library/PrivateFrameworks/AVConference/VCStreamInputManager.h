//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamInputManager
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_streamInputQueue;	// 32 = 0x20
    NSMutableDictionary *_streamInputs;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00100000001676fd
- (void)didResumeStreamInput:(id)arg1;	// IMP=0x0000000000169320
- (void)didSuspendStreamInput:(id)arg1;	// IMP=0x000000000016926c
- (void)didStopStreamInput:(id)arg1;	// IMP=0x00000000001691b8
- (void)didStartStreamInput:(id)arg1;	// IMP=0x0000000000169104
- (id)streamInputWithID:(long long)arg1;	// IMP=0x0000000000168f9a
- (void)deregisterBlocksForService;	// IMP=0x0000000000168f61
- (void)registerBlocksForService;	// IMP=0x0000000000168e4e
- (void)registerDidClientDieBlock:(id)arg1;	// IMP=0x0000000000168d02
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 eventLogLevel:(int)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000168bac
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000168b91
- (_Bool)pushSampleBufferWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001689d8
- (_Bool)clientProcessDiedWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001687f8
- (_Bool)terminateStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001684d2
- (_Bool)getServerPidWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000001682e6
- (_Bool)initializeStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000167bca
- (id)newStreamInputID;	// IMP=0x0000000000167a75
- (void)dealloc;	// IMP=0x00000000001679e3
- (id)autorelease;	// IMP=0x00000000001679da
- (oneway void)release;	// IMP=0x00000000001679d4
- (unsigned long long)retainCount;	// IMP=0x00000000001679c7
- (id)retain;	// IMP=0x00000000001679be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001679b5
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001679a8
- (id)init;	// IMP=0x0000000000167742

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
