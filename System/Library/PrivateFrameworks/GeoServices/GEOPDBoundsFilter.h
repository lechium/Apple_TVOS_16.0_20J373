//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBoundsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b52496
- (unsigned long long)hash;	// IMP=0x0000000000b5248e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b52449
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b523ee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b523d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b523c2
- (id)jsonRepresentation;	// IMP=0x0000000000b52104
- (id)dictionaryRepresentation;	// IMP=0x0000000000b51f99
- (id)description;	// IMP=0x0000000000b51eea

@end
