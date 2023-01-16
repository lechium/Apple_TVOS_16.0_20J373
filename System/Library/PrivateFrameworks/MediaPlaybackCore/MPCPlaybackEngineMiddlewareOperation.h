//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlaybackEngineMiddleware, MPCPlayerRequest, NSArray, NSError, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineMiddlewareOperation : MPAsyncOperation
{
    NSMapTable *_inputOperations;	// 8 = 0x8
    CDUnknownBlockType _invalidationHandler;	// 16 = 0x10
    NSArray *_invalidationObservers;	// 24 = 0x18
    MPCPlaybackEngineMiddleware *_middleware;	// 32 = 0x20
    MPCPlayerRequest *_playerRequest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009db40
@property(retain, nonatomic) MPCPlayerRequest *playerRequest; // @synthesize playerRequest=_playerRequest;
@property(retain, nonatomic) MPCPlaybackEngineMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSMapTable *inputOperations; // @synthesize inputOperations=_inputOperations;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputProtocols;
- (void)execute;	// IMP=0x000000000009d677
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;	// IMP=0x000000000009d5d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
