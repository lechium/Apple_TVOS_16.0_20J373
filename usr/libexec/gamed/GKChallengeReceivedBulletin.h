//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeReceivedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000002cd24
- (void)handleDeclineAction;	// IMP=0x004000000002e91c
- (void)handleAction:(id)arg1;	// IMP=0x001000000002e5e0
- (unsigned long long)launchEventType;	// IMP=0x000000000002e5d8
- (void)assembleBulletin;	// IMP=0x001000000002de35
- (void)notifyClient:(id)arg1;	// IMP=0x001000000002dc60
- (id)init;	// IMP=0x001000000002ccf5

@end

