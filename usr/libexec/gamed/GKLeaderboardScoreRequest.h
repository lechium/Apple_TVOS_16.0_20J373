//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject
{
    GKPlayerInternal *_playerInternal;	// 8 = 0x8
    NSString *_gameBundleID;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_groupIdentifier;	// 32 = 0x20
    _Bool _friendsOnly;	// 40 = 0x28
    long long _timeScope;	// 48 = 0x30
    _Bool _prefetch;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000a1241
+ (id)requestForPlayerInternals:(id)arg1;	// IMP=0x00100000000a11eb
+ (id)requestForRankRange:(struct _NSRange)arg1;	// IMP=0x00100000000a11a4
- (void).cxx_destruct;	// IMP=0x00100000000a1677
@property(nonatomic, getter=isPrefetch) _Bool prefetch; // @synthesize prefetch=_prefetch;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(nonatomic) _Bool friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property(copy, nonatomic) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a14e8
- (unsigned long long)hash;	// IMP=0x00100000000a14a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a13bc
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a1249
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b7e7c
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b7d64
- (void)updatePlayersForLeaderboard:(id)arg1 service:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b7862
- (id)scoreForServerRepresentation:(id)arg1 leaderboard:(id)arg2;	// IMP=0x00100000001b758d
- (id)leaderboardForServerRepresentations:(id)arg1;	// IMP=0x00100000001b723c
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000001b7123
- (id)bagKey;	// IMP=0x00100000001b700a
- (id)serverPlayerScope;	// IMP=0x00100000001b6fdf
- (id)serverTimeScope;	// IMP=0x00100000001b6fa8

@end

