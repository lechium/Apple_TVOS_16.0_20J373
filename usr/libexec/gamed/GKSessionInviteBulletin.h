//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface GKSessionInviteBulletin
{
    NSURL *_sessionURL;	// 104 = 0x68
    NSString *_senderName;	// 112 = 0x70
    NSString *_userMessage;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0040000000117714
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011770c
- (void).cxx_destruct;	// IMP=0x0020000000119042
// Error: Property attributes should begin with the type ('T') attribute, property name: userMessage
// Property attributes: (null)

@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSURL *sessionURL; // @synthesize sessionURL=_sessionURL;
- (void)assembleBulletin;	// IMP=0x0010000000118f48
- (void)handleAction:(id)arg1;	// IMP=0x0010000000118c30
- (void)handleAcceptAction;	// IMP=0x0010000000118904
- (id)assembledMessage;	// IMP=0x001000000011874e
- (id)aggregateDictionaryKey;	// IMP=0x001000000011873a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001184f8
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000118291
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0010000000117f96

@end
