//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchACHintMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_addressEntrys;	// 16 = 0x10
    NSMutableArray *_brooklynEntrys;	// 24 = 0x18
    NSMutableArray *_businessEntrys;	// 32 = 0x20
    NSMutableArray *_features;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_addressEntrys:1;
        unsigned int read_brooklynEntrys:1;
        unsigned int read_businessEntrys:1;
        unsigned int read_features:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000a8b140
- (unsigned long long)hash;	// IMP=0x0000000000a8b0b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a8af6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a8a99b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a8a0ee
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a8a0df
- (id)jsonRepresentation;	// IMP=0x0000000000a899a1
- (id)dictionaryRepresentation;	// IMP=0x0000000000a8913d
- (id)description;	// IMP=0x0000000000a8908e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a88054
- (id)init;	// IMP=0x0000000000a87ff8

@end

