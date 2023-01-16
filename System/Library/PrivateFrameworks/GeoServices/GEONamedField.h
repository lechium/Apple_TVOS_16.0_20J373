//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEONamedField : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_values:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000fb96c1
- (unsigned long long)hash;	// IMP=0x0000000000fb94aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fb93c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fb90e2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fb8e37
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fb8e28
- (id)jsonRepresentation;	// IMP=0x0000000000fb80cf
- (id)dictionaryRepresentation;	// IMP=0x0000000000fb7c40
- (id)description;	// IMP=0x0000000000fb7b91
- (id)initWithData:(id)arg1;	// IMP=0x0000000000fb7257
- (id)init;	// IMP=0x0000000000fb71fb

@end
