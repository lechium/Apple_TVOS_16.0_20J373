//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDBusinessInfosModuleConfiguration, GEOPDButtonModuleConfiguration, GEOPDHeaderButtonsConfiguration, GEOPDPlaceInfosModuleConfiguration, GEOPDPlaceRibbonConfiguration, GEOPDRelatedPlaceModuleConfiguration, GEOPDTemplatePlaceModuleConfiguration, GEOPDUnifiedActionModuleConfiguration, GEOPDWebModuleConfiguration, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleConfigurationValue : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDBusinessInfosModuleConfiguration *_businessInfosModuleConfiguration;	// 24 = 0x18
    GEOPDButtonModuleConfiguration *_buttonModuleConfiguration;	// 32 = 0x20
    GEOPDHeaderButtonsConfiguration *_headerButtonsConfiguration;	// 40 = 0x28
    GEOPDPlaceInfosModuleConfiguration *_placeInfosModuleConfiguration;	// 48 = 0x30
    GEOPDRelatedPlaceModuleConfiguration *_relatedPlaceModuleConfiguration;	// 56 = 0x38
    GEOPDPlaceRibbonConfiguration *_ribbonModuleConfiguration;	// 64 = 0x40
    GEOPDTemplatePlaceModuleConfiguration *_templatePlaceModuleConfiguration;	// 72 = 0x48
    GEOPDUnifiedActionModuleConfiguration *_unifiedActionModuleConfiguration;	// 80 = 0x50
    GEOPDWebModuleConfiguration *_webModuleConfiguration;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_businessInfosModuleConfiguration:1;
        unsigned int read_buttonModuleConfiguration:1;
        unsigned int read_headerButtonsConfiguration:1;
        unsigned int read_placeInfosModuleConfiguration:1;
        unsigned int read_relatedPlaceModuleConfiguration:1;
        unsigned int read_ribbonModuleConfiguration:1;
        unsigned int read_templatePlaceModuleConfiguration:1;
        unsigned int read_unifiedActionModuleConfiguration:1;
        unsigned int read_webModuleConfiguration:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x0000000000c651c5
- (unsigned long long)hash;	// IMP=0x0000000000c650ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c64e62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c64b7b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c648b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c648a8
- (id)jsonRepresentation;	// IMP=0x0000000000c608dd
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6021f
- (id)description;	// IMP=0x0000000000c60170
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c5eb93
- (id)init;	// IMP=0x0000000000c5eb37

@end

