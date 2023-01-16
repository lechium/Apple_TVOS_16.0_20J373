//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDeadlineProfile;

__attribute__((visibility("hidden")))
@interface CaptureMTLDeadlineProfile : NSObject
{
    id <MTLDeadlineProfile> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006008a
- (void)dealloc;	// IMP=0x000000000005ff9c
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000005ff86
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000005ff75
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000005feb4
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000005fe54
- (id)originalObject;	// IMP=0x000000000005fe46
@property(readonly) id <MTLDeadlineProfile> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x000000000005fd94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

