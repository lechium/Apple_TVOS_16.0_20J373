//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationEvent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    NSString *_subTitle;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_endTime:1;
        unsigned int has_startTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_subTitle:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000c4aa5a
- (unsigned long long)hash;	// IMP=0x0000000000c4a7da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c4a699
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4a47f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4a28a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4a27b
- (id)jsonRepresentation;	// IMP=0x0000000000c4a0a1
- (id)dictionaryRepresentation;	// IMP=0x0000000000c49c73
- (id)description;	// IMP=0x0000000000c49bc4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c494d6
- (id)init;	// IMP=0x0000000000c4947a

@end

