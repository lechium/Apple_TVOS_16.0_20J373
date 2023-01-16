//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_labels;	// 24 = 0x18
    NSMutableArray *_lines;	// 32 = 0x20
    NSString *_searchDisplayName;	// 40 = 0x28
    NSMutableArray *_stopInfos;	// 48 = 0x30
    NSString *_subTitle;	// 56 = 0x38
    NSMutableArray *_systems;	// 64 = 0x40
    NSString *_title;	// 72 = 0x48
    NSMutableArray *_transitConnections;	// 80 = 0x50
    unsigned long long _transitId;	// 88 = 0x58
    GEOPDMapsIdentifier *_transitMarketId;	// 96 = 0x60
    unsigned int _readerMarkPos;	// 104 = 0x68
    unsigned int _readerMarkLength;	// 108 = 0x6c
    struct os_unfair_lock_s _readerLock;	// 112 = 0x70
    struct {
        unsigned int has_transitId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labels:1;
        unsigned int read_lines:1;
        unsigned int read_searchDisplayName:1;
        unsigned int read_stopInfos:1;
        unsigned int read_subTitle:1;
        unsigned int read_systems:1;
        unsigned int read_title:1;
        unsigned int read_transitConnections:1;
        unsigned int read_transitMarketId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 116 = 0x74
}

+ (id)transitInfoForPlaceData:(id)arg1;	// IMP=0x0010000000a3a753
- (void).cxx_destruct;	// IMP=0x0000000000ce84c5
- (unsigned long long)hash;	// IMP=0x0000000000ce838f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce8113
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce7915
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce6f8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce6f7f
- (id)jsonRepresentation;	// IMP=0x0000000000ce6da5
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce607d
- (id)description;	// IMP=0x0000000000ce5fce
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ce3f1e
- (id)init;	// IMP=0x0000000000ce3ec2

@end

