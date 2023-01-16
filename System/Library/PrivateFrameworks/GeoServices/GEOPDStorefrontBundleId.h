//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDStorefrontBundleId : PBCodable
{
    unsigned long long _identifier;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    struct {
        unsigned int has_identifier:1;
        unsigned int has_timestamp:1;
    } _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00000000009eaee5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009eae32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009eadb1
- (void)writeTo:(id)arg1;	// IMP=0x00000000009ead3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009eaa64
- (id)jsonRepresentation;	// IMP=0x00000000009eaa5a
- (id)dictionaryRepresentation;	// IMP=0x00000000009ea94d
- (id)description;	// IMP=0x00000000009ea89e

@end
