//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDAutoUnlockSessionWrapper : PBCodable
{
    unsigned int _aksSessionID;	// 8 = 0x8
    NSData *_authTag;	// 16 = 0x10
    unsigned int _awdlCacheID;	// 24 = 0x18
    NSData *_encryptedPayload;	// 32 = 0x20
    unsigned int _messageType;	// 40 = 0x28
    NSData *_nonce;	// 48 = 0x30
    NSData *_payload;	// 56 = 0x38
    NSData *_senderID;	// 64 = 0x40
    NSData *_sessionID;	// 72 = 0x48
    unsigned int _version;	// 80 = 0x50
    _Bool _useProxy;	// 84 = 0x54
    struct {
        unsigned int aksSessionID:1;
        unsigned int awdlCacheID:1;
        unsigned int messageType:1;
        unsigned int version:1;
        unsigned int useProxy:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000000b4cc8
@property(retain, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSData *authTag; // @synthesize authTag=_authTag;
@property(retain, nonatomic) NSData *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
@property(nonatomic) unsigned int aksSessionID; // @synthesize aksSessionID=_aksSessionID;
@property(nonatomic) unsigned int awdlCacheID; // @synthesize awdlCacheID=_awdlCacheID;
@property(nonatomic) _Bool useProxy; // @synthesize useProxy=_useProxy;
@property(retain, nonatomic) NSData *senderID; // @synthesize senderID=_senderID;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSData *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b4a22
- (unsigned long long)hash;	// IMP=0x00100000000b48a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b460a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b4424
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b42ac
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b4131
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b4124
- (id)dictionaryRepresentation;	// IMP=0x00100000000b3944
- (id)description;	// IMP=0x00100000000b3895
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasAuthTag;
@property(readonly, nonatomic) _Bool hasEncryptedPayload;
@property(nonatomic) _Bool hasAksSessionID;
@property(nonatomic) _Bool hasAwdlCacheID;
@property(nonatomic) _Bool hasUseProxy;
@property(readonly, nonatomic) _Bool hasSenderID;
@property(nonatomic) _Bool hasMessageType;
@property(readonly, nonatomic) _Bool hasPayload;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

