//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64Value32Pair : PBCodable
{
    unsigned long long _key;	// 8 = 0x8
    unsigned int _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x00000000003f3a55
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f39a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f3923
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f38b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f38a4
- (id)jsonRepresentation;	// IMP=0x00000000003f3590
- (id)dictionaryRepresentation;	// IMP=0x00000000003f3484
- (id)description;	// IMP=0x00000000003f33d5

@end

