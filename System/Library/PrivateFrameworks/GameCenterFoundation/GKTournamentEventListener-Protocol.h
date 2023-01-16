//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKInvite, GKPlayer, GKTournament, GKTurnBasedMatch;

@protocol GKTournamentEventListener

@optional
- (void)localPlayerDidAcceptInviteTo:(GKTurnBasedMatch *)arg1 applicationDidBecomeActive:(_Bool)arg2;
- (void)localPlayerDidAcceptRealTimeMatchInvite:(GKInvite *)arg1 forTournament:(GKTournament *)arg2;
- (void)player:(GKPlayer *)arg1 didAcceptInviteToCustomTournament:(GKTournament *)arg2;
@end

