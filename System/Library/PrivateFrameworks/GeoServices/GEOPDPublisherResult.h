//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_components;	// 24 = 0x18
    GEOPDMapsIdentifier *_publisherId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _status;	// 52 = 0x34
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_components:1;
        unsigned int read_publisherId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000ca482a
- (unsigned long long)hash;	// IMP=0x0000000000ca47ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ca469a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ca4381
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ca40a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ca409a
- (id)jsonRepresentation;	// IMP=0x0000000000ca3f88
- (id)dictionaryRepresentation;	// IMP=0x0000000000ca3a51
- (id)description;	// IMP=0x0000000000ca39a2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ca2f0a
- (id)init;	// IMP=0x0000000000ca2eae

@end
