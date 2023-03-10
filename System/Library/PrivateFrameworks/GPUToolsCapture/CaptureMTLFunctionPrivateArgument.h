//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLFunctionPrivateArgumentSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLFunctionPrivateArgument : NSObject
{
    NSObject<MTLFunctionPrivateArgumentSPI> *_baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000066f53
- (void)dealloc;	// IMP=0x0000000000066e65
@property(readonly) NSString *typeName;
@property(readonly) NSString *qualifier;
@property(readonly) NSString *name;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000066e0d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000066dfc
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000066dee
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000066d8e
- (id)originalObject;	// IMP=0x0000000000066d80
- (id)description;	// IMP=0x0000000000066d02
@property(readonly) id <MTLFunctionPrivateArgumentSPI> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x0000000000066c4f

@end

