//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLChangeBatch, CPLScopeFilter, CPLScopedIdentifier, NSArray;
@protocol NSFastEnumeration;

@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (NSArray *)allChangeBatches;
- (_Bool)compactChangeBatchesWithError:(id *)arg1;
- (_Bool)deleteAllChangesWithScopeFilter:(CPLScopeFilter *)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;
- (_Bool)hasSomeChangeWithScopeFilter:(CPLScopeFilter *)arg1;
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id <NSFastEnumeration>)arg1;
- (_Bool)hasSomeChangeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (_Bool)popNextBatchWithError:(id *)arg1;
- (CPLChangeBatch *)nextBatch;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)appendChangeBatch:(CPLChangeBatch *)arg1 error:(id *)arg2;
- (_Bool)hasQueuedBatches;
- (unsigned long long)countOfQueuedBatches;
@end

