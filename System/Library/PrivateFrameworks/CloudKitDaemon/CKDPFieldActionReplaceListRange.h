//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange, NSMutableArray;

@interface CKDPFieldActionReplaceListRange : PBCodable
{
    CKDPListRange *_range;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
}

+ (Class)valueType;	// IMP=0x00100000000e237b
- (void).cxx_destruct;	// IMP=0x00000000000e2fd6
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e2df8
- (unsigned long long)hash;	// IMP=0x00000000000e2dab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2ce3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2b0a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e2a20
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e28d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e28c7
- (id)dictionaryRepresentation;	// IMP=0x00000000000e243b
- (id)description;	// IMP=0x00000000000e238c
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e235e
- (unsigned long long)valuesCount;	// IMP=0x00000000000e2341
- (void)addValue:(id)arg1;	// IMP=0x00000000000e22d7
- (void)clearValues;	// IMP=0x00000000000e22ba
@property(readonly, nonatomic) _Bool hasRange;

@end
