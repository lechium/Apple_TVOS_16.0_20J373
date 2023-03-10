//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNRequestPerformer : NSObject
{
    struct os_unfair_lock_s _requestLock;	// 8 = 0x8
    NSMutableArray *_requestsInFlight;	// 16 = 0x10
    NSMutableArray *_requestsPending;	// 24 = 0x18
    NSMutableDictionary *_sequencedRequestObservations;	// 32 = 0x20
}

+ (id)_requestPerformingQueuePriorityGroup2;	// IMP=0x001000000022c4bb
+ (id)_requestPerformingQueuePriorityGroup1;	// IMP=0x001000000022c3f7
- (void).cxx_destruct;	// IMP=0x000000000022b713
- (void)cancelAllRequests;	// IMP=0x000000000022b52e
- (id)previousSequencedObservationsForRequest:(id)arg1;	// IMP=0x000000000022b4b7
- (void)recordSequencedObservationsForRequest:(id)arg1;	// IMP=0x000000000022b3df
- (_Bool)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000022b13d
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022b123
- (id)orderedRequestsForRequests:(id)arg1;	// IMP=0x000000000022b0f2
- (id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022adc8
- (_Bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022a191
- (void)_groupsRequestsWithTheSameOrdinality:(id)arg1 priorityGroup1:(id)arg2 priorityGroup2:(id)arg3;	// IMP=0x0000000000229e0c
- (void)_groupOrderedRequests:(id)arg1 ordinality:(id)arg2 ordinalityAndPriorityGroups:(id)arg3;	// IMP=0x0000000000229920
- (_Bool)_performRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000022967e
- (_Bool)_validateAndPrepareRequests:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002294cc
- (id)init;	// IMP=0x00000000002293de

@end

