//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueBoolPairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003fd4e4
- (unsigned long long)hash;	// IMP=0x00000000003fd4c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fd42d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fd290
- (void)writeTo:(id)arg1;	// IMP=0x00000000003fd160
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003fcf58
- (id)jsonRepresentation;	// IMP=0x00000000003fcf49
- (id)dictionaryRepresentation;	// IMP=0x00000000003fccda
- (id)description;	// IMP=0x00000000003fcc2b

@end
