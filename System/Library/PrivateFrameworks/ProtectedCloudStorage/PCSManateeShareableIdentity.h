//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PCSManateePrivateKey;

__attribute__((visibility("hidden")))
@interface PCSManateeShareableIdentity : PBCodable
{
    PCSManateePrivateKey *_encryptionPrivateKey;	// 8 = 0x8
    PCSManateePrivateKey *_signingPrivateKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003748
@property(retain, nonatomic) PCSManateePrivateKey *signingPrivateKey; // @synthesize signingPrivateKey=_signingPrivateKey;
@property(retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey; // @synthesize encryptionPrivateKey=_encryptionPrivateKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000003667
- (unsigned long long)hash;	// IMP=0x000000000000361a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003552
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000034b4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003451
- (void)writeTo:(id)arg1;	// IMP=0x00000000000033f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000033e7
- (id)dictionaryRepresentation;	// IMP=0x000000000000313a
- (id)description;	// IMP=0x000000000000308b
@property(readonly, nonatomic) _Bool hasSigningPrivateKey;
@property(readonly, nonatomic) _Bool hasEncryptionPrivateKey;

@end
