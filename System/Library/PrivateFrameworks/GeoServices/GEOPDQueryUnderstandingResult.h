//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_queryIntents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005f8fd3
- (unsigned long long)hash;	// IMP=0x00000000005f8fb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f8f1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f8d5c
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f8bfd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f8bee
- (id)jsonRepresentation;	// IMP=0x00000000005f8adc
- (id)dictionaryRepresentation;	// IMP=0x00000000005f8739
- (id)description;	// IMP=0x00000000005f868a

@end

