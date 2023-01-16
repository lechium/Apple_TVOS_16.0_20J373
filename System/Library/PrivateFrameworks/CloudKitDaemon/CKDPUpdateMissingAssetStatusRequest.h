//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPUpdateMissingAssetStatusRequest : PBRequest
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _packageAssetSizes;	// 8 = 0x8
    long long _assetSize;	// 32 = 0x20
    NSString *_assetPutReceipt;	// 40 = 0x28
    CKDPRecordIdentifier *_missingAssetStatusRecordID;	// 48 = 0x30
    NSMutableArray *_packagePutReceipts;	// 56 = 0x38
    _Bool _recovered;	// 64 = 0x40
    struct {
        unsigned int assetSize:1;
        unsigned int recovered:1;
    } _has;	// 68 = 0x44
}

+ (Class)packagePutReceiptsType;	// IMP=0x00100000001c715a
+ (id)options;	// IMP=0x00100000001c6e64
- (void).cxx_destruct;	// IMP=0x00000000001c844b
@property(retain, nonatomic) NSMutableArray *packagePutReceipts; // @synthesize packagePutReceipts=_packagePutReceipts;
@property(retain, nonatomic) NSString *assetPutReceipt; // @synthesize assetPutReceipt=_assetPutReceipt;
@property(nonatomic) long long assetSize; // @synthesize assetSize=_assetSize;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecordID; // @synthesize missingAssetStatusRecordID=_missingAssetStatusRecordID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c8157
- (unsigned long long)hash;	// IMP=0x00000000001c808a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c7f08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c7c96
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c7ac6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c78e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c78d8
- (id)dictionaryRepresentation;	// IMP=0x00000000001c721a
- (id)description;	// IMP=0x00000000001c716b
- (id)packagePutReceiptsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c713d
- (unsigned long long)packagePutReceiptsCount;	// IMP=0x00000000001c7120
- (void)addPackagePutReceipts:(id)arg1;	// IMP=0x00000000001c70b6
- (void)clearPackagePutReceipts;	// IMP=0x00000000001c7099
- (void)setPackageAssetSizes:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001c7082
- (long long)packageAssetSizeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c6fb5
- (void)addPackageAssetSize:(long long)arg1;	// IMP=0x00000000001c6fa1
- (void)clearPackageAssetSizes;	// IMP=0x00000000001c6f90
@property(readonly, nonatomic) long long *packageAssetSizes;
@property(readonly, nonatomic) unsigned long long packageAssetSizesCount;
@property(readonly, nonatomic) _Bool hasAssetPutReceipt;
@property(nonatomic) _Bool hasAssetSize;
@property(nonatomic) _Bool hasRecovered;
@property(readonly, nonatomic) _Bool hasMissingAssetStatusRecordID;
- (void)dealloc;	// IMP=0x00000000001c6e24

@end

