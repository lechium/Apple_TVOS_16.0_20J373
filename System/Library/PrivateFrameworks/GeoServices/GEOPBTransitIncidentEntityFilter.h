//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncidentEntityFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_62a50c50 _nextStopMuids;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e45c66
- (unsigned long long)hash;	// IMP=0x0000000000e45c55
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e45bf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e45b84
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e45b0e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e45aff
- (id)jsonRepresentation;	// IMP=0x0000000000e459ed
- (id)dictionaryRepresentation;	// IMP=0x0000000000e4582f
- (id)description;	// IMP=0x0000000000e45780
- (void)dealloc;	// IMP=0x0000000000e45661

@end
