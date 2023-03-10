//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCloudKitArchivingUtilities, PFCloudKitStoreComparisonCache;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparer : NSObject
{
    _Bool _onlyCompareSharedZones;	// 8 = 0x8
    PFCloudKitStoreComparisonCache *_cache;	// 16 = 0x10
    PFCloudKitArchivingUtilities *_archivingUtilities;	// 24 = 0x18
}

+ (id)trimExcessiveValuesForLog:(id)arg1;	// IMP=0x006000000028035d
@property(nonatomic) _Bool onlyCompareSharedZones; // @synthesize onlyCompareSharedZones=_onlyCompareSharedZones;
@property(readonly, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities; // @synthesize archivingUtilities=_archivingUtilities;
@property(readonly, nonatomic) PFCloudKitStoreComparisonCache *cache; // @synthesize cache=_cache;
- (_Bool)ensureMirroredRelationshipsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027f99a
- (_Bool)ensureMoveReceiptsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027e78b
- (_Bool)compareCloudKitMetadataOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027e62e
- (_Bool)ensureStoresAgreeOnCloudKitTables:(id)arg1 error:(id *)arg2;	// IMP=0x000000000027de87
- (id)getRecordIDsForRelationship:(id)arg1 onObject:(id)arg2;	// IMP=0x000000000027d8fe
- (_Bool)compareRelationshipsOfRecordID:(id)arg1 withStoreObject:(id)arg2 andOtherObject:(id)arg3 error:(id *)arg4;	// IMP=0x000000000027cdce
- (_Bool)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3;	// IMP=0x000000000027cdad
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3;	// IMP=0x000000000027c914
- (_Bool)compareAttributesOnObject:(id)arg1 toObject:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027c06b
- (_Bool)compareObjectsInStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027b3b3
- (_Bool)compareDatabaseScopeAndIdentityInStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027af81
- (_Bool)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027a867
- (id)getObjectMatchingRecordID:(id)arg1 fromStore:(id)arg2 withManagedObjectContext:(id)arg3;	// IMP=0x000000000027a4af
- (_Bool)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027a08b
- (_Bool)ensureContentsMatch:(id *)arg1;	// IMP=0x000000000027a034
- (void)dealloc;	// IMP=0x0000000000279fea
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;	// IMP=0x0000000000279f66

@end

