//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivitySession, CSDMessagingConversationJoinedMetadata, CSDMessagingConversationLink, CSDMessagingConversationReport, CSDMessagingEncryptedConversationMessage, MISSING_TYPE, NSMutableArray, NSSet, NSString, NSUUID, TUConversationLink;

@interface CSDMessagingConversationMessage : PBCodable
{
    NSMutableArray *_activeLightweightParticipants;	// 8 = 0x8
    MISSING_TYPE *_activeParticipants;	// 16 = 0x10
    NSMutableArray *_activitySessions;	// 24 = 0x18
    NSMutableArray *_addedMembers;	// 32 = 0x20
    int _avMode;	// 40 = 0x28
    NSString *_conversationGroupUUIDString;	// 48 = 0x30
    unsigned int _disconnectedReason;	// 56 = 0x38
    int _enclosedEncryptedType;	// 60 = 0x3c
    CSDMessagingEncryptedConversationMessage *_encryptedMessage;	// 64 = 0x40
    NSString *_highlightIdentifier;	// 72 = 0x48
    NSMutableArray *_invitationPreferences;	// 80 = 0x50
    CSDMessagingConversationJoinedMetadata *_joinedMetadata;	// 88 = 0x58
    NSString *_letMeInDelegationHandle;	// 96 = 0x60
    NSString *_letMeInDelegationUUID;	// 104 = 0x68
    NSMutableArray *_lightweightMembers;	// 112 = 0x70
    CSDMessagingConversationLink *_link;	// 120 = 0x78
    NSString *_nickname;	// 128 = 0x80
    NSString *_protoUpgradeSessionUUID;	// 136 = 0x88
    NSMutableArray *_removedMembers;	// 144 = 0x90
    CSDMessagingConversationReport *_reportData;	// 152 = 0x98
    CSDMessagingConversationActivitySession *_stagedActivitySession;	// 160 = 0xa0
    int _type;	// 168 = 0xa8
    unsigned int _version;	// 172 = 0xac
    _Bool _guestModeEnabled;	// 176 = 0xb0
    _Bool _isLetMeInApproved;	// 177 = 0xb1
    _Bool _shouldSuppressInCallUI;	// 178 = 0xb2
    struct {
        unsigned int avMode:1;
        unsigned int disconnectedReason:1;
        unsigned int enclosedEncryptedType:1;
        unsigned int type:1;
        unsigned int version:1;
        unsigned int guestModeEnabled:1;
        unsigned int isLetMeInApproved:1;
        unsigned int shouldSuppressInCallUI:1;
    } _has;	// 180 = 0xb4
}

