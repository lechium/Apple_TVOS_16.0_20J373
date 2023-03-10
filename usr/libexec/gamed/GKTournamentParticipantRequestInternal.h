//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKTournamentParticipantRequestInternal
{
    _Bool _friendsOnly;	// 8 = 0x8
    NSArray *_participantStates;	// 16 = 0x10
    long long _startIndex;	// 24 = 0x18
    long long _count;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000131959
- (void).cxx_destruct;	// IMP=0x0020000000131b44
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) _Bool friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property(retain, nonatomic) NSArray *participantStates; // @synthesize participantStates=_participantStates;

@end

