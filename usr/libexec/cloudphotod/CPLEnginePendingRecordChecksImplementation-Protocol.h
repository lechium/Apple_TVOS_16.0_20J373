//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class NSArray, NSString;

@protocol CPLEnginePendingRecordChecksImplementation <CPLEngineStorageImplementation>
- (_Bool)hasRecordsToCheckWithScopeIdentifier:(NSString *)arg1;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)dequeueCloudScopedIdentifiersToCheck:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)nextBatchOfRecordsToCheckWithScopeIdentifier:(NSString *)arg1;
- (_Bool)enqueueCloudScopedIdentifiersToCheck:(NSArray *)arg1 error:(id *)arg2;
@end

