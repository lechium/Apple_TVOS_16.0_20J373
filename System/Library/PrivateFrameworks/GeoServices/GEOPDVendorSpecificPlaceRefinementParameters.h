//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOStructuredAddress, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOStructuredAddress *_addressHint;	// 24 = 0x18
    NSData *_addressObjectHint;	// 32 = 0x20
    NSString *_externalItemId;	// 40 = 0x28
    NSMutableArray *_formattedAddressLineHints;	// 48 = 0x30
    GEOLatLng *_locationHint;	// 56 = 0x38
    unsigned long long _muid;	// 64 = 0x40
    NSString *_placeNameHint;	// 72 = 0x48
    NSString *_vendorId;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    int _addressGeocodeAccuracyHint;	// 100 = 0x64
    int _placeTypeHint;	// 104 = 0x68
    int _resultProviderId;	// 108 = 0x6c
    struct {
        unsigned int has_muid:1;
        unsigned int has_addressGeocodeAccuracyHint:1;
        unsigned int has_placeTypeHint:1;
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressHint:1;
        unsigned int read_addressObjectHint:1;
        unsigned int read_externalItemId:1;
        unsigned int read_formattedAddressLineHints:1;
        unsigned int read_locationHint:1;
        unsigned int read_placeNameHint:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000062ae73
- (unsigned long long)hash;	// IMP=0x000000000062acfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000062aa63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000062a619
- (void)writeTo:(id)arg1;	// IMP=0x000000000062a23d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000062a22e
- (id)jsonRepresentation;	// IMP=0x000000000062a11c
- (id)dictionaryRepresentation;	// IMP=0x00000000006296cc
- (id)description;	// IMP=0x000000000062961d
- (id)initWithData:(id)arg1;	// IMP=0x0000000000628231
- (id)init;	// IMP=0x00000000006281d5
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;	// IMP=0x000000000136c0ae
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 contentProvider:(id)arg3;	// IMP=0x000000000136bdf3
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;	// IMP=0x000000000136bc07
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(CDStruct_c3b9c2ee)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;	// IMP=0x000000000136b942

@end

