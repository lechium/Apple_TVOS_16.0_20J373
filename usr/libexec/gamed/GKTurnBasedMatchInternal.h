//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal, GKPlayerInternal, MISSING_TYPE, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface GKTurnBasedMatchInternal
{
    NSString *_matchID;	// 8 = 0x8
    NSString *_status;	// 16 = 0x10
    MISSING_TYPE *_state;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
    NSDictionary *_localizableMessage;	// 40 = 0x28
    NSString *_reason;	// 48 = 0x30
    NSDate *_creationDate;	// 56 = 0x38
    NSDate *_lastTurnDate;	// 64 = 0x40
    NSDate *_deletionDate;	// 72 = 0x48
    GKPlayerInternal *_currentPlayer;	// 80 = 0x50
    NSString *_lastTurnPlayerID;	// 88 = 0x58
    NSData *_matchData;	// 96 = 0x60
    NSString *_matchDataVersion;	// 104 = 0x68
    NSArray *_participants;	// 112 = 0x70
    NSString *_bundleID;	// 120 = 0x78
    NSString *_bundleVersion;	// 128 = 0x80
    NSString *_shortBundleVersion;	// 136 = 0x88
    long long _platform;	// 144 = 0x90
    GKGameInternal *_game;	// 152 = 0x98
    NSArray *_exchanges;	// 160 = 0xa0
    unsigned int _turnNumber;	// 168 = 0xa8
    unsigned char _minPlayers;	// 172 = 0xac
    unsigned char _maxPlayers;	// 173 = 0xad
    BOOL _currentParticipant;	// 174 = 0xae
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00400000001736d7
- (void).cxx_destruct;	// IMP=0x0020000000174d28
@property(retain, nonatomic) GKGameInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) NSArray *exchanges; // @synthesize exchanges=_exchanges;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *matchDataVersion; // @synthesize matchDataVersion=_matchDataVersion;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) NSData *matchData; // @synthesize matchData=_matchData;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @synthesize lastTurnPlayerID=_lastTurnPlayerID;
@property(nonatomic) unsigned int turnNumber; // @synthesize turnNumber=_turnNumber;
@property(nonatomic) BOOL currentParticipant; // @synthesize currentParticipant=_currentParticipant;
@property(retain, nonatomic) NSDate *deletionDate; // @synthesize deletionDate=_deletionDate;
@property(nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(retain, nonatomic) GKPlayerInternal *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
- (id)descriptionSubstitutionMap;	// IMP=0x00100000001749dc
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (long long)activeExchangeCount;	// IMP=0x001000000017406b
- (long long)previousParticipantIndex;	// IMP=0x0010000000173df4
- (long long)localPlayerParticipantIndex;	// IMP=0x0010000000173d62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000173bc7
- (unsigned long long)hash;	// IMP=0x0010000000173b83
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x001000000017ce37

@end

