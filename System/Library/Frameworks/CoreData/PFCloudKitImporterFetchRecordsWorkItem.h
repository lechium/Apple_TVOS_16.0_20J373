//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterFetchRecordsWorkItem
{
    NSMutableArray *_updatedObjectIDs;	// 8 = 0x8
    NSMutableDictionary *_failedObjectIDsToError;	// 16 = 0x10
    NSMutableDictionary *_recordIDToObjectID;	// 24 = 0x18
    NSMutableDictionary *_operationsToExecute;	// 32 = 0x20
}

- (id)entityNameToRelationshipsToUpdate;	// IMP=0x00000000001cfb0a
- (id)entityNameToAttributesToUpdate;	// IMP=0x00000000001cfa9d
- (id)createMirroringResultForRequest:(id)arg1 success:(_Bool)arg2 madeChanges:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001cf979
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ce0f4
- (id)description;	// IMP=0x00000000001ce035
- (void)dealloc;	// IMP=0x00000000001cdfa6
- (id)initWithOptions:(id)arg1 request:(id)arg2;	// IMP=0x00000000001cdf0e

@end

