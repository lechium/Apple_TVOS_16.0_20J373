//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoContent : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    unsigned int _height;	// 24 = 0x18
    int _urlType;	// 28 = 0x1c
    unsigned int _width;	// 32 = 0x20
    struct {
        unsigned int has_height:1;
        unsigned int has_urlType:1;
        unsigned int has_width:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000c6df75
- (unsigned long long)hash;	// IMP=0x0000000000c6ded7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6ddc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6dcdb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c6dc14
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c6dc05
- (id)jsonRepresentation;	// IMP=0x0000000000c6daf3
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6d820
- (id)description;	// IMP=0x0000000000c6d771
- (unsigned long long)_area;	// IMP=0x0000000000a4043a

@end

