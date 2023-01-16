//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryTransliteratorMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_parentQuery;	// 16 = 0x10
    NSString *_reading;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _transliteratorSource;	// 44 = 0x2c
    struct {
        unsigned int has_transliteratorSource:1;
        unsigned int read_parentQuery:1;
        unsigned int read_reading:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000af581d
- (unsigned long long)hash;	// IMP=0x0000000000af579e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af568f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af54b3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af52fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af52eb
- (id)jsonRepresentation;	// IMP=0x0000000000af52dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000af500b
- (id)description;	// IMP=0x0000000000af4f5c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af4a42
- (id)init;	// IMP=0x0000000000af49e6

@end

