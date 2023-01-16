//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SecDbKeychainSerializedMetadataKey : PBCodable
{
    int _actualKeyclass;	// 8 = 0x8
    NSData *_akswrappedkey;	// 16 = 0x10
    NSData *_backupwrappedkey;	// 24 = 0x18
    NSData *_baguuid;	// 32 = 0x20
    int _keyclass;	// 40 = 0x28
    struct {
        unsigned int actualKeyclass:1;
        unsigned int keyclass:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0020000000172661
@property(retain, nonatomic) NSData *backupwrappedkey; // @synthesize backupwrappedkey=_backupwrappedkey;
@property(retain, nonatomic) NSData *akswrappedkey; // @synthesize akswrappedkey=_akswrappedkey;
@property(retain, nonatomic) NSData *baguuid; // @synthesize baguuid=_baguuid;
@property(nonatomic) int actualKeyclass; // @synthesize actualKeyclass=_actualKeyclass;
@property(nonatomic) int keyclass; // @synthesize keyclass=_keyclass;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000172512
- (unsigned long long)hash;	// IMP=0x001000000017245d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000172300
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001721fc
- (void)copyTo:(id)arg1;	// IMP=0x001000000017213c
- (void)writeTo:(id)arg1;	// IMP=0x0010000000172074
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000171d98
- (id)dictionaryRepresentation;	// IMP=0x0010000000171c2c
- (id)description;	// IMP=0x0010000000171b7d
@property(readonly, nonatomic) _Bool hasBackupwrappedkey;
@property(readonly, nonatomic) _Bool hasAkswrappedkey;
@property(readonly, nonatomic) _Bool hasBaguuid;
@property(nonatomic) _Bool hasActualKeyclass;
@property(nonatomic) _Bool hasKeyclass;

@end

