//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDRatingCategory : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSMutableArray *_localizedNames;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_key:1;
        unsigned int read_localizedNames:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000013fcad2
- (unsigned long long)hash;	// IMP=0x00000000013fca7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013fc999
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013fc6de
- (void)writeTo:(id)arg1;	// IMP=0x00000000013fc45f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013fc450
- (id)jsonRepresentation;	// IMP=0x00000000013fc1d2
- (id)dictionaryRepresentation;	// IMP=0x00000000013fbf09
- (id)description;	// IMP=0x00000000013fbe5a
- (id)initWithData:(id)arg1;	// IMP=0x00000000013fb540
- (id)init;	// IMP=0x00000000013fb4e4
- (id)displayTitle;	// IMP=0x0000000000a43be7

@end

