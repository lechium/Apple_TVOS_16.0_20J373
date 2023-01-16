//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbySchedule : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSMutableArray *_groups;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_groups:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)transitNearbyScheduleForPlaceData:(id)arg1;	// IMP=0x0010000000a3aebb
- (void).cxx_destruct;	// IMP=0x0000000000cf0d04
- (unsigned long long)hash;	// IMP=0x0000000000cf0cad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf0bcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf07fd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf049a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf048b
- (id)jsonRepresentation;	// IMP=0x0000000000cefdd3
- (id)dictionaryRepresentation;	// IMP=0x0000000000cef855
- (id)description;	// IMP=0x0000000000cef7a6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ceeb98
- (id)init;	// IMP=0x0000000000ceeb3c

@end

