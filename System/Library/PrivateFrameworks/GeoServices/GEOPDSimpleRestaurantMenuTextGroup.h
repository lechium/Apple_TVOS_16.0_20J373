//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_menuItems;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_menuItems:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000cc1220
- (unsigned long long)hash;	// IMP=0x0000000000cc11c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc10e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc0e01
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc0b51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc0b42
- (id)jsonRepresentation;	// IMP=0x0000000000cc0968
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc06a7
- (id)description;	// IMP=0x0000000000cc05f8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cbff12
- (id)init;	// IMP=0x0000000000cbfeb6

@end

