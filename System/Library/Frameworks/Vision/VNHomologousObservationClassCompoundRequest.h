//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNHomologousObservationClassCompoundRequest
{
    NSMapTable *_requestsClassMapping;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000283bd2
- (id)originalRequestsOfClass:(Class)arg1;	// IMP=0x0000000000283bb5
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x0000000000283b23
- (id)initWithSubrequests:(id)arg1;	// IMP=0x00000000002836c3

@end

