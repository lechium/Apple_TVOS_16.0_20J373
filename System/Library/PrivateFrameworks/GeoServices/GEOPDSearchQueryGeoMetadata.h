//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryGeoMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ac4184
- (unsigned long long)hash;	// IMP=0x0000000000ac4167
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac40cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ac3f30
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ac3e00
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ac3df1
- (id)jsonRepresentation;	// IMP=0x0000000000ac3bd3
- (id)dictionaryRepresentation;	// IMP=0x0000000000ac3952
- (id)description;	// IMP=0x0000000000ac38a3

@end

