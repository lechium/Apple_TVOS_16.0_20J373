//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest
{
    _Bool _recovered;	// 8 = 0x8
    _Bool _isPackage;	// 9 = 0x9
    CKRecordID *_repairRecordID;	// 16 = 0x10
    NSArray *_assetSizes;	// 24 = 0x18
    NSArray *_assetPutReceipts;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002c26c6
@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(copy, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002c2612
- (id)generateRequestOperations;	// IMP=0x00000000002c21e8
- (id)requestOperationClasses;	// IMP=0x00000000002c217c
- (id)initWithOperation:(id)arg1 repairRecordID:(id)arg2 recovered:(_Bool)arg3 package:(_Bool)arg4 sizes:(id)arg5 putReceipts:(id)arg6;	// IMP=0x00000000002c2088
- (id)initWithOperation:(id)arg1 recoveredPackageRepairRecordID:(id)arg2 sizes:(id)arg3 putReceipts:(id)arg4;	// IMP=0x00000000002c205c
- (id)initWithOperation:(id)arg1 recoveredAssetRepairRecordID:(id)arg2 size:(unsigned long long)arg3 putReceipt:(id)arg4;	// IMP=0x00000000002c1ee0
- (id)initWithOperation:(id)arg1 unrecoveredRepairRecordID:(id)arg2;	// IMP=0x00000000002c1eb8

@end

