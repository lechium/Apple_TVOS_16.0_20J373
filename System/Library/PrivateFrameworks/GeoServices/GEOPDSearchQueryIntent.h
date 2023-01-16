//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchQueryIntentMetadata, GEOPDSearchRewrittenQueryNonPayloadField, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_globalFeatureMaps;	// 16 = 0x10
    NSMutableArray *_globalStringFeatureMaps;	// 24 = 0x18
    GEOPDSearchQueryIntentMetadata *_queryIntentMetadata;	// 32 = 0x20
    GEOPDSearchRewrittenQueryNonPayloadField *_rewrittenQueryNonPayloadField;	// 40 = 0x28
    NSMutableArray *_whatIntents;	// 48 = 0x30
    NSMutableArray *_whereIntents;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_globalFeatureMaps:1;
        unsigned int read_globalStringFeatureMaps:1;
        unsigned int read_queryIntentMetadata:1;
        unsigned int read_rewrittenQueryNonPayloadField:1;
        unsigned int read_whatIntents:1;
        unsigned int read_whereIntents:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000ad1a92
- (unsigned long long)hash;	// IMP=0x0000000000ad19c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ad181b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ad11e5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000acfc07
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000acfbf8
- (id)jsonRepresentation;	// IMP=0x0000000000ac997f
- (id)dictionaryRepresentation;	// IMP=0x0000000000ac8f3a
- (id)description;	// IMP=0x0000000000ac8e8b
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ac7b09
- (id)init;	// IMP=0x0000000000ac7aad

@end

