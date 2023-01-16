//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ICAppleMusicAPITokenCollection, ICAppleMusicAPITokenError;

@interface ICAppleMusicAPITokenResponse : PBCodable
{
    ICAppleMusicAPITokenError *_error;	// 8 = 0x8
    ICAppleMusicAPITokenCollection *_tokenCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00100000000893e6
@property(retain, nonatomic) ICAppleMusicAPITokenError *error; // @synthesize error=_error;
@property(retain, nonatomic) ICAppleMusicAPITokenCollection *tokenCollection; // @synthesize tokenCollection=_tokenCollection;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000089305
- (unsigned long long)hash;	// IMP=0x00100000000892b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000891f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000089152
- (void)writeTo:(id)arg1;	// IMP=0x00100000000890f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000088f08
- (id)dictionaryRepresentation;	// IMP=0x0010000000088e33
- (id)description;	// IMP=0x0010000000088d84
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTokenCollection;
- (id)privacyConsciousDescription;	// IMP=0x0010000000094785
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x0010000000094663

@end
