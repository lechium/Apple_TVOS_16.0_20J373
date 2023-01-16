//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSMessage.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface IDSPeerMessage : IDSMessage
{
    _Bool _fireAndForget;	// 257 = 0x101
    NSNumber *_priority;	// 264 = 0x108
    NSString *_encryptionType;	// 272 = 0x110
    NSData *_encryptedData;	// 280 = 0x118
    NSData *_targetToken;	// 288 = 0x120
    NSString *_targetPeerID;	// 296 = 0x128
    NSString *_sourcePeerID;	// 304 = 0x130
    NSData *_targetSessionToken;	// 312 = 0x138
    NSString *_messageID;	// 320 = 0x140
    NSDictionary *_additionalDictionary;	// 328 = 0x148
    NSDate *_expirationDate;	// 336 = 0x150
    NSNumber *_deliveryTime;	// 344 = 0x158
    NSNumber *_deliveryMinimumTime;	// 352 = 0x160
    NSNumber *_sendMode;	// 360 = 0x168
}

- (void);	// IMP=0x002000000019c280
@property(copy) NSNumber *sendMode; // @synthesize sendMode=_sendMode;
@property(copy) NSNumber *deliveryMinimumTime; // @synthesize deliveryMinimumTime=_deliveryMinimumTime;
@property(copy) NSNumber *deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSDictionary *additionalDictionary; // @synthesize additionalDictionary=_additionalDictionary;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSData *targetSessionToken; // @synthesize targetSessionToken=_targetSessionToken;
@property(copy) NSString *sourcePeerID; // @synthesize sourcePeerID=_sourcePeerID;
@property(copy) NSString *targetPeerID; // @synthesize targetPeerID=_targetPeerID;
@property(copy) NSData *targetToken; // @synthesize targetToken=_targetToken;
@property(copy) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(copy) NSString *encryptionType; // @synthesize encryptionType=_encryptionType;
@property(copy) NSNumber *priority; // @synthesize priority=_priority;
- (id)messageBody;	// IMP=0x001000000019b060
- (id)requiredKeys;	// IMP=0x001000000019af50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019aad0
- (id)initWithHighPriority:(_Bool)arg1;	// IMP=0x001000000019aa10
- (id)init;	// IMP=0x001000000019a970

@end

