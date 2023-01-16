//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRefinementSessionState, GEOPDResultRefinementBar, GEOPDResultRefinementView, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementGroup : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDRefinementSessionState *_refinementSessionState;	// 24 = 0x18
    GEOPDResultRefinementBar *_resultRefinementBar;	// 32 = 0x20
    GEOPDResultRefinementView *_resultRefinementView;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_refinementSessionState:1;
        unsigned int read_resultRefinementBar:1;
        unsigned int read_resultRefinementView:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000e0b1d1
- (unsigned long long)hash;	// IMP=0x0000000000e0ab95
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e0aa7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e0a8a0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e0a3ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e0a3f0
- (id)jsonRepresentation;	// IMP=0x0000000000e092a5
- (id)dictionaryRepresentation;	// IMP=0x0000000000e08fa2
- (id)description;	// IMP=0x0000000000e08ef3
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e0833d
- (id)init;	// IMP=0x0000000000e082e1

@end

