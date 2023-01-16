//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSArray, NSError, NSMutableArray, TVHKMediaEntitiesFetchCache, TVHKMediaEntitiesFetchOperation, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMultipleMediaEntitiesFetchOperation : TVHKAsynchronousOperation
{
    NSArray *_requests;	// 8 = 0x8
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 16 = 0x10
    TVHKMediaLibrarySessionState *_sessionState;	// 24 = 0x18
    TVHKMediaLibraryRequestSession *_requestSession;	// 32 = 0x20
    TVHKMediaEntitiesFetchCache *_fetchCache;	// 40 = 0x28
    NSArray *_responses;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    NSMutableArray *_mutableResponses;	// 64 = 0x40
    NSMutableArray *_remainingRequests;	// 72 = 0x48
    TVHKMediaEntitiesFetchOperation *_fetchOperation;	// 80 = 0x50
}

+ (id)new;	// IMP=0x0060000000031b2f
- (void).cxx_destruct;	// IMP=0x00000000000323cd
@property(retain, nonatomic) TVHKMediaEntitiesFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSMutableArray *remainingRequests; // @synthesize remainingRequests=_remainingRequests;
@property(retain, nonatomic) NSMutableArray *mutableResponses; // @synthesize mutableResponses=_mutableResponses;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) TVHKMediaEntitiesFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void)_runNextFetchOperationIfPossible;	// IMP=0x0000000000031e32
- (void)cancel;	// IMP=0x0000000000031db4
- (void)executionDidBegin;	// IMP=0x0000000000031da2
- (id)initWithRequests:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5;	// IMP=0x0000000000031bcd
- (id)init;	// IMP=0x0000000000031b5e

@end

