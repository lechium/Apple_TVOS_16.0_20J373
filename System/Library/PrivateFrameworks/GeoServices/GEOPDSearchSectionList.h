//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSectionList : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e313ba
- (unsigned long long)hash;	// IMP=0x0000000000e3139d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e31303
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e31143
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e30fe4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e30fd5
- (id)jsonRepresentation;	// IMP=0x0000000000e2febf
- (id)dictionaryRepresentation;	// IMP=0x0000000000e2fb2e
- (id)description;	// IMP=0x0000000000e2fa7f

@end

