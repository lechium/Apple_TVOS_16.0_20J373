//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKChallengeInternal, GKStoreItemInternal, NSString;

@interface GKChallengeBulletin
{
    GKChallengeInternal *_challenge;	// 16 = 0x10
    NSString *_challengeID;	// 24 = 0x18
    GKStoreItemInternal *_storeItem;	// 32 = 0x20
}

+ (void)expireChallengeList;	// IMP=0x0040000000027a15
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000027894
- (void).cxx_destruct;	// IMP=0x002000000002a70c
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)handleAcceptAction;	// IMP=0x0010000000029fc7
- (unsigned long long)launchEventType;	// IMP=0x0010000000029e7a
- (id)customChallengeSoundPathForBundleID:(id)arg1;	// IMP=0x0010000000029c78
- (void)assembleBulletin;	// IMP=0x0010000000029915
- (void)notifyClient:(id)arg1;	// IMP=0x0010000000029749
- (void)notifyApp;	// IMP=0x00100000000293e2
- (_Bool)isAppRunning;	// IMP=0x001000000002900f
- (void)refreshData;	// IMP=0x0010000000028d7c
- (void)setGameName:(id)arg1;	// IMP=0x0010000000028d17
- (_Bool)supportsChallenges;	// IMP=0x0010000000028ca9
- (id)gameName;	// IMP=0x0010000000028c2f
- (void)setOriginatorPlayer:(id)arg1;	// IMP=0x0010000000028bca
- (id)originatorPlayer;	// IMP=0x0010000000028b7a
- (void)setOriginatorPlayerID:(id)arg1;	// IMP=0x0010000000028b15
- (id)originatorPlayerID;	// IMP=0x0010000000028a9b
- (void)setReceiverPlayer:(id)arg1;	// IMP=0x0010000000028a36
- (id)receiverPlayer;	// IMP=0x00100000000289e6
- (void)setReceiverPlayerID:(id)arg1;	// IMP=0x0010000000028981
- (id)receiverPlayerID;	// IMP=0x0010000000028907
- (id)gameDescriptor;	// IMP=0x00100000000285a0
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000027cf3
- (id)URLContext;	// IMP=0x0010000000027a01
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000027966
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000278cb
- (id)init;	// IMP=0x001000000002789c

@end
