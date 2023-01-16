//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo
{
    _Bool _recovered;	// 8 = 0x8
    _Bool _isPackage;	// 9 = 0x9
    CKRecordID *_repairRecordID;	// 16 = 0x10
    NSArray *_assetSizes;	// 24 = 0x18
    NSArray *_assetPutReceipts;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d6a59
@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(retain, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;

@end

