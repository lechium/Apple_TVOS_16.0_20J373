//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c318ff
- (unsigned long long)hash;	// IMP=0x0000000000c318f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c318b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c31857
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3183a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3182b
- (id)jsonRepresentation;	// IMP=0x0000000000c31719
- (id)dictionaryRepresentation;	// IMP=0x0000000000c315ae
- (id)description;	// IMP=0x0000000000c314ff

@end

