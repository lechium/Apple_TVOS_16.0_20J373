//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZone, NSCloudKitMirroringDelegateOptions, NSMutableArray, NSMutableDictionary, NSString, PFCloudKitMetadataCache;
@protocol PFCloudKitSerializerDelegate;

__attribute__((visibility("hidden")))
@interface PFCloudKitSerializer : NSObject
{
    NSMutableDictionary *_manyToManyRecordNameToRecord;	// 8 = 0x8
    NSString *_recordNamePrefix;	// 16 = 0x10
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;	// 24 = 0x18
    NSObject<PFCloudKitSerializerDelegate> *_delegate;	// 32 = 0x20
    NSMutableArray *_writtenAssetURLs;	// 40 = 0x28
    PFCloudKitMetadataCache *_metadataCache;	// 48 = 0x30
    CKRecordZone *_recordZone;	// 56 = 0x38
}

+ (void)_invalidateStaticCaches;	// IMP=0x0060000000229669
+ (id)defaultRecordZoneIDForDatabaseScope:(long long)arg1;	// IMP=0x006000000022948f
+ (void)initialize;	// IMP=0x006000000021ef2a
- (void).cxx_destruct;	// IMP=0x00000000002296a0
- (void)dealloc;	// IMP=0x000000000021f049
- (id)initWithMirroringOptions:(id)arg1 metadataCache:(id)arg2 recordNamePrefix:(id)arg3;	// IMP=0x000000000021efa9

@end
