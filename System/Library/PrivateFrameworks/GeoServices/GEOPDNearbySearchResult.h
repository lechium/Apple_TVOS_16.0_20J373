//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearbySearchResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000056953c
- (unsigned long long)hash;	// IMP=0x0000000000569534
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005694ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000569494
- (void)writeTo:(id)arg1;	// IMP=0x0000000000569477
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000569468
- (id)jsonRepresentation;	// IMP=0x00000000005691aa
- (id)dictionaryRepresentation;	// IMP=0x000000000056903f
- (id)description;	// IMP=0x0000000000568f90

@end

