//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceRibbonConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_ribbonItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c94ce6
- (unsigned long long)hash;	// IMP=0x0000000000c94cc9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c94c2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c94a6f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c94910
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c94901
- (id)jsonRepresentation;	// IMP=0x0000000000c94648
- (id)dictionaryRepresentation;	// IMP=0x0000000000c942a5
- (id)description;	// IMP=0x0000000000c941f6

@end

