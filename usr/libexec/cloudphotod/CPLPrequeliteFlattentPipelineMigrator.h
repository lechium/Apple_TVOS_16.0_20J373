//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineOutgoingResources, CPLEnginePushRepository, CPLEngineResourceStorage, CPLPrequeliteClientCache, CPLPrequeliteResourceUploadQueue, CPLPrequeliteStore, MISSING_TYPE, NSError;

@interface CPLPrequeliteFlattentPipelineMigrator : NSObject
{
    CPLPrequeliteClientCache *_clientCache;	// 8 = 0x8
    CPLEnginePushRepository *_pushRepository;	// 16 = 0x10
    CPLEngineOutgoingResources *_outgoingResources;	// 24 = 0x18
    CPLEngineResourceStorage *_resources;	// 32 = 0x20
    CPLPrequeliteResourceUploadQueue *_uploadQueue;	// 40 = 0x28
    unsigned long long _countOfMigratedChanges;	// 48 = 0x30
    unsigned long long _countOfDroppedResources;	// 56 = 0x38
    unsigned long long _countOfOutgoingResources;	// 64 = 0x40
    NSError *_lastError;	// 72 = 0x48
    CPLPrequeliteStore *_store;	// 80 = 0x50
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000005c52d
@property(readonly, nonatomic) CPLPrequeliteStore *store; // @synthesize store=_store;
- (_Bool)migrate;	// IMP=0x001000000005c2af
- (_Bool)_migratePushQueue:(id)arg1;	// IMP=0x001000000005bbfe
- (_Bool)_discardResourceForUpload:(id)arg1;	// IMP=0x001000000005ba7d
- (_Bool)_enqueueResourcesForChange:(id)arg1 inOutgoingResourcesWithUploadIdentifier:(id)arg2;	// IMP=0x001000000005b599
- (unsigned long long)_availabilityOfResource:(id)arg1;	// IMP=0x001000000005b35f
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (void)_setLastError:(id)arg1;	// IMP=0x001000000005b2b3
- (id)initWithStore:(id)arg1;	// IMP=0x001000000005b11a

@end
