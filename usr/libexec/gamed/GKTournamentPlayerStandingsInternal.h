//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKTournamentPlayerStandingsInternal
{
    long long _score;	// 8 = 0x8
    long long _topScore;	// 16 = 0x10
    long long _friendRank;	// 24 = 0x18
    long long _friendCount;	// 32 = 0x20
    long long _globalRank;	// 40 = 0x28
    long long _globalPlayerCount;	// 48 = 0x30
    long long _replayCount;	// 56 = 0x38
    long long _participantState;	// 64 = 0x40
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000131f09
@property(nonatomic) long long participantState; // @synthesize participantState=_participantState;
@property(nonatomic) long long replayCount; // @synthesize replayCount=_replayCount;
@property(nonatomic) long long globalPlayerCount; // @synthesize globalPlayerCount=_globalPlayerCount;
@property(nonatomic) long long globalRank; // @synthesize globalRank=_globalRank;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) long long friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) long long topScore; // @synthesize topScore=_topScore;
@property(nonatomic) long long score; // @synthesize score=_score;

@end