+ (Class)activeLightweightParticipantsType;	// IMP=0x002000000017f3f5
+ (Class)lightweightMembersType;	// IMP=0x001000000017f323
+ (Class)removedMembersType;	// IMP=0x001000000017f251
+ (Class)invitationPreferencesType;	// IMP=0x001000000017f17f
+ (Class)activitySessionsType;	// IMP=0x001000000017eaf2
+ (Class)addedMembersType;	// IMP=0x001000000017e9c2
+ (Class)activeParticipantsType;	// IMP=0x001000000017e8db
- (void).cxx_destruct;	// IMP=0x0010000000184450
@property(retain, nonatomic) CSDMessagingConversationActivitySession *stagedActivitySession; // @synthesize stagedActivitySession=_stagedActivitySession;
@property(retain, nonatomic) CSDMessagingConversationJoinedMetadata *joinedMetadata; // @synthesize joinedMetadata=_joinedMetadata;
@property(retain, nonatomic) NSString *highlightIdentifier; // @synthesize highlightIdentifier=_highlightIdentifier;
@property(nonatomic) _Bool guestModeEnabled; // @synthesize guestModeEnabled=_guestModeEnabled;
@property(retain, nonatomic) NSMutableArray *activeLightweightParticipants; // @synthesize activeLightweightParticipants=_activeLightweightParticipants;
@property(retain, nonatomic) NSMutableArray *lightweightMembers; // @synthesize lightweightMembers=_lightweightMembers;
@property(retain, nonatomic) NSMutableArray *removedMembers; // @synthesize removedMembers=_removedMembers;
@property(retain, nonatomic) NSMutableArray *invitationPreferences; // @synthesize invitationPreferences=_invitationPreferences;
@property(retain, nonatomic) NSString *letMeInDelegationUUID; // @synthesize letMeInDelegationUUID=_letMeInDelegationUUID;
@property(retain, nonatomic) NSString *letMeInDelegationHandle; // @synthesize letMeInDelegationHandle=_letMeInDelegationHandle;
@property(retain, nonatomic) CSDMessagingEncryptedConversationMessage *encryptedMessage; // @synthesize encryptedMessage=_encryptedMessage;
@property(nonatomic) _Bool isLetMeInApproved; // @synthesize isLetMeInApproved=_isLetMeInApproved;
@property(retain, nonatomic) CSDMessagingConversationReport *reportData; // @synthesize reportData=_reportData;
@property(retain, nonatomic) CSDMessagingConversationLink *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSMutableArray *activitySessions; // @synthesize activitySessions=_activitySessions;
@property(retain, nonatomic) NSString *protoUpgradeSessionUUID; // @synthesize protoUpgradeSessionUUID=_protoUpgradeSessionUUID;
@property(nonatomic) unsigned int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
@property(retain, nonatomic) NSMutableArray *addedMembers; // @synthesize addedMembers=_addedMembers;
@property(retain, nonatomic) NSString *conversationGroupUUIDString; // @synthesize conversationGroupUUIDString=_conversationGroupUUIDString;
@property(retain, nonatomic) NSMutableArray *activeParticipants; // @synthesize activeParticipants=_activeParticipants;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000183791
- (unsigned long long)hash;	// IMP=0x00100000001833f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000182e38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018224c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000181bbe
- (void)writeTo:(id)arg1;	// IMP=0x001000000018131d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000181310
- (id)dictionaryRepresentation;	// IMP=0x001000000017f67e
- (id)description;	// IMP=0x001000000017f5cf
- (int)StringAsAvMode:(id)arg1;	// IMP=0x001000000017f53d
- (id);	// IMP=0x001000000017f4f4
@property(nonatomic) _Bool hasAvMode;
@property(nonatomic) int avMode; // @synthesize avMode=_avMode;
@property(readonly, nonatomic) _Bool hasStagedActivitySession;
@property(readonly, nonatomic) _Bool hasJoinedMetadata;
@property(readonly, nonatomic) _Bool hasHighlightIdentifier;
@property(nonatomic) _Bool hasGuestModeEnabled;
- (id)activeLightweightParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017f3d8
- (unsigned long long)activeLightweightParticipantsCount;	// IMP=0x001000000017f3bb
- (void)addActiveLightweightParticipants:(id)arg1;	// IMP=0x001000000017f351
- (void)clearActiveLightweightParticipants;	// IMP=0x001000000017f334
- (id)lightweightMembersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017f306
- (unsigned long long)lightweightMembersCount;	// IMP=0x001000000017f2e9
- (void)addLightweightMembers:(id)arg1;	// IMP=0x001000000017f27f
- (void)clearLightweightMembers;	// IMP=0x001000000017f262
- (id)removedMembersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017f234
- (unsigned long long)removedMembersCount;	// IMP=0x001000000017f217
- (void)addRemovedMembers:(id)arg1;	// IMP=0x001000000017f1ad
- (void)clearRemovedMembers;	// IMP=0x001000000017f190
- (id)invitationPreferencesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017f162
- (unsigned long long)invitationPreferencesCount;	// IMP=0x001000000017f145
- (void)addInvitationPreferences:(id)arg1;	// IMP=0x001000000017f0db
- (void)clearInvitationPreferences;	// IMP=0x001000000017f0be
- (int)StringAsEnclosedEncryptedType:(id)arg1;	// IMP=0x001000000017ec8f
- (id)enclosedEncryptedTypeAsString:(int)arg1;	// IMP=0x001000000017ec36
@property(nonatomic) _Bool hasEnclosedEncryptedType;
@property(nonatomic) int enclosedEncryptedType; // @synthesize enclosedEncryptedType=_enclosedEncryptedType;
@property(readonly, nonatomic) _Bool hasLetMeInDelegationUUID;
@property(readonly, nonatomic) _Bool hasLetMeInDelegationHandle;
@property(readonly, nonatomic) _Bool hasEncryptedMessage;
@property(nonatomic) _Bool hasIsLetMeInApproved;
@property(readonly, nonatomic) _Bool hasReportData;
@property(readonly, nonatomic) _Bool hasLink;
@property(readonly, nonatomic) _Bool hasNickname;
- (id)activitySessionsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017ead5
- (unsigned long long)activitySessionsCount;	// IMP=0x001000000017eab8
- (void)addActivitySessions:(id)arg1;	// IMP=0x001000000017ea4e
- (void)clearActivitySessions;	// IMP=0x001000000017ea31
@property(readonly, nonatomic) _Bool hasProtoUpgradeSessionUUID;
@property(nonatomic) _Bool hasDisconnectedReason;
- (id)addedMembersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017e9a5
- (unsigned long long)addedMembersCount;	// IMP=0x001000000017e988
- (void)addAddedMembers:(id)arg1;	// IMP=0x001000000017e91e
- (void)clearAddedMembers;	// IMP=0x001000000017e901
@property(readonly, nonatomic) _Bool hasConversationGroupUUIDString;
- (id)activeParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017e8be
- (unsigned long long)activeParticipantsCount;	// IMP=0x001000000017e8a1
- (void)addActiveParticipants:(id)arg1;	// IMP=0x001000000017e837
- (void)clearActiveParticipants;	// IMP=0x001000000017e81a
@property(nonatomic) _Bool hasShouldSuppressInCallUI;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000017e3a2
- (id)typeAsString:(int)arg1;	// IMP=0x001000000017e349
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasVersion;
@property(copy, nonatomic, setter=setTUInvitationPreferences:) NSSet *tuInvitationPreferences;
@property(retain, nonatomic) NSUUID *conversationGroupUUID;
@property(readonly, copy, nonatomic) TUConversationLink *tuConversationLink;
@property(readonly, nonatomic) _Bool constitutesLetMeInApproval;
- (id)initWithEncryptedMessage:(id)arg1 enclosedType:(int)arg2 link:(id)arg3;	// IMP=0x0010000000004afb
- (id)initWithType:(int)arg1 groupUUID:(id)arg2 link:(id)arg3;	// IMP=0x0010000000004a28

@end
