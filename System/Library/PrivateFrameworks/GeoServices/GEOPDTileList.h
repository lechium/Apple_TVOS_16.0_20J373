//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDTileList : PBCodable
{
    NSMutableArray *_tiles;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006abe9f
- (unsigned long long)hash;	// IMP=0x00000000006abe82
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006abde8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006abc4b
- (void)writeTo:(id)arg1;	// IMP=0x00000000006abb1b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006ab911
- (id)jsonRepresentation;	// IMP=0x00000000006ab902
- (id)dictionaryRepresentation;	// IMP=0x00000000006ab693
- (id)description;	// IMP=0x00000000006ab5e4

@end

