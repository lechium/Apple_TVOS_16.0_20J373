//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKRealTimeMultiplayerActionBulletin
{
    NSString *_debugLine;	// 112 = 0x70
    NSString *_notificationName;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000003e8e1
- (void).cxx_destruct;	// IMP=0x0020000000041e0c
@property(readonly) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly) NSString *debugLine; // @synthesize debugLine=_debugLine;
- (_Bool)isAccept;	// IMP=0x0010000000041db1
- (id)getNotificationName;	// IMP=0x0010000000041d82
- (id)getDebugLine;	// IMP=0x0010000000041d53
@property(readonly) NSString *aggregateDictionaryKey;
- (void)assembleBulletin;	// IMP=0x0010000000041abe
- (void)setInvitedPlayerRespondedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003fd35
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f392

@end

