//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTemplatePlaceModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sectionTitles;	// 16 = 0x10
    int _layoutType;	// 24 = 0x18
    int _numberOfRows;	// 28 = 0x1c
    int _orientation;	// 32 = 0x20
    int _templatePlaceComponentId;	// 36 = 0x24
    struct {
        unsigned int has_layoutType:1;
        unsigned int has_numberOfRows:1;
        unsigned int has_orientation:1;
        unsigned int has_templatePlaceComponentId:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000cd7ac5
- (unsigned long long)hash;	// IMP=0x0000000000cd7a16
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd78dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd76ac
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd74c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd74b8
- (id)jsonRepresentation;	// IMP=0x0000000000cd73a6
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd6e25
- (id)description;	// IMP=0x0000000000cd6d76
- (id)sectionTitle;	// IMP=0x0000000000a429ad

@end

