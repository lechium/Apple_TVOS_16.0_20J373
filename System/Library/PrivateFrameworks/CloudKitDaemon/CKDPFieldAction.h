//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable
{
    CKDPFieldActionDeleteListRange *_deleteListRange;	// 8 = 0x8
    CKDPFieldActionInsertIntoList *_insertIntoList;	// 16 = 0x10
    CKDPFieldActionReplaceListRange *_replaceListRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022491b
@property(retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange; // @synthesize replaceListRange=_replaceListRange;
@property(retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange; // @synthesize deleteListRange=_deleteListRange;
@property(retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList; // @synthesize insertIntoList=_insertIntoList;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002247db
- (unsigned long long)hash;	// IMP=0x000000000022476e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000224676
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002245b2
- (void)copyTo:(id)arg1;	// IMP=0x000000000022452f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002244b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002244a8
- (id)dictionaryRepresentation;	// IMP=0x0000000000224133
- (id)description;	// IMP=0x0000000000224084
@property(readonly, nonatomic) _Bool hasReplaceListRange;
@property(readonly, nonatomic) _Bool hasDeleteListRange;
@property(readonly, nonatomic) _Bool hasInsertIntoList;

@end
