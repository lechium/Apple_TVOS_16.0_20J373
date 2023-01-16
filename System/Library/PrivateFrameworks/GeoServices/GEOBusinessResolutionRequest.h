//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class GEOLocation, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBusinessResolutionRequest : PBRequest
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLocation *_deviceLocation;	// 16 = 0x10
    NSString *_shortBusinessName;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_deviceLocation:1;
        unsigned int read_shortBusinessName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000e33642
- (void).cxx_destruct;	// IMP=0x0000000000e33f83
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e33ef4
- (unsigned long long)hash;	// IMP=0x0000000000e33e98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e33da7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e33c0c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e33b3e
- (Class)responseClass;	// IMP=0x0000000000e33b2d
- (unsigned int)requestTypeCode;	// IMP=0x0000000000e33b22
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e33af1
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000e339fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e33839
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e3382c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e333f7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e333e5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e33258
- (id)jsonRepresentation;	// IMP=0x0000000000e33249
- (id)dictionaryRepresentation;	// IMP=0x0000000000e33121
- (id)description;	// IMP=0x0000000000e33072
@property(retain, nonatomic) GEOLocation *deviceLocation;
@property(readonly, nonatomic) _Bool hasDeviceLocation;
@property(retain, nonatomic) NSString *shortBusinessName;
@property(readonly, nonatomic) _Bool hasShortBusinessName;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e328f8
- (id)init;	// IMP=0x0000000000e3289c

@end

