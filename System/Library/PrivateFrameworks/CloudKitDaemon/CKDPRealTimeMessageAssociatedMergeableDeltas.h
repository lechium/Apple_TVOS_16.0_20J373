//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPMergeableValueIdentifier, CKDPRecordFieldIdentifier, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable
{
    CKDPRecordFieldIdentifier *_fieldIdentifier;	// 8 = 0x8
    CKDPMergeableValueIdentifier *_identifier;	// 16 = 0x10
    NSMutableArray *_mergeableDeltas;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
}

+ (Class)mergeableDeltasType;	// IMP=0x001000000010077c
- (void).cxx_destruct;	// IMP=0x000000000010175c
@property(retain, nonatomic) NSMutableArray *mergeableDeltas; // @synthesize mergeableDeltas=_mergeableDeltas;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010149d
- (unsigned long long)hash;	// IMP=0x0000000000101419
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001012ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001010c1
- (void)copyTo:(id)arg1;	// IMP=0x0000000000100f97
- (void)writeTo:(id)arg1;	// IMP=0x0000000000100e11
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000100e04
- (id)dictionaryRepresentation;	// IMP=0x000000000010083c
- (id)description;	// IMP=0x000000000010078d
- (id)mergeableDeltasAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010075f
- (unsigned long long)mergeableDeltasCount;	// IMP=0x0000000000100742
- (void)addMergeableDeltas:(id)arg1;	// IMP=0x00000000001006d8
- (void)clearMergeableDeltas;	// IMP=0x00000000001006bb
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasFieldIdentifier;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

