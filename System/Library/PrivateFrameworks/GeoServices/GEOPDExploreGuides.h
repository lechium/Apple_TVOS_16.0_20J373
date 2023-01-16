//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesLocationEntry, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExploreGuides : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_exploreImageUrlTemplate;	// 24 = 0x18
    GEOPDGuidesLocationEntry *_guidesLocationEntry;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_exploreImageUrlTemplate:1;
        unsigned int read_guidesLocationEntry:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)exploreGuideComponentFromPlaceData:(id)arg1;	// IMP=0x0010000000a42186
- (void).cxx_destruct;	// IMP=0x0000000000c2001d
- (unsigned long long)hash;	// IMP=0x0000000000c1ffc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c1fee4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c1fd2f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c1fade
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c1facf
- (id)jsonRepresentation;	// IMP=0x0000000000c1f6af
- (id)dictionaryRepresentation;	// IMP=0x0000000000c1f45d
- (id)description;	// IMP=0x0000000000c1f3ae
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c1ea8f
- (id)init;	// IMP=0x0000000000c1ea33

@end

