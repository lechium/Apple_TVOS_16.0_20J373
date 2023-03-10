//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOverallFilterReason : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _proxyErrorHttpStatus;	// 16 = 0x10
    int _reasonType;	// 20 = 0x14
    struct {
        unsigned int has_proxyErrorHttpStatus:1;
        unsigned int has_reasonType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000df548d
- (unsigned long long)hash;	// IMP=0x0000000000df5448
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000df5395
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000df52f8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000df526c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000df4f41
- (id)jsonRepresentation;	// IMP=0x0000000000df4e2f
- (id)dictionaryRepresentation;	// IMP=0x0000000000df4bcc
- (id)description;	// IMP=0x0000000000df4b1d

@end

