//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VSAnalyticsService
{
}

- (void)recordNowPlayingBrokenEventWithBundleID:(id)arg1;	// IMP=0x000000000003e4c3
- (void)recordFederatedPunchoutEventWithError:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000003e2c6
- (id)init;	// IMP=0x000000000003e191

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
