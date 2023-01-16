//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAnalyticsService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000114e9e
+ (Class)interfaceClass;	// IMP=0x0010000000114e8d
- (void)respondedToBulletin:(id)arg1;	// IMP=0x0020000000114f11
- (void)purchasedGame:(id)arg1;	// IMP=0x0010000000114f0b
- (void)stoppedPlayingGame;	// IMP=0x0010000000114f05
- (void)beganPlayingGame;	// IMP=0x0010000000114eff
- (void)quitMatch:(id)arg1 withOutcome:(long long)arg2;	// IMP=0x0010000000114ef9
- (void)disconnectedMatchWithID:(id)arg1;	// IMP=0x0010000000114ef3
- (void)rematchedWithMatchRequest:(id)arg1;	// IMP=0x0010000000114eed
- (void)sentMatchRequest:(id)arg1;	// IMP=0x0010000000114ee7
- (void)declinedInvite:(id)arg1;	// IMP=0x0010000000114ee1
- (void)declinedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x0010000000114edb
- (void)acceptedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x0010000000114ed5
- (void)acceptedInvite:(id)arg1;	// IMP=0x0010000000114ecf
- (void)completedChallenge:(id)arg1;	// IMP=0x0010000000114ec9
- (void)wantsToPlayChallenge:(id)arg1;	// IMP=0x0010000000114ec3
- (void)declinedChallenge:(id)arg1;	// IMP=0x0010000000114ebd
- (void)postedScore:(id)arg1;	// IMP=0x0010000000114eb7
- (void)updatedAchievement:(id)arg1;	// IMP=0x0010000000114eb1
- (_Bool)requiresAuthentication;	// IMP=0x0010000000114ea9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
