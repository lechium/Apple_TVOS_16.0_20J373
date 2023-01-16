//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKTournamentInviteBulletin
{
    NSString *_tournamentID;	// 16 = 0x10
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000001129f5
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001128a4
+ (id)packFakeTournamentBulletinWithSharedInviteDictionary:(id)arg1;	// IMP=0x001000000011236b
- (void).cxx_destruct;	// IMP=0x0020000000114e7a
@property(retain) NSString *tournamentID; // @synthesize tournamentID=_tournamentID;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000011468c
- (void)handleDeclineAction;	// IMP=0x001000000011452d
- (void)handleAcceptAction;	// IMP=0x00100000001142e0
- (void)handleAction:(id)arg1;	// IMP=0x001000000011407f
- (void)assembleBulletin;	// IMP=0x00100000001137da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000011295a
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001128ac
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000001126c4

@end

