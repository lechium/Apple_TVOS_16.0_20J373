//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable
{
    CKDPListRange *_range;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d6997
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d6915
- (unsigned long long)hash;	// IMP=0x00000000001d68f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d685e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d67e6
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d67bc
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d6798
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d678b
- (id)dictionaryRepresentation;	// IMP=0x00000000001d6549
- (id)description;	// IMP=0x00000000001d649a
@property(readonly, nonatomic) _Bool hasRange;

@end

