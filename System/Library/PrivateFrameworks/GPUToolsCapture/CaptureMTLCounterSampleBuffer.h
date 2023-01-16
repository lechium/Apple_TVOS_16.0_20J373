//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLCounterSampleBuffer, MTLDevice;

__attribute__((visibility("hidden")))
@interface CaptureMTLCounterSampleBuffer : NSObject
{
    id <MTLCounterSampleBuffer> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d38c
- (id)resolveCounterRange:(struct _NSRange)arg1;	// IMP=0x000000000002d225
@property(readonly) unsigned long long sampleCount;
@property(readonly) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000002d1d5
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000002d1c4
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000002d103
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000002d0a3
- (id)originalObject;	// IMP=0x000000000002d095
- (void)dealloc;	// IMP=0x000000000002cfa7
@property(readonly) id <MTLCounterSampleBuffer> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000002cebb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
