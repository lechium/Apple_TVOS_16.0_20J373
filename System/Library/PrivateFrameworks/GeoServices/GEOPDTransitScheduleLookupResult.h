//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitScheduleLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000627c87
- (unsigned long long)hash;	// IMP=0x0000000000627c7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000627c3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000627bdf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000627bc2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000627bb3
- (id)jsonRepresentation;	// IMP=0x0000000000627aa1
- (id)dictionaryRepresentation;	// IMP=0x0000000000627936
- (id)description;	// IMP=0x0000000000627887

@end

