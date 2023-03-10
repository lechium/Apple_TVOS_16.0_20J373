//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLeaderboardScoreRangeRequest
{
    struct _NSRange _range;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000a16b5
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a17fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a175f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a16bd
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b8aec
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001b8506
- (id)resourceIdentifier;	// IMP=0x00100000001b82a0
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00100000001b7fd6
- (id)bagKey;	// IMP=0x00100000001b7fc9
- (void)sanitizeRange;	// IMP=0x00100000001b7f94

@end

