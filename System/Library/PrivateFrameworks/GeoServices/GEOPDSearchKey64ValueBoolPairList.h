//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValueBoolPairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f63b5
- (unsigned long long)hash;	// IMP=0x00000000003f6398
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f62fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f6161
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f6031
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f5e29
- (id)jsonRepresentation;	// IMP=0x00000000003f5e1a
- (id)dictionaryRepresentation;	// IMP=0x00000000003f5bab
- (id)description;	// IMP=0x00000000003f5afc

@end
