//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSInferredInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSInferredSignals : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDSInferredInfo *_inferredInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000676652
- (unsigned long long)hash;	// IMP=0x0000000000676592
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006764f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067646d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000676412
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000676403
- (id)jsonRepresentation;	// IMP=0x0000000000675d93
- (id)dictionaryRepresentation;	// IMP=0x0000000000675b93
- (id)description;	// IMP=0x0000000000675ae4

@end

