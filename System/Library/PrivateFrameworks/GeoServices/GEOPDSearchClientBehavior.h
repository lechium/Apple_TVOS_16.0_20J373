//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchClientBehavior : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _shouldEnableRedoSearch;	// 16 = 0x10
    struct {
        unsigned int has_shouldEnableRedoSearch:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000604128
- (unsigned long long)hash;	// IMP=0x00000000006040fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000060405b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000603fdb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000603f78
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000603f69
- (id)jsonRepresentation;	// IMP=0x0000000000603d86
- (id)dictionaryRepresentation;	// IMP=0x0000000000603bb2
- (id)description;	// IMP=0x0000000000603b03

@end
