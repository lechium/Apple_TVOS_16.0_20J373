//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ArcadePayoutMetricsHandler
{
}

- (id)_qualifiedEventsForWeekStartingWithDate:(id)arg1 context:(id)arg2;	// IMP=0x00400000000d174a
- (id)_activeAccountIDForAppEvent:(id)arg1 context:(id)arg2 withAccountEvents:(id)arg3;	// IMP=0x00100000000d12a2
- (_Bool)shouldCollectMetrics;	// IMP=0x00100000000d129a
- (void)recordLaunches:(id)arg1;	// IMP=0x00100000000cfa42
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00100000000cf9f0
- (_Bool)isCandidateAppMetadata:(id)arg1;	// IMP=0x00100000000cf9da

@end
