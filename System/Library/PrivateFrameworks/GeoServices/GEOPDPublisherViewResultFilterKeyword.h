//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewResultFilterKeyword : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005f6fb9
- (unsigned long long)hash;	// IMP=0x00000000005f6f9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f6f02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f6e77
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f6e1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f6e0d
- (id)jsonRepresentation;	// IMP=0x00000000005f6cfb
- (id)dictionaryRepresentation;	// IMP=0x00000000005f6afb
- (id)description;	// IMP=0x00000000005f6a4c

@end
