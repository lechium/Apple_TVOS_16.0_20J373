//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchGeoDecoration, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchAddressLabeledToken : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDSearchGeoDecoration *_abbrDecoration;	// 16 = 0x10
    NSMutableArray *_geoDecorations;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    GEOPDSearchGeoDecoration *_streetRelaxationDecoration;	// 40 = 0x28
    NSString *_token;	// 48 = 0x30
    NSMutableArray *_unPaddedDoorNumbers;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _labelType;	// 76 = 0x4c
    struct {
        unsigned int read_abbrDecoration:1;
        unsigned int read_geoDecorations:1;
        unsigned int read_label:1;
        unsigned int read_streetRelaxationDecoration:1;
        unsigned int read_token:1;
        unsigned int read_unPaddedDoorNumbers:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000a9059f
- (unsigned long long)hash;	// IMP=0x0000000000a904bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a902f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a8fe6f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a8fa33
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a8fa24
- (id)jsonRepresentation;	// IMP=0x0000000000a8e12b
- (id)dictionaryRepresentation;	// IMP=0x0000000000a8d9a4
- (id)description;	// IMP=0x0000000000a8d8f5
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a8cbce
- (id)init;	// IMP=0x0000000000a8cb72

@end

