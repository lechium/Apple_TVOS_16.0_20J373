//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitBrand : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    NSString *_nameDisplayString;	// 32 = 0x20
    GEOStyleAttributes *_styleAttributes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _brandIndex;	// 60 = 0x3c
    struct {
        unsigned int has_muid:1;
        unsigned int has_brandIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000e3b5ba
- (unsigned long long)hash;	// IMP=0x0000000000e3b515
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e3b3e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3b1d7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e3afed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e3afe0
- (id)jsonRepresentation;	// IMP=0x0000000000e3ac6d
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3a7fb
- (id)description;	// IMP=0x0000000000e3a74c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e39f22
- (id)init;	// IMP=0x0000000000e39ec6

@end

