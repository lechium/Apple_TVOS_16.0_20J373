//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HHAAssignment, HHAEndpoint, HHAEndpointMonitor, HHAHub, HHAHubMonitor, NSArray, NSSet;

@protocol HHAAssignmentAlgorithm
- (NSArray *)leastFitAssignments:(long long)arg1 forHub:(HHAHub *)arg2;
- (NSArray *)allPossibleAssignments;
- (NSSet *)equivalentOrBetterAssignmentsForEndpoint:(HHAEndpoint *)arg1;
- (HHAAssignment *)maybeGenerateAssignmentForEndpoint:(HHAEndpoint *)arg1;
- (NSSet *)generateBetterAssignments;
- (void)startWithHubs:(HHAHubMonitor *)arg1 andEndpoints:(HHAEndpointMonitor *)arg2;
@end
