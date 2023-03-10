//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMFileTransfer.h>

@interface IMFileTransfer (IMFileTransfer_CKRecord)
+ (_Bool)validateMD5HashForRecord:(id)arg1;	// IMP=0x00800000000afce1
+ (id)md5HashForRecord:(id)arg1;	// IMP=0x00800000000afc0c
+ (void)cleanUpAssetsOnDiskForRecord:(id)arg1;	// IMP=0x00800000000afb2f
+ (_Bool)attachmentRecordHasAsset:(id)arg1;	// IMP=0x00800000000afa00
+ (id)transferGUIDOfRecord:(id)arg1;	// IMP=0x00800000000af92b
+ (long long)sizeOfAssetForRecord:(id)arg1;	// IMP=0x00800000000af838
+ (id)utiTypeForRecord:(id)arg1;	// IMP=0x00800000000af763
+ (_Bool)_recordIsInvalid:(id)arg1;	// IMP=0x00800000000af6e4
+ (void)cleanUpAsset:(id)arg1;	// IMP=0x00800000000ad9fc
+ (id)transferMetaDataFromRecord:(id)arg1;	// IMP=0x00800000000ad8ca
+ (id)_recordType;	// IMP=0x00800000000ac3cd
- (id)_fileManager;	// IMP=0x00100000000b00d2
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(_Bool)arg2;	// IMP=0x00100000000af0c2
- (void)moveAssetFromRecord:(id)arg1;	// IMP=0x00100000000ae610
- (_Bool)hasPreferredAssetOverRecord:(id)arg1;	// IMP=0x00100000000ae111
- (_Bool)wantsAssetFromRecord:(id)arg1;	// IMP=0x00100000000adb66
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000acb77
- (id)recordIDWithZoneID:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000ac968
- (void)_setRecordPropertiesBasedOnExistingRecord:(id)arg1;	// IMP=0x00100000000ac89a
- (id)md5HashForTransfer;	// IMP=0x00100000000ac83b
- (id)md5HashForURL:(id)arg1;	// IMP=0x00100000000ac6e9
- (id)ckRecordIDFromExistingMetadata;	// IMP=0x00100000000ac67f
- (id)_copyCKRecordFromExistingCKMetadata;	// IMP=0x00100000000ac576
- (id)_assetURLToInsertToRecord;	// IMP=0x00100000000ac3da
- (id)_ckUniqueID;	// IMP=0x00100000000ac3bb
@end

