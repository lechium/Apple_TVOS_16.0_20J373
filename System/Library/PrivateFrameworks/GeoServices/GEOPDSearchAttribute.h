//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchAttribute : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_attributeId;	// 16 = 0x10
    NSString *_attributeValue;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    GEOPDSearchTokenSet *_tokenSet;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _rankingOrder;	// 60 = 0x3c
    _Bool _isOptionalAttribute;	// 64 = 0x40
    _Bool _isOptionalKeyword;	// 65 = 0x41
    _Bool _negateAttribute;	// 66 = 0x42
    struct {
        unsigned int has_rankingOrder:1;
        unsigned int has_isOptionalAttribute:1;
        unsigned int has_isOptionalKeyword:1;
        unsigned int has_negateAttribute:1;
        unsigned int read_attributeId:1;
        unsigned int read_attributeValue:1;
        unsigned int read_name:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000a92195
- (unsigned long long)hash;	// IMP=0x0000000000a9207c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a91e73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a91bdb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a91933
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a91924
- (id)jsonRepresentation;	// IMP=0x0000000000a916a6
- (id)dictionaryRepresentation;	// IMP=0x0000000000a9106b
- (id)description;	// IMP=0x0000000000a90fbc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a90681
- (id)init;	// IMP=0x0000000000a90625

@end

