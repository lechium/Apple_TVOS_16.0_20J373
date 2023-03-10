//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKCloudTournamentCache : NSObject
{
    _Bool _haveSubscription;	// 8 = 0x8
    CKRecordID *_userRecordID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_userRecordQueue;	// 32 = 0x20
    NSMutableDictionary *_tokensByZoneID;	// 40 = 0x28
    NSMutableDictionary *_tournamentDefinitionsByRecordID;	// 48 = 0x30
    NSMutableDictionary *_tournamentsByRecordID;	// 56 = 0x38
    NSMutableDictionary *_tournamentRecordIDByParticipantRecordID;	// 64 = 0x40
    NSMutableDictionary *_tournamentParticipantsGroupedByTournamentID;	// 72 = 0x48
    NSMutableDictionary *_inviteURLByTournamentRecordID;	// 80 = 0x50
    NSMutableDictionary *_contactInviteByRecordID;	// 88 = 0x58
    NSDate *_expiration;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000c84b7
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSMutableDictionary *contactInviteByRecordID; // @synthesize contactInviteByRecordID=_contactInviteByRecordID;
@property(retain, nonatomic) NSMutableDictionary *inviteURLByTournamentRecordID; // @synthesize inviteURLByTournamentRecordID=_inviteURLByTournamentRecordID;
@property(retain, nonatomic) NSMutableDictionary *tournamentParticipantsGroupedByTournamentID; // @synthesize tournamentParticipantsGroupedByTournamentID=_tournamentParticipantsGroupedByTournamentID;
@property(retain, nonatomic) NSMutableDictionary *tournamentRecordIDByParticipantRecordID; // @synthesize tournamentRecordIDByParticipantRecordID=_tournamentRecordIDByParticipantRecordID;
@property(retain, nonatomic) NSMutableDictionary *tournamentsByRecordID; // @synthesize tournamentsByRecordID=_tournamentsByRecordID;
@property(retain, nonatomic) NSMutableDictionary *tournamentDefinitionsByRecordID; // @synthesize tournamentDefinitionsByRecordID=_tournamentDefinitionsByRecordID;
- (id);	// IMP=0x00100000000c83fa
@property(retain, nonatomic) NSMutableDictionary *tokensByZoneID; // @synthesize tokensByZoneID=_tokensByZoneID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *userRecordQueue; // @synthesize userRecordQueue=_userRecordQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (_Bool)tournamentWithID:(id)arg1 containsRecordForParticipantWithID:(id)arg2;	// IMP=0x00100000000c8308
- (id)participantRecordsSortedByScoreForTournamentWithID:(id)arg1;	// IMP=0x00100000000c80c5
- (id)contactInviteDataRecordWithID:(id)arg1;	// IMP=0x00100000000c7f17
- (id)localPlayerParticipantRecordForTournamentWithID:(id)arg1;	// IMP=0x00100000000c7c1d
- (id)allParticipantsRecordsForTournamentWithID:(id)arg1;	// IMP=0x00100000000c7a6f
- (id)participantsRecordsForTournamentWithID:(id)arg1;	// IMP=0x00100000000c787e
- (id)localPlayerParticipantPlayerInternalForTournamentWithID:(id)arg1;	// IMP=0x00100000000c76ff
- (id)localParticipantInternalNoDispatchForTournamentWithID:(id)arg1;	// IMP=0x00100000000c7077
- (id)inviteURLForCustomTournamentWithID:(id)arg1;	// IMP=0x00100000000c6ec9
- (id)tournamentInternalsMatchingPredicate:(id)arg1;	// IMP=0x00100000000c6c1c
- (id)allTournamentRecordsForTournamentDefinitionWithID:(id)arg1 ofType:(long long)arg2;	// IMP=0x00100000000c6855
- (id)tournamentRecordWithID:(id)arg1;	// IMP=0x00100000000c66a7
- (id)tournamentInternalsFromTournamentRecords:(id)arg1;	// IMP=0x00100000000c64c5
- (id)tournamentInternalWithID:(id)arg1;	// IMP=0x00100000000c62ef
- (id)tournamentInternalFromRecordNoDispatch:(id)arg1;	// IMP=0x00100000000c4e1c
- (id)tournamentDefinitionRecordsWithBundleID:(id)arg1;	// IMP=0x00100000000c4b10
- (id)tournamentDefinitionRecordWithID:(id)arg1;	// IMP=0x00100000000c4962
- (id)tournamentDefinitionInternalWithID:(id)arg1;	// IMP=0x00100000000c47e3
- (id)createTournamentDefinitionInternalWithIdentifierWithoutDispatch:(id)arg1;	// IMP=0x00100000000c3e39
- (id)cacheURL;	// IMP=0x00100000000c3d34
- (void)clearWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3b8d
- (void)updateForCustomTournament:(id)arg1 inviteURL:(id)arg2;	// IMP=0x00100000000c3a36
- (void)updateWithChangedContactInviteRecords:(id)arg1 removedContactRecordIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c3637
- (void)updateWithChangedTournamentRecords:(id)arg1 removedTournamentRecordIDs:(id)arg2 changedParticipantRecords:(id)arg3 removedParticipantRecordIDs:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c2adc
- (void)updateWithChangedTournamentDefinitionRecords:(id)arg1 removedTournamentDefinitionRecordIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c26dd
- (void)clearPublicTournamentDataForUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c2509
- (void)updateWithChangedTokens:(id)arg1 removedTokensWithZoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c20c7
- (id)tokenForZoneID:(id)arg1;	// IMP=0x00100000000c1ecd
@property(nonatomic) _Bool haveSubscription; // @synthesize haveSubscription=_haveSubscription;
@property(nonatomic, getter=isValid) _Bool valid; // @dynamic valid;
- (void)updateUserRecordWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c14b7
- (id)init;	// IMP=0x00100000000c114c

@end

