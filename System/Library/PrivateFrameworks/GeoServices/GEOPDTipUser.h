//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTipUser : PBCodable
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

- (void).cxx_destruct;	// IMP=0x0000000000ce03d0
- (unsigned long long)hash;	// IMP=0x0000000000ce0379
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce0297
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce00e2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cdff3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cdff2f
- (id)jsonRepresentation;	// IMP=0x0000000000cdfe1d
- (id)dictionaryRepresentation;	// IMP=0x0000000000cdfbf9
- (id)description;	// IMP=0x0000000000cdfb4a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cdf2e1
- (id)init;	// IMP=0x0000000000cdf285

@end

