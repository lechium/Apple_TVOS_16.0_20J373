//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLIOFileHandle, MTLIOHandleSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLIOHandle : NSObject
{
    id <MTLIOHandleSPI> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000032c9d
- (void)dealloc;	// IMP=0x0000000000032baf
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000032b99
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000032b88
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000032ac7
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000032a67
- (id)originalObject;	// IMP=0x0000000000032a59
@property(readonly) unsigned int vnioID;
@property(copy) NSString *label;
@property(readonly, nonatomic) unsigned long long globalTraceObjectID;
@property(readonly) id <MTLIOFileHandle> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x00000000000327ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

