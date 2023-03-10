//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSupportOctagonMessage : PBCodable
{
    int _supported;	// 8 = 0x8
    CDStruct_495da94c _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000f94e
- (unsigned long long)hash;	// IMP=0x000000000000f923
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f891
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f82f
- (void)copyTo:(id)arg1;	// IMP=0x000000000000f80b
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f7e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f7d3
- (id)dictionaryRepresentation;	// IMP=0x000000000000f729
- (id)description;	// IMP=0x000000000000f67a
- (int)StringAsSupported:(id)arg1;	// IMP=0x000000000000f5e8
- (id)supportedAsString:(int)arg1;	// IMP=0x000000000000f5a0
@property(nonatomic) _Bool hasSupported;
@property(nonatomic) int supported; // @synthesize supported=_supported;

@end

