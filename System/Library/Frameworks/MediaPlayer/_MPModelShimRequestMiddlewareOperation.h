//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAsyncOperation.h"

@class MPModelRequest, NSArray, NSError, NSString, _MPModelShimRequestMiddleware;

__attribute__((visibility("hidden")))
@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    CDUnknownBlockType _invalidationHandler;	// 16 = 0x10
    _MPModelShimRequestMiddleware *_middleware;	// 24 = 0x18
    MPModelRequest *_modelRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000081b29
@property(retain, nonatomic) MPModelRequest *modelRequest; // @synthesize modelRequest=_modelRequest;
@property(retain, nonatomic) _MPModelShimRequestMiddleware *middleware; // @synthesize middleware=_middleware;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (void)execute;	// IMP=0x0000000000081a32
- (id)initWithMiddleware:(id)arg1 modelRequest:(id)arg2;	// IMP=0x0000000000081990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

