//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchStringGeoTypesPair : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _geoTypeIds;	// 16 = 0x10
    NSString *_key;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_geoTypeIds:1;
        unsigned int read_key:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000af935f
- (unsigned long long)hash;	// IMP=0x0000000000af9319
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af9250
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af90cc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af8f2b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af8f1c
- (id)jsonRepresentation;	// IMP=0x0000000000af8f0d
- (id)dictionaryRepresentation;	// IMP=0x0000000000af8d59
- (id)description;	// IMP=0x0000000000af8caa
- (void)dealloc;	// IMP=0x0000000000af8735
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af86d9
- (id)init;	// IMP=0x0000000000af867d

@end
