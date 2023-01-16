//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhoto : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_photoId;	// 24 = 0x18
    NSMutableArray *_photoVersions;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_photoId:1;
        unsigned int read_photoVersions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)photosForPlaceData:(id)arg1;	// IMP=0x0010000000a40462
- (void).cxx_destruct;	// IMP=0x0000000000c6d6ae
- (unsigned long long)hash;	// IMP=0x0000000000c6d657
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6d575
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6d28f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c6cfdf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c6cfd0
- (id)jsonRepresentation;	// IMP=0x0000000000c6c4f8
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6c0f9
- (id)description;	// IMP=0x0000000000c6c04a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c6b55c
- (id)init;	// IMP=0x0000000000c6b500
- (id)bestURL;	// IMP=0x0000000000a40586

@end
