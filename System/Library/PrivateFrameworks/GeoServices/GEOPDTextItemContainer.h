//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDTextItemDisplayConfig, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItemContainer : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDTextItemDisplayConfig *_displayConf;	// 24 = 0x18
    NSMutableArray *_textItems;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayConf:1;
        unsigned int read_textItems:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000cdb313
- (unsigned long long)hash;	// IMP=0x0000000000cdb2bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cdb1da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cdaee3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cdac34
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cdac25
- (id)jsonRepresentation;	// IMP=0x0000000000cda7e8
- (id)dictionaryRepresentation;	// IMP=0x0000000000cda3a9
- (id)description;	// IMP=0x0000000000cda2fa
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cd980f
- (id)init;	// IMP=0x0000000000cd97b3

@end

