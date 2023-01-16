//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable
{
    NSMutableArray *_assets;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_field;	// 16 = 0x10
}

+ (Class)assetsType;	// IMP=0x00100000001991e5
- (void).cxx_destruct;	// IMP=0x0000000000199e40
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000199c62
- (unsigned long long)hash;	// IMP=0x0000000000199c15
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000199b4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000199974
- (void)copyTo:(id)arg1;	// IMP=0x000000000019988a
- (void)writeTo:(id)arg1;	// IMP=0x000000000019973e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000199731
- (id)dictionaryRepresentation;	// IMP=0x00000000001992a5
- (id)description;	// IMP=0x00000000001991f6
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001991c8
- (unsigned long long)assetsCount;	// IMP=0x00000000001991ab
- (void)addAssets:(id)arg1;	// IMP=0x0000000000199141
- (void)clearAssets;	// IMP=0x0000000000199124
@property(readonly, nonatomic) _Bool hasField;

@end

