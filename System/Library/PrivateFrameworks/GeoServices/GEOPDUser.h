//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDUser : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDPhoto *_image;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    CDStruct_9fa62941 _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000d01d8c
- (unsigned long long)hash;	// IMP=0x0000000000d01d35
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d01c53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d01a9e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d018fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d018eb
- (id)jsonRepresentation;	// IMP=0x0000000000d017d9
- (id)dictionaryRepresentation;	// IMP=0x0000000000d015b5
- (id)description;	// IMP=0x0000000000d01506
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d00c9b
- (id)init;	// IMP=0x0000000000d00c3f

@end
