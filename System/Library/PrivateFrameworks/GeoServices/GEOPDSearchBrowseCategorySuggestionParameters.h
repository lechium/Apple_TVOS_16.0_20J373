//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSSearchEvChargingParameters, GEOPDVenueIdentifier, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _engineTypes;	// 24 = 0x18
    GEOPDSSearchEvChargingParameters *_evChargingParameters;	// 48 = 0x30
    double _requestLocalTimestamp;	// 56 = 0x38
    GEOPDVenueIdentifier *_venueFilter;	// 64 = 0x40
    GEOPDViewportInfo *_viewportInfo;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    int _minimumNumberOfCategories;	// 92 = 0x5c
    int _preferredTransportType;	// 96 = 0x60
    int _suggestionType;	// 100 = 0x64
    _Bool _isCarplayRequest;	// 104 = 0x68
    _Bool _isFlatCategoryListRequest;	// 105 = 0x69
    _Bool _isFromNoQueryState;	// 106 = 0x6a
    _Bool _isWidgetRequest;	// 107 = 0x6b
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_minimumNumberOfCategories:1;
        unsigned int has_preferredTransportType:1;
        unsigned int has_suggestionType:1;
        unsigned int has_isCarplayRequest:1;
        unsigned int has_isFlatCategoryListRequest:1;
        unsigned int has_isFromNoQueryState:1;
        unsigned int has_isWidgetRequest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_evChargingParameters:1;
        unsigned int read_venueFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x0000000000602e4f
- (unsigned long long)hash;	// IMP=0x0000000000602bb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006028ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006025e5
- (void)writeTo:(id)arg1;	// IMP=0x00000000006022bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006022ad
- (id)jsonRepresentation;	// IMP=0x000000000060169f
- (id)dictionaryRepresentation;	// IMP=0x0000000000600d79
- (id)description;	// IMP=0x0000000000600cca
- (void)dealloc;	// IMP=0x00000000005ff87b
- (id)initWithData:(id)arg1;	// IMP=0x00000000005ff81f
- (id)init;	// IMP=0x00000000005ff7c3

@end

