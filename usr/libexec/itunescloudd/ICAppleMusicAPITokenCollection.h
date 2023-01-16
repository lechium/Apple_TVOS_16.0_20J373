//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICAppleMusicAPITokenCollection : PBCodable
{
    NSString *_developerToken;	// 8 = 0x8
    NSString *_userToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b71ba
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *developerToken; // @synthesize developerToken=_developerToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b710d
- (unsigned long long)hash;	// IMP=0x00100000000b70c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b6ff8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b6f5a
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b6efd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b6ef0
- (id)dictionaryRepresentation;	// IMP=0x00100000000b6e6d
- (id)description;	// IMP=0x00100000000b6dbe
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasDeveloperToken;
- (id)privacyConsciousDescription;	// IMP=0x001000000001ad66
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x001000000001abd6

@end
