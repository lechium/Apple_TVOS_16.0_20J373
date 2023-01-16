//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPMergeableValueIdentifier : PBCodable
{
    CKDPIdentifier *_value;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013a537
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013a456
- (unsigned long long)hash;	// IMP=0x000000000013a409
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013a341
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013a2a3
- (void)copyTo:(id)arg1;	// IMP=0x000000000013a240
- (void)writeTo:(id)arg1;	// IMP=0x000000000013a1e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013a1d6
- (id)dictionaryRepresentation;	// IMP=0x0000000000139efc
- (id)description;	// IMP=0x0000000000139e4d
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasValue;

@end

