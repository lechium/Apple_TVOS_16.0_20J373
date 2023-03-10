//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GKCustomTournamentRequestInternal, GKPlayerInternal, GKTournamentInternal, GKTournamentParticipantRequestInternal, NSArray, NSPredicate, NSString;

@protocol GKTournamentService <NSObject>
- (oneway void)getAcceptedCustomTournamentWithCompletionHandler:(void (^)(GKTournamentInternal *, NSError *))arg1;
- (oneway void)getShareURLForCustomTournament:(GKTournamentInternal *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)loadHistoricalDataForPlayer:(GKPlayerInternal *)arg1 tournamentDefinition:(NSString *)arg2 completionHandler:(void (^)(GKTournamentParticipantHistoricalDataInternal *, NSError *))arg3;
- (oneway void)loadTournamentsWithPredicate:(NSPredicate *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)loadTournamentDefinitionWithID:(NSString *)arg1 completionHandler:(void (^)(GKTournamentDefinitionInternal *, NSError *))arg2;
- (oneway void)loadTournamentDefinitionsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)removeCreator:(GKPlayerInternal *)arg1 forTournament:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (oneway void)addCreator:(GKPlayerInternal *)arg1 forTournament:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (oneway void)removeInvitees:(NSArray *)arg1 forTournament:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (oneway void)addInvitees:(NSArray *)arg1 forTournament:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (oneway void)declineInvitationForTournament:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)acceptInvitationForTournament:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)createCustomTournamentWithRequest:(GKCustomTournamentRequestInternal *)arg1 completionHandler:(void (^)(GKTournamentInternal *, NSError *))arg2;
- (oneway void)getTournamentStateForTournament:(NSString *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (oneway void)loadParticipantsForTournament:(NSString *)arg1 request:(GKTournamentParticipantRequestInternal *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getLocalParticipantForTournament:(NSString *)arg1 completionHandler:(void (^)(GKTournamentParticipantInternal *, NSError *))arg2;
- (oneway void)getTotalPlayerCountInTournament:(NSString *)arg1 forGroup:(long long)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
- (oneway void)resumePlayInTournament:(NSString *)arg1 withTryToken:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (oneway void)beginPlayInTournament:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)resignFromTournament:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)registerPlayerInTournament:(NSString *)arg1 playerGroup:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (oneway void)reportProgressScore:(long long)arg1 withTryToken:(NSString *)arg2 forTournament:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (oneway void)reportScore:(long long)arg1 withTryToken:(NSString *)arg2 forTournament:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

