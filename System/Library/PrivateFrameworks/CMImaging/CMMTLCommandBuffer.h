//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMTLCommandQueue, InterceptConfig, NSDictionary, NSError, NSMutableDictionary, NSMutableString, NSString;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDeadlineProfile, MTLDevice, MTLLogContainer;

__attribute__((visibility("hidden")))
@interface CMMTLCommandBuffer : NSObject
{
    NSMutableString *_cmLabel;	// 8 = 0x8
    CMMTLCommandQueue *_cmCommandQueue;	// 16 = 0x10
    id <MTLCommandBuffer> _commandBuffer;	// 24 = 0x18
    _Bool _unretained;	// 32 = 0x20
    InterceptConfig *_interceptConfig;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000008556
@property(retain, nonatomic) InterceptConfig *interceptConfig; // @synthesize interceptConfig=_interceptConfig;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000084aa
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000000845a
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000008425
- (void)commit;	// IMP=0x0000000000007f9c
- (id)initWithCMMTLCommandQueue:(id)arg1 unretained:(_Bool)arg2;	// IMP=0x0000000000007e73
- (void)waitUntilScheduled;	// IMP=0x0000000000007e5d
- (void)waitUntilCompleted;	// IMP=0x0000000000007e47
@property(readonly) id <MTLCommandQueue> commandQueue;

// Remaining properties
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly, retain) id <MTLDeadlineProfile> deadlineProfile;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSError *error;
@property(readonly) unsigned long long errorOptions;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) unsigned long long hash;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(readonly) id <MTLLogContainer> logs;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) NSDictionary *profilingResults;
@property(readonly) _Bool retainedReferences;
@property(readonly) unsigned long long status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;

@end

