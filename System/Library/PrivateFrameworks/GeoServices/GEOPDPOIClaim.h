//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPOIClaim : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_claimUrl;	// 16 = 0x10
    _Bool _isClaimable;	// 24 = 0x18
    _Bool _isClaimed;	// 25 = 0x19
    struct {
        unsigned int has_isClaimable:1;
        unsigned int has_isClaimed:1;
    } _flags;	// 28 = 0x1c
}

+ (id)poiClaimForPlaceData:(id)arg1;	// IMP=0x0010000000a44ca4
- (void).cxx_destruct;	// IMP=0x0000000000c69734
- (unsigned long long)hash;	// IMP=0x0000000000c696ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c695cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6950a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c6945f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c69450
- (id)jsonRepresentation;	// IMP=0x0000000000c6933e
- (id)dictionaryRepresentation;	// IMP=0x0000000000c690ca
- (id)description;	// IMP=0x0000000000c6901b

@end

