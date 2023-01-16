//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueBytesPair : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSData *_value;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    CDStruct_d2d52b7f _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000003fe3a0
- (unsigned long long)hash;	// IMP=0x00000000003fe349
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fe267
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fe0d4
- (void)writeTo:(id)arg1;	// IMP=0x00000000003fdf45
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003fdf38
- (id)jsonRepresentation;	// IMP=0x00000000003fdcc8
- (id)dictionaryRepresentation;	// IMP=0x00000000003fda42
- (id)description;	// IMP=0x00000000003fd993
- (id)initWithData:(id)arg1;	// IMP=0x00000000003fd553
- (id)init;	// IMP=0x00000000003fd4f7

@end
