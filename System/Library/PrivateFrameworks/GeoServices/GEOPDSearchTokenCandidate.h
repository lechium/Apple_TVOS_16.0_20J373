//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenCandidate : PBCodable
{
    NSString *_candidate;	// 8 = 0x8
    double _score;	// 16 = 0x10
    CDStruct_f58e6c32 _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000118a962
- (unsigned long long)hash;	// IMP=0x000000000118a828
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000118a761
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000118a6c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000118a65f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000118a650
- (id)jsonRepresentation;	// IMP=0x000000000118a408
- (id)dictionaryRepresentation;	// IMP=0x000000000118a32f
- (id)description;	// IMP=0x000000000118a280

@end
