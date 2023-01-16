//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllGuidesLocationsViewParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDViewportInfo *_viewportInfo;	// 16 = 0x10
    unsigned int _numClientizedResults;	// 24 = 0x18
    struct {
        unsigned int has_numClientizedResults:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000004cb5c9
- (unsigned long long)hash;	// IMP=0x00000000004cb577
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cb4b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cb408
- (void)writeTo:(id)arg1;	// IMP=0x00000000004cb389
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004cb37a
- (id)jsonRepresentation;	// IMP=0x00000000004caf42
- (id)dictionaryRepresentation;	// IMP=0x00000000004cacdc
- (id)description;	// IMP=0x00000000004cac2d

@end
