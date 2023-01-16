//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchGeoParsingResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_droppedTokens;	// 16 = 0x10
    double _labelScore;	// 24 = 0x18
    NSMutableArray *_labelings;	// 32 = 0x20
    NSString *_taggerModelId;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _tagSource;	// 60 = 0x3c
    struct {
        unsigned int has_labelScore:1;
        unsigned int has_tagSource:1;
        unsigned int read_droppedTokens:1;
        unsigned int read_labelings:1;
        unsigned int read_taggerModelId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000aa7e8e
- (unsigned long long)hash;	// IMP=0x0000000000aa7cdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aa7b6b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aa7719
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aa722a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aa721b
- (id)jsonRepresentation;	// IMP=0x0000000000aa6f9d
- (id)dictionaryRepresentation;	// IMP=0x0000000000aa6925
- (id)description;	// IMP=0x0000000000aa6876
- (id)initWithData:(id)arg1;	// IMP=0x0000000000aa5c31
- (id)init;	// IMP=0x0000000000aa5bd5

@end

