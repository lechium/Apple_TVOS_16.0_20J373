//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLRecordTargetMapping, NSArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitResourcesCheckTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
    CPLRecordTargetMapping *_targetMapping;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000135af3
- (_Bool)_checkResource:(id)arg1 record:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000135790
- (void)runOperations;	// IMP=0x0010000000134d3c
- (id)initWithController:(id)arg1 resources:(id)arg2 targetMapping:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000134c0d

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

